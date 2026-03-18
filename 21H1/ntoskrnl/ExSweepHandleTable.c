/*
 * XREFs of ExSweepHandleTable @ 0x1405D5FF0
 * Callers:
 *     ObKillProcess @ 0x1405D8378 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406B626C (ExpBlockOnLockedHandleEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, char a3, _DWORD *a4)
{
  char v4; // r13
  struct _KTHREAD *CurrentThread; // rbp
  int v9; // esi
  __int64 v10; // rbx
  signed __int64 *v11; // rdi
  signed __int64 v12; // r8
  bool v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *result; // rax
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v20; // [rsp+20h] [rbp-88h]
  int v21; // [rsp+28h] [rbp-80h]
  __int128 v22; // [rsp+30h] [rbp-78h] BYREF
  __int128 v23; // [rsp+40h] [rbp-68h]
  __int128 v24; // [rsp+50h] [rbp-58h]

  v4 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0LL, (__int64)&v22, a4);
    v4 = 1;
  }
  v9 = 0;
  v10 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v11 = (signed __int64 *)ExpLookupHandleTableEntry(a2, v10);
  if ( v11 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v11);
        v12 = *v11;
        if ( (*v11 & 1) != 0 )
          break;
        if ( v12 )
        {
          ExpBlockOnLockedHandleEntry(a2, v11);
        }
        else
        {
LABEL_7:
          v10 += 4LL;
          v11 += 2;
          if ( (v10 & 0x3FF) == 0 )
          {
            v10 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v12 == _InterlockedCompareExchange64(v11, v12 - 1, v12) )
      {
        LOBYTE(v21) = 1;
        LOBYTE(v20) = a3;
        v13 = (int)ObCloseHandleTableEntry(
                     a2,
                     v11,
                     a1,
                     v10,
                     v20,
                     v21,
                     v22,
                     *((_QWORD *)&v22 + 1),
                     v23,
                     *((_QWORD *)&v23 + 1),
                     v24,
                     *((_QWORD *)&v24 + 1)) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v13 )
          ++v9;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 64);
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
  if ( v4 == 1 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)&v22, 0LL, v18, v19);
  return result;
}
