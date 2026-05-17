/*
 * XREFs of _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330
 * Callers:
 *     _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD (_RtlpCallQueryRegistryRoutine@28.c)
 *     _RtlpLookupSafeCurDirList@0 @ 0x4B33D088 (_RtlpLookupSafeCurDirList@0.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 * Callees:
 *     _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0 (_RtlExpandEnvironmentStrings@24.c)
 */

int __stdcall RtlExpandEnvironmentStrings_U(int a1, unsigned __int16 *a2, int a3, _DWORD *a4)
{
  int v4; // eax
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v8; // [esp+Ch] [ebp-4h] BYREF

  v8 = 0;
  v4 = RtlExpandEnvironmentStrings(
         a1,
         *((_DWORD *)a2 + 1),
         *a2 >> 1,
         *(_DWORD *)(a3 + 4),
         *(unsigned __int16 *)(a3 + 2) >> 1,
         &v8);
  v5 = v8;
  v6 = v4;
  if ( v8 > 0x7FFF )
  {
    v6 = -1073741823;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    if ( v4 >= 0 )
      *(_WORD *)a3 = 2 * v8 - 2;
    if ( a4 )
      *a4 = 2 * v5;
  }
  return v6;
}
