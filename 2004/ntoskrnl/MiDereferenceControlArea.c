/*
 * XREFs of MiDereferenceControlArea @ 0x140360978
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x14053CB80 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x140542F20 (MiFaultGetFileExtents.c)
 *     MiReleaseVadEventBlocks @ 0x1405F8F10 (MiReleaseVadEventBlocks.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiMapViewInSystemSpace @ 0x14060B094 (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  _DWORD *v3; // r8

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2, v3);
}
