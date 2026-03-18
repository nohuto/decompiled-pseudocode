/*
 * XREFs of MiDereferenceControlAreaBySection @ 0x140287574
 * Callers:
 *     MmGetImageFileSignatureInformation @ 0x140246FD0 (MmGetImageFileSignatureInformation.c)
 *     MiSectionDelete @ 0x1406FC070 (MiSectionDelete.c)
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x1407F854C (MiDereferenceFailedControlArea.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
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
