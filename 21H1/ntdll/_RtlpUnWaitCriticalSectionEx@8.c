/*
 * XREFs of _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0
 * Callers:
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 * Callees:
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __fastcall RtlpUnWaitCriticalSectionEx(signed __int32 a1, void *a2)
{
  int result; // eax
  signed __int32 v3; // [esp+0h] [ebp-4h] BYREF

  v3 = a1;
  if ( a2 == (void *)-1 )
  {
    _InterlockedOr(&v3, 0);
    return RtlpWakeByAddress(a1);
  }
  else
  {
    result = NtSetEvent(a2, 0);
    if ( result < 0 )
      RtlRaiseStatus(result);
  }
  return result;
}
