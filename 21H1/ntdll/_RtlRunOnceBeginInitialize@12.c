/*
 * XREFs of _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 *     _RtlpHpPerHeapStackTraceCleanup@12 @ 0x4B36DA1B (_RtlpHpPerHeapStackTraceCleanup@12.c)
 *     _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5 (_RtlpHpStackTraceHeapGetContext@12.c)
 * Callees:
 *     _RtlpRunOnceWaitForInit@8 @ 0x4B2F28A3 (_RtlpRunOnceWaitForInit@8.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  NTSTATUS v3; // esi
  unsigned int Value; // eax
  int v6; // ecx
  unsigned int v7; // edx
  signed __int32 v8; // ecx

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  v3 = 0;
  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
    goto LABEL_5;
  if ( (Flags & 1) != 0 )
    return -1073741823;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = Value & 3;
      if ( (Value & 3) != 0 )
        break;
      v7 = Value;
      if ( (Flags & 2) != 0 )
        v8 = 3;
      else
        v8 = 1;
      Value = _InterlockedCompareExchange((volatile signed __int32 *)RunOnce, v8, Value);
      if ( Value == v7 )
        return 259;
    }
    if ( v6 != 1 )
      break;
    if ( (Flags & 2) != 0 )
      return -1073741584;
    Value = RtlpRunOnceWaitForInit(Value, RunOnce);
  }
  if ( v6 == 3 )
    return (Flags & 2) == 0 ? -1073741584 : 259;
LABEL_5:
  if ( Context )
    *Context = (PVOID)(Value & 0xFFFFFFFC);
  return v3;
}
