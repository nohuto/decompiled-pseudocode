/*
 * XREFs of DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9___ @ 0x1C000F1F0
 * Callers:
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C01A07B0 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     DxgkAttemptOpmVmBusRedirect @ 0x1C01EDB94 (DxgkAttemptOpmVmBusRedirect.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0224BB0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9_(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
