/*
 * XREFs of MiFaultGetFileExtents @ 0x1405468F0
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     MiReleaseFaultCharges @ 0x140327DCC (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140328334 (MiRetainSubsection.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x1405473C4 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, _SLIST_ENTRY *a2)
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
  MiRetainSubsection((_QWORD *)Next);
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
