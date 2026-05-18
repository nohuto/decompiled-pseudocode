/*
 * XREFs of sub_1800AFDFC @ 0x1800AFDFC
 * Callers:
 *     sub_1800C3BD0 @ 0x1800C3BD0 (sub_1800C3BD0.c)
 * Callees:
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800B1C18 @ 0x1800B1C18 (sub_1800B1C18.c)
 *     sub_1800B1E40 @ 0x1800B1E40 (sub_1800B1E40.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AFDFC(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 176LL))(a1, a3);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  result = setlocale_set_cat_0(a1, a2, a3);
  if ( a1[32] )
  {
    v7 = 0LL;
    sub_1800B1E40(a1, &v7);
    v7 = 0LL;
    return sub_1800B1C18(a1, &v7);
  }
  return result;
}
