/*
 * XREFs of sub_180018334 @ 0x180018334
 * Callers:
 *     sub_1800183D4 @ 0x1800183D4 (sub_1800183D4.c)
 * Callees:
 *     sub_18001912C @ 0x18001912C (sub_18001912C.c)
 *     sub_180023358 @ 0x180023358 (sub_180023358.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018334(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0xC8uLL, (const struct std::nothrow_t *)&unk_1801DE028);
  if ( v4 )
  {
    v6 = sub_18001912C(v4);
    v5 = sub_180023358(v6, a2);
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
