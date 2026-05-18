/*
 * XREFs of sub_1800AA52C @ 0x1800AA52C
 * Callers:
 *     sub_1800BE300 @ 0x1800BE300 (sub_1800BE300.c)
 * Callees:
 *     _setlocale_set_cat_0 @ 0x1800AA5C4 (_setlocale_set_cat_0.c)
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AA52C(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 176LL))(a1, a3);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  result = setlocale_set_cat_0(a1, a2, a3);
  if ( a1[32] )
  {
    v7 = 0LL;
    sub_1800AC570(a1, &v7);
    v7 = 0LL;
    return sub_1800AC348(a1, &v7);
  }
  return result;
}
