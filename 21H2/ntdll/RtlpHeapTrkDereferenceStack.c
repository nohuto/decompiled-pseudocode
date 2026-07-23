/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800FDFCC
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800FEAE8 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FEBD4 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHeapTrkDereferenceStack(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  PVOID *v5; // rax
  PVOID *v6; // rcx

  v2 = *((_WORD *)BaseAddress + 9) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016DBF8 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_18016DA78);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18016DBF8 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
}
