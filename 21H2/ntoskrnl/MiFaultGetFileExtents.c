/*
 * XREFs of MiFaultGetFileExtents @ 0x1405483F0
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 * Callees:
 *     MiReleaseFaultCharges @ 0x1402C8F9C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x1402C9564 (MiRetainSubsection.c)
 *     MiDereferenceControlArea @ 0x1402D38B8 (MiDereferenceControlArea.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403A6208 (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x140548EC4 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, struct _SLIST_ENTRY *a2)
{
  ULONG_PTR Next; // rdi
  __int64 v5; // r14
  unsigned int SessionId; // eax
  unsigned int FileExtents; // ebx

  Next = (ULONG_PTR)a2[13].Next;
  v5 = *(_QWORD *)Next;
  if ( (*(_BYTE *)(Next + 34) & 2) != 0 )
  {
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    MiGetSharedProtos(v5, SessionId, Next);
  }
  MiRetainSubsection((__int64 *)Next);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultSynchronization(a1);
  FileExtents = MiAllocateFileExtents(Next, 2);
  MiFreeInPageSupportBlock(a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges((__int64 *)Next);
  return FileExtents;
}
