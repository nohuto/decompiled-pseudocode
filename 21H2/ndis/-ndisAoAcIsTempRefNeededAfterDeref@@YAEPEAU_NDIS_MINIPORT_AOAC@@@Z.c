/*
 * XREFs of ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005AB38
 * Callers:
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C005C20C (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x1C005E3A0 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005A2DC (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005AAB8 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

unsigned __int8 __fastcall ndisAoAcIsTempRefNeededAfterDeref(struct _NDIS_MINIPORT_AOAC *a1)
{
  __int64 v1; // rcx

  if ( ndisAoAcIsD0Required(a1) )
    return 0;
  *(_DWORD *)(v1 + 64) = 4;
  ndisAoAcActiveRefIncrement(v1, 0);
  return 1;
}
