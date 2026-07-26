/*
 * XREFs of ?ndisXlateWakeUpEnableToPMParametersOid@@YAHPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0095FA4
 * Callers:
 *     ?ndisOidPostPMParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B680 (-ndisOidPostPMParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0094718 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z @ 0x1C008F680 (-ndisConvertWakeUpEnableToPMConfig@@YAXKPEAU_NDIS_PM_PARAMETERS@@G@Z.c)
 */

__int64 __fastcall ndisXlateWakeUpEnableToPMParametersOid(struct _NDIS_OID_REQUEST *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  _DWORD *v3; // r11

  v1 = *(_DWORD *)&a1->NdisReserved[80];
  v2 = 0;
  if ( v1 >= 0x10 )
  {
    ndisConvertWakeUpEnableToPMConfig(
      *(_DWORD *)a1->DATA.QUERY_INFORMATION.InformationBuffer,
      (struct _NDIS_PM_PARAMETERS *)a1->DATA.QUERY_INFORMATION.InformationBuffer,
      2 - (v1 < 0x14));
    v3[8] = -50265847;
    v3[12] = v3[38];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
