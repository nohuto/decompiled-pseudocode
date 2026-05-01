/*
 * XREFs of sub_180016FE4 @ 0x180016FE4
 * Callers:
 *     sub_180017190 @ 0x180017190 (sub_180017190.c)
 *     sub_180017560 @ 0x180017560 (sub_180017560.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001977C @ 0x18001977C (sub_18001977C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180016FE4(const WCHAR *sourceString, unsigned int a2, __int64 *a3)
{
  const WCHAR *v4; // rsi
  int v5; // edx
  int v6; // ebx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  HRESULT v12; // eax
  unsigned int v13; // edi
  int v14; // edx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  v4 = sourceString;
  if ( a2 < 4 )
  {
    v5 = 464;
LABEL_3:
    v6 = -2147418113;
LABEL_4:
    sub_180003268(retaddr, v5, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v6);
    return (unsigned int)v6;
  }
  if ( *(_DWORD *)((char *)sourceString + a2 - 4) )
  {
    v5 = 468;
    goto LABEL_3;
  }
  v8 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *a3 = 0LL;
  v6 = 0;
  v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = 0LL;
  if ( !v9 || (v10 = sub_18001977C(v9)) == 0 )
    v6 = -2147024882;
  if ( v6 >= 0 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v6 < 0 )
  {
    v5 = 470;
    goto LABEL_4;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( v4[v11] );
  while ( 1 )
  {
    if ( !v11 )
      return 0LL;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = WindowsCreateString(v4, v11, &string);
    v13 = v12;
    if ( v12 < 0 )
      break;
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)*a3 + 104LL))(*a3, string);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 478;
      goto LABEL_30;
    }
    v4 += v11 + 1;
    v11 = -1LL;
    do
      ++v11;
    while ( v4[v11] );
    WindowsDeleteString(string);
  }
  v14 = 477;
LABEL_30:
  sub_180003268(retaddr, v14, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v12);
  WindowsDeleteString(string);
  return v13;
}
