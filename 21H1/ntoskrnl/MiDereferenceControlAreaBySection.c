/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x1402A3888
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14030D420 (MmGetImageFileSignatureInformation.c)
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x1406341A0 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x1406ED434 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaBySection(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return MiCheckControlArea(a1, v5);
}
