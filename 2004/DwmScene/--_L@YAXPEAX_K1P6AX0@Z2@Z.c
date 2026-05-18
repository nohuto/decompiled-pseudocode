/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10
 * Callers:
 *     sub_180021950 @ 0x180021950 (sub_180021950.c)
 *     sub_180021990 @ 0x180021990 (sub_180021990.c)
 *     sub_180021BC8 @ 0x180021BC8 (sub_180021BC8.c)
 *     sub_180035220 @ 0x180035220 (sub_180035220.c)
 *     sub_18003E188 @ 0x18003E188 (sub_18003E188.c)
 *     sub_18006BC58 @ 0x18006BC58 (sub_18006BC58.c)
 *     sub_18009EB14 @ 0x18009EB14 (sub_18009EB14.c)
 *     sub_1800A31A4 @ 0x1800A31A4 (sub_1800A31A4.c)
 *     sub_1800B8038 @ 0x1800B8038 (sub_1800B8038.c)
 *     sub_1800CA8A4 @ 0x1800CA8A4 (sub_1800CA8A4.c)
 *     sub_1800CFB18 @ 0x1800CFB18 (sub_1800CFB18.c)
 *     sub_1800D5D5C @ 0x1800D5D5C (sub_1800D5D5C.c)
 *     sub_1800D95D8 @ 0x1800D95D8 (sub_1800D95D8.c)
 *     sub_1800D9A08 @ 0x1800D9A08 (sub_1800D9A08.c)
 *     sub_1800D9D50 @ 0x1800D9D50 (sub_1800D9D50.c)
 *     sub_1800DA08C @ 0x1800DA08C (sub_1800DA08C.c)
 *     sub_1800DAA08 @ 0x1800DAA08 (sub_1800DAA08.c)
 *     sub_1800DC1B8 @ 0x1800DC1B8 (sub_1800DC1B8.c)
 *     sub_1800E5DC0 @ 0x1800E5DC0 (sub_1800E5DC0.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 *     sub_1800F127C @ 0x1800F127C (sub_1800F127C.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E148 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
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
