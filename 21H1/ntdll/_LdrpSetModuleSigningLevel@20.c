/*
 * XREFs of _LdrpSetModuleSigningLevel@20 @ 0x4B333D52
 * Callers:
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _LdrpValidateIntegrityContinuity@12 @ 0x4B333DBC (_LdrpValidateIntegrityContinuity@12.c)
 * Callees:
 *     _NtCompareSigningLevels@8 @ 0x4B2F3340 (_NtCompareSigningLevels@8.c)
 *     _ZwGetCachedSigningLevel@24 @ 0x4B2F3880 (_ZwGetCachedSigningLevel@24.c)
 *     _NtSetCachedSigningLevel@20 @ 0x4B2F4210 (_NtSetCachedSigningLevel@20.c)
 */

int __fastcall LdrpSetModuleSigningLevel(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // edi
  int CachedSigningLevel; // esi
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v8 = a1;
  v5 = (_BYTE *)(a2 + 164);
  *a5 = 0;
  CachedSigningLevel = ZwGetCachedSigningLevel(a1, a3, a2 + 164, 0, 0, 0);
  if ( CachedSigningLevel < 0 || NtCompareSigningLevels((unsigned __int8)*v5, a4) < 0 )
  {
    CachedSigningLevel = NtSetCachedSigningLevel(2052, a4, (int)&v8, 1, v8);
    if ( CachedSigningLevel < 0 )
      *a5 = 1;
    else
      *v5 = a4;
  }
  return CachedSigningLevel;
}
