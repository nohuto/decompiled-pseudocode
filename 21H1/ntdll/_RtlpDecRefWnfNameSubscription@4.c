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

signed __int32 __thiscall RtlpDecRefWnfNameSubscription(int this)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(dword_4B3A664C + 4));
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(this + 40));
  if ( _InterlockedDecrement((volatile signed __int32 *)(this + 80)) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(this + 40));
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (int)NtCurrentPeb()->SharedData + 564;
    else
      v2 = 2147353486;
    if ( *(_BYTE *)v2 )
      RtlpWnfETWEventNameSubRundown(*(_DWORD *)(this + 16), *(_DWORD *)(this + 20));
    NtUnsubscribeWnfStateChange(this + 16);
    v3 = *(_DWORD *)(this + 28);
    if ( *(_DWORD *)(v3 + 4) != this + 28 || (v4 = *(_DWORD **)(this + 32), *v4 != this + 28) )
      __fastfail(3u);
    *v4 = v3;
    *(_DWORD *)(v3 + 4) = v4;
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(this + 40));
    if ( *(_DWORD *)(this + 88) )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(this + 88));
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(dword_4B3A664C + 4));
}
