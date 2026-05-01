/*
 * XREFs of sub_180031038 @ 0x180031038
 * Callers:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002E524 @ 0x18002E524 (sub_18002E524.c)
 *     sub_18002E5F4 @ 0x18002E5F4 (sub_18002E5F4.c)
 *     sub_18003ABD0 @ 0x18003ABD0 (sub_18003ABD0.c)
 *     sub_18003B8C0 @ 0x18003B8C0 (sub_18003B8C0.c)
 * Callees:
 *     sub_18003648C @ 0x18003648C (sub_18003648C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031038(__int64 a1, _QWORD *a2, __int64 a3, void (__fastcall ***a4)(_QWORD, __int64))
{
  int v7; // edi
  void *v8; // rax
  __int64 v9; // rbx

  *a2 = 0LL;
  if ( !a4 )
    return (unsigned int)-2147024882;
  v8 = operator new(0x140uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_18003648C(v8, a1, L"Windows.Foundation.IAsyncAction", 0LL);
  if ( !v9 )
  {
    (**a4)(a4, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v9 + 256) = a4;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 104LL))(v9 + 8);
  if ( v7 >= 0 )
  {
    *a2 = v9 + 176;
    v9 = 0LL;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 16LL))(v9 + 8);
  return (unsigned int)v7;
}
