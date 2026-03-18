/*
 * XREFs of vGetFontDriverLWT @ 0x1C0009E6C
 * Callers:
 *     InitFNTCache @ 0x1C000A170 (InitFNTCache.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0014298 (Win32FileInfo.c)
 */

__int64 __fastcall vGetFontDriverLWT(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (unsigned int)Win32FileInfo(L"\\SystemRoot\\system32\\win32kfull.sys") )
    *a1 = 0LL;
  result = Win32FileInfo(L"\\SystemRoot\\system32\\atmfd.dll");
  if ( (_DWORD)result )
  {
    result = 0LL;
    *a2 = 0LL;
  }
  return result;
}
