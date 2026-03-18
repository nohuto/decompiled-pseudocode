/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x14039A190
 * Callers:
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14080A890 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14094CFE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14094DE60 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1402D19FC (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
