/*
 * XREFs of ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A824
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C00012B0 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C005A4F8 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A8A4 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C2C8 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisAoAcIsD0Required(struct _NDIS_MINIPORT_AOAC *a1)
{
  unsigned __int8 result; // al

  result = 0;
  if ( *((_DWORD *)a1 + 13) || *((_DWORD *)a1 + 95) )
    return 1;
  return result;
}
