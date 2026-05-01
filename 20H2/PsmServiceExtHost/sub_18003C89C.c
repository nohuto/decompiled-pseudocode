/*
 * XREFs of sub_18003C89C @ 0x18003C89C
 * Callers:
 *     sub_18003C7A0 @ 0x18003C7A0 (sub_18003C7A0.c)
 * Callees:
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003C89C(_QWORD *a1, _QWORD *a2, int *a3)
{
  void *v6; // rax
  __int64 v7; // rbx
  int v8; // edx
  unsigned int v9; // edi

  *a1 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_1800967D8);
  if ( v6 )
  {
    v7 = sub_18003CA5C(v6);
    v8 = *a3;
    *(_QWORD *)(v7 + 40) = *a2;
    *(_DWORD *)(v7 + 48) = v8;
    v9 = (**(__int64 (__fastcall ***)(__int64, __int128 *, _QWORD *))v7)(v7, &xmmword_180095B48, a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v9;
}
