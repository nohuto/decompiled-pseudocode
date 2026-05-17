/*
 * XREFs of _LdrpValidateIntegrityContinuity@12 @ 0x4B333DBC
 * Callers:
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 * Callees:
 *     _NtCompareSigningLevels@8 @ 0x4B2F3340 (_NtCompareSigningLevels@8.c)
 *     _LdrpLogIntegrityContinuityTelemetry@20 @ 0x4B33057E (_LdrpLogIntegrityContinuityTelemetry@20.c)
 *     _LdrpSetModuleSigningLevel@20 @ 0x4B333D52 (_LdrpSetModuleSigningLevel@20.c)
 */

int __fastcall LdrpValidateIntegrityContinuity(_DWORD *a1, int a2, int a3)
{
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // esi
  bool v9; // cl
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v5 = 0;
  v12 = 0;
  if ( (a1[4] & 0x400000) != 0
    || (v6 = a1[7]) != 0
    && ((*(_DWORD *)(v6 + 160) & 0x8000) != 0 || NtCompareSigningLevels(*(unsigned __int8 *)(v6 + 164), 12) >= 0) )
  {
    v7 = LdrpSetModuleSigningLevel(a2, a1[8], (int)&v12, 12, &v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1;
      if ( v7 == -1073741701
        || v7 == -1073740760
        || v7 == -1073740285
        || v7 == -1058471934
        || LdrpEnforceIntegrityContinuity )
      {
        v5 = v7;
        *(_BYTE *)(a1[8] + 164) = 1;
      }
    }
    else
    {
      v5 = NtCompareSigningLevels(*(unsigned __int8 *)(a1[8] + 164), 12);
      v9 = v5 < 0;
    }
    if ( v9 )
      LdrpLogIntegrityContinuityTelemetry(a1, v8, v12, v5, v11);
  }
  return v5;
}
