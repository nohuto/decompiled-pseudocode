/*
 * XREFs of sub_1C0050D40 @ 0x1C0050D40
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C00309F4 @ 0x1C00309F4 (sub_1C00309F4.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 *     sub_1C0050A44 @ 0x1C0050A44 (sub_1C0050A44.c)
 *     sub_1C0051210 @ 0x1C0051210 (sub_1C0051210.c)
 *     sub_1C00513E0 @ 0x1C00513E0 (sub_1C00513E0.c)
 *     sub_1C0058108 @ 0x1C0058108 (sub_1C0058108.c)
 *     sub_1C005B388 @ 0x1C005B388 (sub_1C005B388.c)
 *     sub_1C005B7C4 @ 0x1C005B7C4 (sub_1C005B7C4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0050D40(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
