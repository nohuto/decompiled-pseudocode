/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x14039054C
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x140768D7C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1408A4548 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A5010 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1408A6280 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x14036C134 (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
