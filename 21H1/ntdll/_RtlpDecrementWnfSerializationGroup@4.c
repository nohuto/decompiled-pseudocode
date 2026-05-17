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

int __thiscall RtlpDecrementWnfSerializationGroup(int this)
{
  int v3; // edx
  _DWORD *v4; // ecx
  int v5; // eax

  RtlAcquireSRWLockExclusive(dword_4B3A664C + 24);
  if ( _InterlockedDecrement((volatile signed __int32 *)(this + 20)) )
    return RtlReleaseSRWLockExclusive(dword_4B3A664C + 24);
  v3 = *(_DWORD *)(this + 8);
  if ( *(_DWORD *)(v3 + 4) != this + 8 || (v4 = *(_DWORD **)(this + 12), *v4 != this + 8) )
    __fastfail(3u);
  v5 = dword_4B3A664C + 24;
  *v4 = v3;
  *(_DWORD *)(v3 + 4) = v4;
  RtlReleaseSRWLockExclusive(v5);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, this);
}
