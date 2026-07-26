/*
 * XREFs of ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0020470
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001E814 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

void __fastcall ndisMpHookDefaultOidRequestComplete(
        void *a1,
        struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *a2,
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a3,
        struct _NDIS_OID_REQUEST *a4,
        int a5)
{
  ndisMRawOidRequestComplete(a3, a4, a5);
}
