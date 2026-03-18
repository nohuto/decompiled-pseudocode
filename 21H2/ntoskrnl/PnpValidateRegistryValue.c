/*
 * XREFs of PnpValidateRegistryValue @ 0x1403965A0
 * Callers:
 *     PiDevCfgResolveVariableKeyValue @ 0x140804E80 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableConstant @ 0x140805210 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14094E490 (PiDevCfgResolveVariableKeyCopy.c)
 * Callees:
 *     PnpValidateStringData @ 0x1402D19D8 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1402D19FC (PnpValidateMultiSzData.c)
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
