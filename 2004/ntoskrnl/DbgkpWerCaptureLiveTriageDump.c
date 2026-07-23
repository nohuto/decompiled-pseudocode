/*
 * XREFs of DbgkpWerCaptureLiveTriageDump @ 0x140885E38
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x1408865DC (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1403FF110 (RtlCaptureContext.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KeCapturePersistentThreadState @ 0x1404FFBF0 (KeCapturePersistentThreadState.c)
 *     DbgkpWerInvokeCallbacks @ 0x140886420 (DbgkpWerInvokeCallbacks.c)
 *     DbgkpWerWriteTriageDump @ 0x140886828 (DbgkpWerWriteTriageDump.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveTriageDump(__int64 a1)
{
  PVOID PoolWithTag; // rax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  DbgPrintEx(5u, 3u, "DBGK: Creating mini live dump. ComponentName %ws\n", a1);
  *(_DWORD *)(a1 + 92) = 1048572;
  memset(&ContextRecord, 0, sizeof(ContextRecord));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40000uLL, 0x57676244u);
  *(_QWORD *)(a1 + 144) = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCaptureContext(&ContextRecord);
    v4 = KeCapturePersistentThreadState(
           (__int64)&ContextRecord,
           0LL,
           *(_DWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56),
           *(_QWORD *)(a1 + 64),
           *(_QWORD *)(a1 + 144));
    if ( v4 )
    {
      *(_DWORD *)(a1 + 152) = v4;
      v5 = DbgkpWerInvokeCallbacks(a1);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v6 = DbgkpWerWriteTriageDump(a1);
        v3 = v6;
        if ( v6 >= 0 )
        {
          v7 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 104), 0LL);
          v3 = v7;
          if ( v7 >= 0 )
            *(_DWORD *)(a1 + 112) |= 1u;
          else
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveTriageDump: WerLiveKernelSubmitReport failed with status 0x%X\n",
              (unsigned int)v7);
        }
        else
        {
          DbgPrintEx(5u, 0, "DBGK: DbgkpWerWriteTriageDump failed, status 0x%X\n", (unsigned int)v6);
        }
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: DbgkpWerInvokeCallbacks failed, status 0x%X\n", (unsigned int)v5);
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: KeCapturePersistentThreadState failed\n");
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
