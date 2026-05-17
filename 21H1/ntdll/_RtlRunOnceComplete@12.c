/*
 * XREFs of _RtlRunOnceComplete@12 @ 0x4B2B1140
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlpFcEnsureSubscriptionManagerStarted@4 @ 0x4B2B222D (_RtlpFcEnsureSubscriptionManagerStarted@4.c)
 * Callees:
 *     _RtlpRunOnceWakeAll@4 @ 0x4B2B11E4 (_RtlpRunOnceWakeAll@4.c)
 */

int __stdcall RtlRunOnceComplete(volatile signed __int32 *a1, unsigned int a2, int a3)
{
  char v3; // al
  signed __int32 v4; // edx
  unsigned int v5; // ecx
  volatile signed __int32 v7; // [esp+8h] [ebp-4h] BYREF

  if ( (a2 & (a2 - 1)) != 0 || (a2 & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v3 = (v7 ^ ~(unsigned __int8)(a2 >> 1)) & 3 ^ v7;
  if ( a3 && ((a3 & 3) != 0 || (v3 & 2) == 0) )
    return -1073741583;
  v7 = *a1;
  v4 = v7 & 3;
  v5 = a3 & 0xFFFFFFFC | v3 & 2;
  if ( v4 != 1 )
  {
    if ( v4 != 3 )
      return -1073741823;
    if ( (v3 & 1) == 0 )
    {
      if ( _InterlockedCompareExchange(a1, v5, v7) == v7 )
        return 0;
      return -1073741771;
    }
    return -1073741584;
  }
  if ( (v3 & 1) == 0 )
    return -1073741584;
  v7 = _InterlockedExchange(a1, v5);
  if ( (v7 & 3) == 1 )
  {
    RtlpRunOnceWakeAll(&v7);
    return 0;
  }
  return -1073741734;
}
