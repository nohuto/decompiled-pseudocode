/*
 * XREFs of sub_1C004A4C0 @ 0x1C004A4C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C004A4C0(__int64 a1)
{
  _DWORD *v2; // rax
  _QWORD *v3; // r10

  v2 = sub_1C000F050(a1);
  v2[640] |= 0x2000u;
  sub_1C000FD80(a1, 128, 1702379852, 0LL, 0LL);
  v3[608] = v3 + 607;
  v3[607] = v3 + 607;
  KeInitializeSpinLock(v3 + 609);
}
