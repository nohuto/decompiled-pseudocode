/*
 * XREFs of sub_180017E8C @ 0x180017E8C
 * Callers:
 *     sub_180017F2C @ 0x180017F2C (sub_180017F2C.c)
 * Callees:
 *     sub_180018A7C @ 0x180018A7C (sub_180018A7C.c)
 *     sub_18001DA88 @ 0x18001DA88 (sub_18001DA88.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017E8C(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0xC8uLL, (const struct std::nothrow_t *)&unk_1801D7C98);
  if ( v4 )
  {
    v6 = sub_180018A7C(v4);
    v5 = sub_18001DA88(v6, a2);
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
