/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x140888EE0
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x14088982C (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140889508 (DbgkpWerInitializeDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140889670 (DbgkpWerInvokeCallbacks.c)
 *     IoCaptureLiveDump @ 0x1408963F8 (IoCaptureLiveDump.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  _OWORD *PoolWithTag; // rax
  __int64 v5; // rdi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  struct _WORK_QUEUE_ITEM *v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  *a2 = 1;
  *(_DWORD *)(a1 + 92) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x57676244u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *(_QWORD *)(a1 + 128) = PoolWithTag;
    *(_DWORD *)PoolWithTag = 1;
    *((_DWORD *)PoolWithTag + 1) = 48;
    v7 = *(_DWORD *)(a1 + 88);
    if ( (v7 & 1) != 0 )
    {
      *((_DWORD *)PoolWithTag + 6) |= 4u;
      v7 = *(_DWORD *)(a1 + 88);
    }
    v8 = *((_DWORD *)PoolWithTag + 6);
    if ( (v7 & 4) != 0 )
      *(_DWORD *)(v5 + 28) |= 1u;
    *(_DWORD *)(v5 + 24) = v8 | 0x10;
    v9 = *(_QWORD *)(a1 + 104);
    v13 = 0LL;
    v10 = WerLiveKernelOpenDumpFile(v9, &v13);
    v6 = v10;
    if ( v10 >= 0 )
    {
      *(_QWORD *)(v5 + 8) = v13;
      *(_DWORD *)(a1 + 112) |= 2u;
      *(_DWORD *)(v5 + 24) |= 8u;
      v6 = DbgkpWerInitializeDeferredLiveDump(a1);
      if ( v6 >= 0 )
      {
        v6 = DbgkpWerInvokeCallbacks(a1);
        if ( v6 >= 0 )
        {
          v6 = IoCaptureLiveDump(
                 *(_DWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 40),
                 *(_QWORD *)(a1 + 48),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v5,
                 (__int64)&v14);
          if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741802 )
          {
            v11 = *(struct _WORK_QUEUE_ITEM **)(a1 + 120);
            *(_QWORD *)(a1 + 136) = v14;
            ExQueueWorkItem(v11, DelayedWorkQueue);
            v6 = 0;
            *a2 = 0;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
              (unsigned int)v6);
          }
        }
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n", (unsigned int)v10);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
