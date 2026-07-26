/*
 * XREFs of NdisWdfGetGuidToOidMap @ 0x1C0061530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdfGetGuidToOidList@@YAXPEBKGPEAU_NDIS_GUID@@PEAG@Z @ 0x1C008BDE8 (-ndisWdfGetGuidToOidList@@YAXPEBKGPEAU_NDIS_GUID@@PEAG@Z.c)
 */

void __fastcall NdisWdfGetGuidToOidMap(
        const unsigned int *a1,
        unsigned __int16 a2,
        struct _NDIS_GUID *a3,
        unsigned __int16 *a4)
{
  ndisWdfGetGuidToOidList(a1, a2, a3, a4);
}
