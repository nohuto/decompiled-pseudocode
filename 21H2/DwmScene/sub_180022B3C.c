/*
 * XREFs of sub_180022B3C @ 0x180022B3C
 * Callers:
 *     sub_180022BDC @ 0x180022BDC (sub_180022BDC.c)
 * Callees:
 *     sub_180015370 @ 0x180015370 (sub_180015370.c)
 *     sub_180015A00 @ 0x180015A00 (sub_180015A00.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180124018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022B3C(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_1801DE028);
  if ( v4 )
  {
    v6 = sub_180015370((__int64)v4);
    v5 = sub_180015A00(v6, a2);
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
