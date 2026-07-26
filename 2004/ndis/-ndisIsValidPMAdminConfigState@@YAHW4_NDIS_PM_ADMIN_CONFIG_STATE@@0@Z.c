/*
 * XREFs of ?ndisIsValidPMAdminConfigState@@YAHW4_NDIS_PM_ADMIN_CONFIG_STATE@@0@Z @ 0x1C008FF88
 * Callers:
 *     ?ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z @ 0x1C009543C (-ndisWmiSetPMAdminConfig@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ADMIN_CONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIsValidPMAdminConfigState(unsigned int a1, enum _NDIS_PM_ADMIN_CONFIG_STATE a2)
{
  if ( a1 > 2 )
    return 3221225485LL;
  if ( a2 || !a1 )
    return 0LL;
  return 3221226021LL;
}
