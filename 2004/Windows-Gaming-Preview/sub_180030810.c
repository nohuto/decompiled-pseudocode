/*
 * XREFs of sub_180030810 @ 0x180030810
 * Callers:
 *     sub_18002D480 @ 0x18002D480 (sub_18002D480.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_180032388 @ 0x180032388 (sub_180032388.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int64 **__fastcall sub_180030810(volatile signed __int64 **a1, _QWORD **a2)
{
  volatile signed __int64 *v4; // rax
  volatile signed __int64 *v5; // rbx
  _QWORD *v6; // rsi
  volatile signed __int32 *v7; // rax

  *a1 = 0LL;
  v4 = (volatile signed __int64 *)operator new(0x60uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    sub_180032388(v4);
    *v5 = (volatile signed __int64)&off_18004D2E8;
    *((_QWORD *)v5 + 1) = off_18004BE30;
    *((_QWORD *)v5 + 2) = off_18004D2B0;
    *((_QWORD *)v5 + 3) = off_18004BDB0;
    *((_QWORD *)v5 + 9) = v6;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v7 = (volatile signed __int32 *)v6[22];
    *((_QWORD *)v5 + 10) = v7;
    _InterlockedIncrement(v7);
    if ( *a1 )
      sub_18000D490(*a1);
    *a1 = v5;
  }
  return a1;
}
