/*
 * XREFs of sub_180018014 @ 0x180018014
 * Callers:
 *     sub_1800180B4 @ 0x1800180B4 (sub_1800180B4.c)
 * Callees:
 *     sub_180013900 @ 0x180013900 (sub_180013900.c)
 *     sub_1800190B4 @ 0x1800190B4 (sub_1800190B4.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180018014(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_1801DE028);
  if ( v4 )
  {
    v6 = sub_1800190B4(v4);
    v5 = sub_180013900(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
