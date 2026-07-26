/*
 * XREFs of ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035920
 * Callers:
 *     ?ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003EDD0 (-ndisNsiGetAllTimestampingInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C0131080 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0139240 (ndisEnumerateInterfaces32.c)
 * Callees:
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035944 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 */

void __fastcall ndisGetNsiClientInfo(struct _NDIS_NSI_CLIENT_INFO *a1)
{
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), a1);
}
