/*
 * XREFs of SyncLoadDDB @ 0x1C00BC4EC
 * Callers:
 *     AMLILoadDDB @ 0x1C00BD7A8 (AMLILoadDDB.c)
 * Callees:
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 *     GetThreadCurrentContext @ 0x1C002DCD0 (GetThreadCurrentContext.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     FreeContext @ 0x1C00694F8 (FreeContext.c)
 */

__int64 __fastcall SyncLoadDDB(char *Entry)
{
  char v2; // si
  __int64 ThreadCurrentContext; // rbx
  KIRQL v4; // r10
  unsigned int restarted; // ebx
  NTSTATUS v7; // eax
  const void *v8; // rbp
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = 0;
  v2 = 0;
  if ( (int)EmClientQueryRuleState(&GUID_EM_RULE_AMLI_ALLOW_INVALID_RECLAIM_MEMORY_MAP_ON_LOAD, &v11) >= 0 && v11 == 2 )
  {
    v2 = 1;
    _InterlockedIncrement(&gAllowInvalidReclaimMemoryMap);
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    restarted = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
    PrintDebugMessage(184, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)Entry + 11) = 0LL;
    FreeContext(Entry);
  }
  else
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    ThreadCurrentContext = GetThreadCurrentContext();
    KeReleaseSpinLock(&SpinLock, v4);
    if ( ThreadCurrentContext )
    {
      restarted = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
      PrintDebugMessage(182, 0LL, 0LL, 0LL, 0LL);
      *((_QWORD *)Entry + 11) = 0LL;
      FreeContext(Entry);
    }
    else
    {
      v9 = 0LL;
      memset(&Event, 0, 20);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_DWORD *)Entry + 16) |= 0x200u;
      *((_QWORD *)Entry + 21) = EvalMethodComplete;
      *((_QWORD *)Entry + 23) = &v9;
      restarted = RestartContext((__int64)Entry);
      if ( restarted == 32772 )
      {
        while ( 1 )
        {
          v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v8 = (const void *)v7;
          if ( v7 )
            break;
          restarted = v9;
          if ( (_DWORD)v9 == 32771 )
            restarted = RestartContext(*((__int64 *)&v9 + 1));
          if ( restarted != 32772 )
            goto LABEL_7;
        }
        restarted = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError((__int64)Entry, -1072431098);
        PrintDebugMessage(183, v8, 0LL, 0LL, 0LL);
      }
    }
LABEL_7:
    if ( v2 )
      _InterlockedDecrement(&gAllowInvalidReclaimMemoryMap);
  }
  return restarted;
}
