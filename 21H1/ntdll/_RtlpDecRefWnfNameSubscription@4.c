/*
 * XREFs of _RtlpDecRefWnfNameSubscription@4 @ 0x4B2DEC15
 * Callers:
 *     _RtlpRemoveUserSubFromNameSub@12 @ 0x4B2DEAEC (_RtlpRemoveUserSubFromNameSub@12.c)
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtUnsubscribeWnfStateChange@4 @ 0x4B2F4650 (_NtUnsubscribeWnfStateChange@4.c)
 *     _RtlpWnfETWEventNameSubRundown@12 @ 0x4B33C40D (_RtlpWnfETWEventNameSubRundown@12.c)
 */

void __thiscall RtlpDecRefWnfNameSubscription(char *BaseAddress)
{
  int v2; // eax
  char **v3; // edx
  PVOID *v4; // ecx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 10);
  if ( _InterlockedDecrement((volatile signed __int32 *)BaseAddress + 20) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 10);
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (int)NtCurrentPeb()->SharedData + 564;
    else
      v2 = 2147353486;
    if ( *(_BYTE *)v2 )
      RtlpWnfETWEventNameSubRundown(*((_DWORD *)BaseAddress + 4), *((_DWORD *)BaseAddress + 5));
    NtUnsubscribeWnfStateChange((PCWNF_STATE_NAME)BaseAddress + 2);
    v3 = (char **)*((_DWORD *)BaseAddress + 7);
    if ( v3[1] != BaseAddress + 28 || (v4 = (PVOID *)*((_DWORD *)BaseAddress + 8), *v4 != BaseAddress + 28) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 10);
    if ( *((_DWORD *)BaseAddress + 22) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)BaseAddress + 22));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(dword_4B3A664C + 4));
}
