/*
 * XREFs of sub_1C0034EEC @ 0x1C0034EEC
 * Callers:
 *     sub_1C0001120 @ 0x1C0001120 (sub_1C0001120.c)
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C0005240 @ 0x1C0005240 (sub_1C0005240.c)
 *     sub_1C0007A40 @ 0x1C0007A40 (sub_1C0007A40.c)
 *     sub_1C0007F60 @ 0x1C0007F60 (sub_1C0007F60.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C0013438 @ 0x1C0013438 (sub_1C0013438.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C0034F64 @ 0x1C0034F64 (sub_1C0034F64.c)
 *     sub_1C0035154 @ 0x1C0035154 (sub_1C0035154.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 *     sub_1C00354A8 @ 0x1C00354A8 (sub_1C00354A8.c)
 *     sub_1C003571C @ 0x1C003571C (sub_1C003571C.c)
 *     sub_1C0035848 @ 0x1C0035848 (sub_1C0035848.c)
 *     sub_1C0035A44 @ 0x1C0035A44 (sub_1C0035A44.c)
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C0034EEC(__int64 a1, __int64 a2, KIRQL a3)
{
  __int64 v4; // r10
  int v5; // r11d
  __int64 v6; // rcx
  __int64 v7; // rcx

  sub_1C000FD80(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v6 = *(unsigned int *)(v4 + 2400);
  *(_DWORD *)(v4 + 448) = 0;
  v7 = 32 * (v6 + 43);
  *(_DWORD *)(v7 + v4 + 8) = *(_DWORD *)(v4 + 12);
  if ( v5 )
    *(_DWORD *)(v7 + v4 + 12) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 440), a3);
}
