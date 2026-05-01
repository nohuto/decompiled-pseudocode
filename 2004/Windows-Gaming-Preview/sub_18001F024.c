/*
 * XREFs of sub_18001F024 @ 0x18001F024
 * Callers:
 *     sub_18001E70C @ 0x18001E70C (sub_18001E70C.c)
 *     sub_18001EB78 @ 0x18001EB78 (sub_18001EB78.c)
 * Callees:
 *     sub_180024564 @ 0x180024564 (sub_180024564.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F024(__int64 a1, _QWORD *a2, __int64 a3, void (__fastcall ***a4)(_QWORD, __int64))
{
  int v7; // edi
  void *v8; // rax
  __int64 v9; // rbx

  *a2 = 0LL;
  if ( !a4 )
    return (unsigned int)-2147024882;
  v8 = operator new(0x158uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v9 = 0LL;
  if ( v8 )
    v9 = sub_180024564(
           v8,
           a1,
           L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.Game"
            "sEnumeration.GameListEntry>>",
           0LL);
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
