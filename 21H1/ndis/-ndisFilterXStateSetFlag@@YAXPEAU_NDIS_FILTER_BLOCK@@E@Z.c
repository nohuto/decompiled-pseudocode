/*
 * XREFs of ?ndisFilterXStateSetFlag@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C0025454
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0019FEC (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisFilterXStateSetFlag(struct _NDIS_FILTER_BLOCK *a1)
{
  a1->XState |= 1u;
  ndisUpdateFilterFakeStatus(a1);
}
