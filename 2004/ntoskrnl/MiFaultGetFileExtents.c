/*
 * XREFs of MiFaultGetFileExtents @ 0x140542F20
 * Callers:
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseFaultCharges @ 0x1403573CC (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140357B64 (MiRetainSubsection.c)
 *     MiDereferenceControlArea @ 0x140360978 (MiDereferenceControlArea.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x1405439F4 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
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
