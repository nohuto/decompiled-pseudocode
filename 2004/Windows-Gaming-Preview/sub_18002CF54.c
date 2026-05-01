/*
 * XREFs of sub_18002CF54 @ 0x18002CF54
 * Callers:
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_1800128B0 @ 0x1800128B0 (sub_1800128B0.c)
 *     sub_1800382D0 @ 0x1800382D0 (sub_1800382D0.c)
 *     sub_180038430 @ 0x180038430 (sub_180038430.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002CF54(__int64 *a1, HSTRING *a2, HSTRING *a3)
{
  __int64 v5; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // esi
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rcx

  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *a1 = 0LL;
  v7 = operator new(0x58uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v8 = v7;
  if ( v7 )
  {
    v10 = v7 + 2;
    sub_180011A50(v7 + 2);
    v11 = qword_18005ADB0;
    *v8 = off_18004C978;
    v8[1] = off_18004C958;
    *v10 = off_18004C910;
    v8[7] = 1LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *v8 = &off_18004D070;
    v8[8] = 0LL;
    v8[9] = 0LL;
    v8[10] = 0LL;
    v8[1] = off_18004D050;
    *v10 = off_18004D008;
    v9 = sub_1800128B0((__int64)v8, *a2, *a3);
    v12 = v8;
    if ( v9 >= 0 )
    {
      v9 = sub_1800382D0(v8, &xmmword_180050F70, a1);
      v12 = v8;
    }
    sub_180038430(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
