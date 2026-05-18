/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0
 * Callers:
 *     sub_180027220 @ 0x180027220 (sub_180027220.c)
 *     sub_180027260 @ 0x180027260 (sub_180027260.c)
 *     sub_180027498 @ 0x180027498 (sub_180027498.c)
 *     sub_18003AAF0 @ 0x18003AAF0 (sub_18003AAF0.c)
 *     sub_180043A58 @ 0x180043A58 (sub_180043A58.c)
 *     sub_180071528 @ 0x180071528 (sub_180071528.c)
 *     sub_1800A43E4 @ 0x1800A43E4 (sub_1800A43E4.c)
 *     sub_1800A8A74 @ 0x1800A8A74 (sub_1800A8A74.c)
 *     sub_1800BD908 @ 0x1800BD908 (sub_1800BD908.c)
 *     sub_1800D0174 @ 0x1800D0174 (sub_1800D0174.c)
 *     sub_1800D53E8 @ 0x1800D53E8 (sub_1800D53E8.c)
 *     sub_1800DB62C @ 0x1800DB62C (sub_1800DB62C.c)
 *     sub_1800DEEA8 @ 0x1800DEEA8 (sub_1800DEEA8.c)
 *     sub_1800DF2D8 @ 0x1800DF2D8 (sub_1800DF2D8.c)
 *     sub_1800DF620 @ 0x1800DF620 (sub_1800DF620.c)
 *     sub_1800DF95C @ 0x1800DF95C (sub_1800DF95C.c)
 *     sub_1800E02D8 @ 0x1800E02D8 (sub_1800E02D8.c)
 *     sub_1800E1A88 @ 0x1800E1A88 (sub_1800E1A88.c)
 *     sub_1800EB690 @ 0x1800EB690 (sub_1800EB690.c)
 *     sub_1800EF3B0 @ 0x1800EF3B0 (sub_1800EF3B0.c)
 *     sub_1800F6B4C @ 0x1800F6B4C (sub_1800F6B4C.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180123A18 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
