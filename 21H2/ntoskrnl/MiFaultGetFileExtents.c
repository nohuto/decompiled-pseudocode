/*
 * XREFs of MiFaultGetFileExtents @ 0x140548630
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 * Callees:
 *     MiReleaseFaultCharges @ 0x1402477FC (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140247E44 (MiRetainSubsection.c)
 *     MiDereferenceControlArea @ 0x140251BB8 (MiDereferenceControlArea.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x140549104 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
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
