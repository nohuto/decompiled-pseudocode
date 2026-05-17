/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x4B36451B
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x4B364E7D (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x4B364F2B (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

signed __int32 __thiscall RtlpHeapTrkDereferenceStack(void ***this)
{
  char v2; // bl
  int v3; // edi
  bool v4; // zf
  void **v5; // eax
  void **v6; // ecx
  signed __int32 result; // eax

  v2 = 0;
  v3 = *((_WORD *)this + 5) & 0xF;
  RtlAcquireSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D90 + 4 * v3));
  v4 = this[3] == (void **)1;
  this[3] = (void **)((char *)this[3] - 1);
  if ( v4 )
  {
    v5 = *this;
    if ( (*this)[1] != this || (v6 = this[1], *v6 != this) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    _InterlockedDecrement(&dword_4B3A6C58);
    v2 = 1;
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int32 **)(dword_4B3A6D90 + 4 * v3));
  if ( v2 )
    return RtlFreeHeap(dword_4B3A6D94, 0, (int)this);
  return result;
}
