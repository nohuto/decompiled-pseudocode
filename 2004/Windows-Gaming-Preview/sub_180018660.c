/*
 * XREFs of sub_180018660 @ 0x180018660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800195C0 @ 0x1800195C0 (sub_1800195C0.c)
 *     sub_18001A86C @ 0x18001A86C (sub_18001A86C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180018660(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rbp

  *a2 = 0LL;
  v3 = a1 - 16;
  v4 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v6 = 0LL;
  if ( v5 )
    v6 = sub_18001A86C(v5, v3);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 32) + 56LL))(*(_QWORD *)(v6 + 32), v6 + 44);
    v8 = v6;
    v9 = 0LL;
    if ( v7 >= 0 )
    {
      v4 = v6;
      v8 = 0LL;
      v9 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    v8 = 0LL;
    v9 = 0LL;
  }
  if ( v8 )
    ((void (*)(void))sub_1800195C0)();
  if ( v7 >= 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = v4;
  }
  if ( v9 )
    sub_1800195C0(v4);
  return (unsigned int)v7;
}
