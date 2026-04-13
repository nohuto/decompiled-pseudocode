/*
 * XREFs of ?GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z @ 0x10002084
 * Callers:
 *     ?GetCurrentModuleName@details@wil@@YGPBDXZ @ 0x10002160 (-GetCurrentModuleName@details@wil@@YGPBDXZ.c)
 * Callees:
 *     ?StringCchCopyA@@YGJPADIPBD@Z @ 0x10002000 (-StringCchCopyA@@YGJPADIPBD@Z.c)
 *     @__security_check_cookie@4 @ 0x10004280 (@__security_check_cookie@4.c)
 */

char __stdcall wil::details::GetModuleInformation(
        LPCWSTR lpModuleName,
        _DWORD *a2,
        unsigned int *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int *v5; // ecx
  HMODULE v6; // edi
  char *i; // eax
  unsigned int v9; // [esp+0h] [ebp-11Ch]
  const char *v10; // [esp+4h] [ebp-118h]
  HMODULE phModule; // [esp+10h] [ebp-10Ch] BYREF
  CHAR Filename[260]; // [esp+14h] [ebp-108h] BYREF

  v5 = a3;
  v6 = 0;
  phModule = 0;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
    v5 = a3;
  }
  if ( a2 )
    *a2 = lpModuleName != 0 ? (char *)lpModuleName - (char *)v6 : 0;
  if ( v5 )
  {
    if ( !GetModuleFileNameA(v6, Filename, 0x104u) )
      return 0;
    for ( i = &Filename[strlen(Filename)]; i > Filename && *(i - 1) != 92; --i )
      ;
    StringCchCopyA((int)a4, a3, i, v9, v10);
  }
  return 1;
}
