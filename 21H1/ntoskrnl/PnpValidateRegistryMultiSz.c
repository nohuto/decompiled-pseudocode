/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x14038F9DC
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14076699C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A3228 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A3CF0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A4F60 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14036A838 (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
