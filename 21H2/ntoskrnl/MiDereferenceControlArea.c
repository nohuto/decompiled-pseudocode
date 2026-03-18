/*
 * XREFs of MiDereferenceControlArea @ 0x14025E274
 * Callers:
 *     MiRefillPurgedExtents @ 0x1405A0A20 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1405A7158 (MiFaultGetFileExtents.c)
 *     MiMapViewInSystemSpace @ 0x1406F3FDC (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReleaseVadEventBlocks @ 0x1407B97B0 (MiReleaseVadEventBlocks.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
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
