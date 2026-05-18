/*
 * XREFs of sub_180017958 @ 0x180017958
 * Callers:
 *     sub_1800179FC @ 0x1800179FC (sub_1800179FC.c)
 * Callees:
 *     sub_18001174C @ 0x18001174C (sub_18001174C.c)
 *     sub_180018970 @ 0x180018970 (sub_180018970.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18011E748 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180017958(__int64 *a1, int *a2, _QWORD *a3)
{
  void *v6; // rax
  int v7; // edi
  __int64 v8; // rbx

  *a1 = 0LL;
  v6 = operator new(0xD0uLL, (const struct std::nothrow_t *)&unk_1801D7C98);
  if ( v6 )
  {
    v8 = sub_180018970(v6);
    v7 = sub_18001174C(v8, *a2, a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
