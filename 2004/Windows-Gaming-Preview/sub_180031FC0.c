/*
 * XREFs of sub_180031FC0 @ 0x180031FC0
 * Callers:
 *     sub_180032430 @ 0x180032430 (sub_180032430.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031FC0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  int v4; // edi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rcx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v5 )
  {
    *v5 = &off_18004C4D0;
    sub_180011A50(v5 + 2);
    v6 = qword_18005ADB0;
    *v5 = off_18004C710;
    v5[1] = off_18004C6F0;
    v5[2] = off_18004C6A8;
    v5[7] = 1LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *v5 = &off_18004BF10;
    v5[1] = off_18004BEF0;
    v5[2] = off_18004BEA8;
    v5[8] = v3;
    if ( v3 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    *((_DWORD *)v5 + 18) = 0;
  }
  else
  {
    v4 = -2147024882;
    v5 = 0LL;
  }
  v7 = v5;
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    *a2 = v5;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return (unsigned int)v4;
}
