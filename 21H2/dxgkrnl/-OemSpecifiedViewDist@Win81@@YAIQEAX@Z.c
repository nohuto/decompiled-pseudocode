/*
 * XREFs of ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C031654C
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1C0315E6C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall Win81::OemSpecifiedViewDist(Win81 *this, void *const a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 27);
  v5 = 0;
  if ( (int)DpiReadPnpRegistryValue(v2, L"ViewDistanceOverride", (char *)&v5, 4u, 2u) < 0 )
    return 0LL;
  v3 = &unk_1C00DDDC0;
  while ( v5 != *v3 )
  {
    if ( ++v3 == (_DWORD *)&unk_1C00DDDD8 )
      return 0LL;
  }
  return v5;
}
