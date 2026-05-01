/*
 * XREFs of sub_180013BB0 @ 0x180013BB0
 * Callers:
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_1800157C4 @ 0x1800157C4 (sub_1800157C4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180013BB0(__int64 a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v4; // rbx
  int v5; // edi
  void *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  volatile signed __int64 *v9; // rcx

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v7 = 0LL;
  if ( !v6 || (v7 = sub_1800157C4(v6, a1, 0LL)) == 0 )
    v5 = -2147024882;
  v8 = 0LL;
  v9 = (volatile signed __int64 *)v7;
  if ( v5 >= 0 )
  {
    v4 = (volatile signed __int64 *)v7;
    v9 = 0LL;
    v8 = v7;
  }
  if ( v9 )
    sub_18000D490(v9);
  if ( v5 >= 0 )
  {
    if ( v8 )
      (*(void (__fastcall **)(volatile signed __int64 *))(*v4 + 8))(v4);
    *a2 = v4;
  }
  if ( v8 )
    sub_18000D490(v4);
  return (unsigned int)v5;
}
