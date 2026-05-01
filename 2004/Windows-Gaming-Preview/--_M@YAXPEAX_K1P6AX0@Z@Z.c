/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0
 * Callers:
 *     sub_18001FBB0 @ 0x18001FBB0 (sub_18001FBB0.c)
 *     sub_18001FC40 @ 0x18001FC40 (sub_18001FC40.c)
 *     sub_18001FCF0 @ 0x18001FCF0 (sub_18001FCF0.c)
 *     sub_1800261BC @ 0x1800261BC (sub_1800261BC.c)
 *     sub_180026340 @ 0x180026340 (sub_180026340.c)
 *     sub_180032EA0 @ 0x180032EA0 (sub_180032EA0.c)
 *     sub_180032F10 @ 0x180032F10 (sub_180032F10.c)
 *     sub_180032F80 @ 0x180032F80 (sub_180032F80.c)
 *     sub_18003B680 @ 0x18003B680 (sub_18003B680.c)
 *     sub_18003C2A0 @ 0x18003C2A0 (sub_18003C2A0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180044334 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
