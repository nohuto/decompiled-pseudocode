/*
 * XREFs of vGetFontDriverLWT @ 0x1C00F5E40
 * Callers:
 *     InitFNTCache @ 0x1C00F58F0 (InitFNTCache.c)
 * Callees:
 *     Win32FileInfo @ 0x1C00E30A4 (Win32FileInfo.c)
 */

_BOOL8 __fastcall vGetFontDriverLWT(_BOOL8 *a1, _BOOL8 *a2)
{
  _BOOL8 result; // rax
  _BOOL8 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys", &v5, 0LL) )
    *a1 = v5;
  result = Win32FileInfo(L"\\SystemRoot\\system32\\atmfd.dll", &v5, 0LL);
  if ( result )
  {
    result = v5;
    *a2 = v5;
  }
  return result;
}
