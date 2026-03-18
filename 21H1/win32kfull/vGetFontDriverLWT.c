/*
 * XREFs of vGetFontDriverLWT @ 0xDFB60
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     _Win32FileInfo@12 @ 0xDEF22 (_Win32FileInfo@12.c)
 */

BOOL __fastcall vGetFontDriverLWT(_DWORD *a1, _DWORD *a2)
{
  BOOL result; // eax
  int v5; // [esp+10h] [ebp-8h] BYREF
  BOOL v6; // [esp+14h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  if ( Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys", &v5, 0) )
  {
    *a1 = v5;
    a1[1] = v6;
  }
  result = Win32FileInfo(L"\\SystemRoot\\system32\\atmfd.dll", &v5, 0);
  if ( result )
  {
    *a2 = v5;
    result = v6;
    a2[1] = v6;
  }
  return result;
}
