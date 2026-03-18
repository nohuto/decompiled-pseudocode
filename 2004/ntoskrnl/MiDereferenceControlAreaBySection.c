/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14024A858
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x14034A900 (MmGetImageFileSignatureInformation.c)
 *     MiCreateImageOrDataSection @ 0x1405FB740 (MiCreateImageOrDataSection.c)
 *     MiSectionDelete @ 0x1405FF160 (MiSectionDelete.c)
 *     MiDereferenceFailedControlArea @ 0x140710F04 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
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
