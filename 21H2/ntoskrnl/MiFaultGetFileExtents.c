/*
 * XREFs of MiFaultGetFileExtents @ 0x1405A7158
 * Callers:
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 * Callees:
 *     MiReleaseFaultCharges @ 0x140250924 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140251340 (MiRetainSubsection.c)
 *     MiGetSharedProtos @ 0x140256DF8 (MiGetSharedProtos.c)
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiGetSessionIdForVa @ 0x1402CD940 (MiGetSessionIdForVa.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseFaultSynchronization @ 0x1405A7A00 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v5; // r14
  unsigned int SessionIdForVa; // r15d
  unsigned int FileExtents; // ebx

  v2 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 34) & 2) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(a1, *(_QWORD *)(a2 + 224));
    MiGetSharedProtos(v5, SessionIdForVa, v2);
  }
  else
  {
    SessionIdForVa = 0;
  }
  MiRetainSubsection((__int64 *)v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultSynchronization(a1);
  FileExtents = MiAllocateFileExtents(v2, 2, SessionIdForVa);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges((__int64 *)v2);
  return FileExtents;
}
