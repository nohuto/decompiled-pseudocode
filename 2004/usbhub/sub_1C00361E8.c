/*
 * XREFs of sub_1C00361E8 @ 0x1C00361E8
 * Callers:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 *     sub_1C004C7A4 @ 0x1C004C7A4 (sub_1C004C7A4.c)
 *     sub_1C004CC80 @ 0x1C004CC80 (sub_1C004CC80.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 *     sub_1C004DA50 @ 0x1C004DA50 (sub_1C004DA50.c)
 *     sub_1C004DB30 @ 0x1C004DB30 (sub_1C004DB30.c)
 *     sub_1C004DC20 @ 0x1C004DC20 (sub_1C004DC20.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 *     sub_1C004DFB0 @ 0x1C004DFB0 (sub_1C004DFB0.c)
 *     sub_1C004E0B0 @ 0x1C004E0B0 (sub_1C004E0B0.c)
 *     sub_1C004E120 @ 0x1C004E120 (sub_1C004E120.c)
 *     sub_1C004E210 @ 0x1C004E210 (sub_1C004E210.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 *     sub_1C004E570 @ 0x1C004E570 (sub_1C004E570.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

void __fastcall sub_1C00361E8(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(sub_1C000F050(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
