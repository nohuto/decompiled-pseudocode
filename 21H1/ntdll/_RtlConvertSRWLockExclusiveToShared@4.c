/*
 * XREFs of _RtlConvertSRWLockExclusiveToShared@4 @ 0x4B34A3C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

char __stdcall RtlConvertSRWLockExclusiveToShared(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedCompareExchange(a1, 17, 1);
  if ( v1 != 1 )
  {
    if ( (v1 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( _interlockedbittestandset(a1, 2u) )
      return 0;
    RtlpWakeSRWLock(a1, 1, v1 | 4);
  }
  return 1;
}
