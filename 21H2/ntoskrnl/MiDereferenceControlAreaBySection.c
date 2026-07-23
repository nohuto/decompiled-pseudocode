/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14031F7BC
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x1402622E0 (MmGetImageFileSignatureInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406220F4 (MiDereferenceFailedControlArea.c)
 *     MiSectionDelete @ 0x140701EE0 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
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
