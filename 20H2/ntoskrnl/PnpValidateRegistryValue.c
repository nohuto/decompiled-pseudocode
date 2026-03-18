/*
 * XREFs of PnpValidateRegistryValue @ 0x14050CAF8
 * Callers:
 *     PiDevCfgResolveVariableConstant @ 0x1408AAA70 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408AC3E0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1408ACC90 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     PnpValidateStringData @ 0x14036E0F0 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x14036E114 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryValue(_DWORD *a1)
{
  unsigned int v1; // eax
  char v2; // dl

  v1 = a1[1];
  v2 = 0;
  if ( !v1 )
    return 1;
  if ( v1 <= 2 )
    return PnpValidateStringData((__int64)a1 + (unsigned int)a1[2], a1[3]);
  if ( v1 == 4 )
    return a1[3] == 4;
  if ( v1 == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
  if ( v1 != 0x8000 && v1 != -1 )
    return 1;
  return v2;
}
