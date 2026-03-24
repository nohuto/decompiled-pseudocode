/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x140314A6C
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x140274340 (MmGetImageFileSignatureInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406C34F4 (MiDereferenceFailedControlArea.c)
 *     MiSectionDelete @ 0x1406EAB00 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
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
