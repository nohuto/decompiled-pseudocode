/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x14029BDD8
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x140354060 (MmGetImageFileSignatureInformation.c)
 *     MiSectionDelete @ 0x14067DC40 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x14067FCA0 (MiCreateImageOrDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x1406E3578 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
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
