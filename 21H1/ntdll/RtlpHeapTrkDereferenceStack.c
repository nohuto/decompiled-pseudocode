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

void __thiscall RtlpHeapTrkDereferenceStack(PVOID **BaseAddress)
{
  char v2; // bl
  int v3; // edi
  bool v4; // zf
  PVOID *v5; // eax
  PVOID *v6; // ecx

  v2 = 0;
  v3 = *((_WORD *)BaseAddress + 5) & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v3));
  v4 = BaseAddress[3] == (PVOID *)1;
  BaseAddress[3] = (PVOID *)((char *)BaseAddress[3] - 1);
  if ( v4 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    _InterlockedDecrement(&dword_4B3A6C58);
    v2 = 1;
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D90 + 4 * v3));
  if ( v2 )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
}
