/*
 * XREFs of MiDereferenceControlArea @ 0x1402D38B8
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x140542050 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1405483F0 (MiFaultGetFileExtents.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiMapViewInSystemSpace @ 0x1406E887C (MiMapViewInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiReleaseVadEventBlocks @ 0x1406ED390 (MiReleaseVadEventBlocks.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3);
}
