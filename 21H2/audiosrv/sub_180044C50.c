/*
 * XREFs of sub_180044C50 @ 0x180044C50
 * Callers:
 *     sub_180044C00 @ 0x180044C00 (sub_180044C00.c)
 * Callees:
 *     sub_180044D3C @ 0x180044D3C (sub_180044D3C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

char __fastcall sub_180044C50(LPCWSTR lpModuleName, _DWORD *a2, __int64 a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v9; // rax
  CHAR *i; // r8
  HMODULE phModule; // [rsp+20h] [rbp-158h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-148h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
  }
  if ( a2 )
  {
    if ( lpModuleName )
      LODWORD(lpModuleName) = (_DWORD)lpModuleName - (_DWORD)v6;
    *a2 = (_DWORD)lpModuleName;
  }
  if ( !a3 )
    return 1;
  if ( GetModuleFileNameA(v6, Filename, 0x104u) )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Filename[v9] );
    for ( i = &Filename[v9]; i > Filename && *(i - 1) != 92; --i )
      ;
    sub_180044D3C(a3, a4, i);
    return 1;
  }
  return 0;
}
