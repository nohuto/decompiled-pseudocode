/*
 * XREFs of sub_180016970 @ 0x180016970
 * Callers:
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 *     sub_1800283F4 @ 0x1800283F4 (sub_1800283F4.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 */

__int64 __fastcall sub_180016970(__int64 a1, HSTRING *a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  const WCHAR *v6; // rdi
  __int64 v7; // rax
  wchar_t *v8; // rax
  unsigned __int64 v9; // rbx
  HRESULT v10; // eax
  int v11; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v3 = -2147467261;
    v4 = 255;
LABEL_24:
    sub_180003268(retaddr, v4, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v3);
    return v3;
  }
  *a2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147467261;
    v4 = 259;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a1 + 20) != 2 )
    return 0LL;
  v6 = *(const WCHAR **)(a1 + 24);
  if ( !v6 )
    goto LABEL_22;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  if ( !v7 )
  {
LABEL_22:
    v4 = 263;
    goto LABEL_23;
  }
  v8 = wcsrchr(*(const wchar_t **)(a1 + 24), 0x21u);
  if ( !v8 )
  {
    v4 = 267;
LABEL_23:
    v3 = -2147418113;
    goto LABEL_24;
  }
  v9 = v8 - v6;
  if ( v9 >= 0x40 )
  {
    v4 = 270;
    goto LABEL_23;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  v10 = WindowsCreateString(v6, v9, &string);
  v3 = v10;
  if ( v10 >= 0 )
  {
    v10 = WindowsDuplicateString(string, a2);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v3 = 0;
      goto LABEL_21;
    }
    v11 = 275;
  }
  else
  {
    v11 = 274;
  }
  sub_180003268(retaddr, v11, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v10);
LABEL_21:
  WindowsDeleteString(string);
  return v3;
}
