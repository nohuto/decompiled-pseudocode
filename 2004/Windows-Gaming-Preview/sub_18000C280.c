/*
 * XREFs of sub_18000C280 @ 0x18000C280
 * Callers:
 *     sub_180009FE4 @ 0x180009FE4 (sub_180009FE4.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_18000F7B4 @ 0x18000F7B4 (sub_18000F7B4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000C280(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  void *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rcx

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x58uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v7 = 0LL;
  if ( !v6 || (v7 = sub_18000F7B4(v6, a1, 0LL)) == 0 )
    v5 = -2147024882;
  v8 = 0LL;
  v9 = v7;
  if ( v5 >= 0 )
  {
    v4 = v7;
    v9 = 0LL;
    v8 = v7;
  }
  if ( v9 )
    ((void (*)(void))sub_18000D490)();
  if ( v5 >= 0 )
  {
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = v4;
  }
  if ( v8 )
    sub_18000D490(v4);
  return (unsigned int)v5;
}
