/*
 * XREFs of _RtlRunOnceComplete@12 @ 0x4B2B1140
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 * Callees:
 *     _RtlpRunOnceWakeAll@4 @ 0x4B2B11E4 (_RtlpRunOnceWakeAll@4.c)
 */

NTSTATUS __cdecl RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  char v3; // al
  signed __int32 v4; // edx
  unsigned int v5; // ecx
  unsigned int Value; // [esp+8h] [ebp-4h] BYREF

  if ( (Flags & (Flags - 1)) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v3 = (Value ^ ~(unsigned __int8)(Flags >> 1)) & 3 ^ Value;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v3 & 2) == 0) )
    return -1073741583;
  Value = RunOnce->Value;
  v4 = Value & 3;
  v5 = (unsigned int)Context & 0xFFFFFFFC | v3 & 2;
  if ( v4 != 1 )
  {
    if ( v4 != 3 )
      return -1073741823;
    if ( (v3 & 1) == 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)RunOnce, v5, Value) == Value )
        return 0;
      return -1073741771;
    }
    return -1073741584;
  }
  if ( (v3 & 1) == 0 )
    return -1073741584;
  Value = _InterlockedExchange((volatile __int32 *)RunOnce, v5);
  if ( (Value & 3) == 1 )
  {
    RtlpRunOnceWakeAll(&Value);
    return 0;
  }
  return -1073741734;
}
