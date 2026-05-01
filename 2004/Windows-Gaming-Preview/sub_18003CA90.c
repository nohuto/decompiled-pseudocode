/*
 * XREFs of sub_18003CA90 @ 0x18003CA90
 * Callers:
 *     sub_18003CC28 @ 0x18003CC28 (sub_18003CC28.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003CA90(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, HSTRING *a5)
{
  HRESULT v6; // ebx
  int v7; // edx
  unsigned __int64 v8; // rdi
  HRESULT v9; // eax
  int v10; // r9d
  HRESULT v11; // eax
  HSTRING v12; // rcx
  HSTRING string; // [rsp+28h] [rbp-E0h] BYREF
  PWSTR ppszPath; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-D0h]
  __int64 v17; // [rsp+40h] [rbp-C8h]
  WCHAR pszPathOut[520]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 retaddr; // [rsp+480h] [rbp+378h]

  ppszPath = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a5 )
  {
    v6 = -2147467261;
    v7 = 134;
LABEL_14:
    v10 = v6;
    goto LABEL_15;
  }
  v8 = -1LL;
  v16 = -1LL;
  v17 = -1LL;
  v9 = SHGetKnownFolderPath(&rfid, 0x8000u, 0LL, &ppszPath);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v11 = PathCchCombine(pszPathOut, 0x208uLL, ppszPath, a3);
    v6 = v11;
    if ( v11 >= 0 )
    {
      string = 0LL;
      do
        ++v8;
      while ( pszPathOut[v8] );
      if ( v8 > 0xFFFFFFFF )
      {
        v6 = -2147024362;
      }
      else
      {
        v6 = WindowsCreateString(pszPathOut, v8, &string);
        if ( v6 >= 0 )
        {
          v12 = *a5;
          *a5 = string;
          WindowsDeleteString(v12);
          v6 = 0;
          goto LABEL_16;
        }
      }
      v7 = 145;
      goto LABEL_14;
    }
    v10 = v11;
    v7 = 138;
  }
  else
  {
    v10 = v9;
    v7 = 136;
  }
LABEL_15:
  sub_180003268(retaddr, v7, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp", v10);
LABEL_16:
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  return (unsigned int)v6;
}
