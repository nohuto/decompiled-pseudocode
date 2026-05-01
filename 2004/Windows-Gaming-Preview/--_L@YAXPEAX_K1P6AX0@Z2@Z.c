/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870
 * Callers:
 *     sub_18001E70C @ 0x18001E70C (sub_18001E70C.c)
 *     sub_18001E7F8 @ 0x18001E7F8 (sub_18001E7F8.c)
 *     sub_18001EB78 @ 0x18001EB78 (sub_18001EB78.c)
 *     sub_1800261BC @ 0x1800261BC (sub_1800261BC.c)
 *     sub_180029DC0 @ 0x180029DC0 (sub_180029DC0.c)
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002E524 @ 0x18002E524 (sub_18002E524.c)
 *     sub_18002E5F4 @ 0x18002E5F4 (sub_18002E5F4.c)
 *     sub_18003ABD0 @ 0x18003ABD0 (sub_18003ABD0.c)
 *     sub_18003B8C0 @ 0x18003B8C0 (sub_18003B8C0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180044334 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
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
