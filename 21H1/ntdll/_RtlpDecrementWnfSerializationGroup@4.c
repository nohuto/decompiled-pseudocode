/*
 * XREFs of _RtlpDecrementWnfSerializationGroup@4 @ 0x4B2AC0B6
 * Callers:
 *     _RtlpSubscribeWnfStateChangeNotificationInternal@40 @ 0x4B2B068F (_RtlpSubscribeWnfStateChangeNotificationInternal@40.c)
 *     _RtlpDecRefWnfUserSubscription@12 @ 0x4B2DF21A (_RtlpDecRefWnfUserSubscription@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

void __thiscall RtlpDecrementWnfSerializationGroup(char *BaseAddress)
{
  char **v2; // edx
  PVOID *v3; // ecx
  _RTL_SRWLOCK *v4; // eax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 24));
  if ( _InterlockedDecrement((volatile signed __int32 *)BaseAddress + 5) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 24));
  }
  else
  {
    v2 = (char **)*((_DWORD *)BaseAddress + 2);
    if ( v2[1] != BaseAddress + 8 || (v3 = (PVOID *)*((_DWORD *)BaseAddress + 3), *v3 != BaseAddress + 8) )
      __fastfail(3u);
    v4 = (_RTL_SRWLOCK *)(dword_4B3A664C + 24);
    *v3 = v2;
    v2[1] = (char *)v3;
    RtlReleaseSRWLockExclusive(v4);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
}
