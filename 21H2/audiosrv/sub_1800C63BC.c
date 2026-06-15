/*
 * XREFs of sub_1800C63BC @ 0x1800C63BC
 * Callers:
 *     sub_1800C6108 @ 0x1800C6108 (sub_1800C6108.c)
 * Callees:
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 */

WCHAR **__fastcall sub_1800C63BC(WCHAR **a1)
{
  int cchWideChar; // edi
  WCHAR *lpWideCharStr; // rdx

  cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
  if ( cchWideChar <= 0 )
  {
    sub_18002C26C(a1);
  }
  else
  {
    lpWideCharStr = *a1;
    if ( ((*((_DWORD *)*a1 - 3) - cchWideChar) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    {
      sub_18001B550((__int64 *)a1, cchWideChar);
      lpWideCharStr = *a1;
    }
    MultiByteToWideChar(3u, 0, MultiByteStr, -1, lpWideCharStr, cchWideChar);
    sub_1800448E4((__int64 *)a1, cchWideChar);
  }
  return a1;
}
