/*
 * XREFs of sub_180042D0C @ 0x180042D0C
 * Callers:
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     sub_18004176C @ 0x18004176C (sub_18004176C.c)
 *     sub_180041864 @ 0x180041864 (sub_180041864.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180042D0C(_QWORD *a1, __int64 *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v4 )
  {
    v6 = sub_18004176C((__int64)v4);
    v5 = sub_180041864(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(__int64, void *, _QWORD *))v6)(v6, &unk_180052F08, a1);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
