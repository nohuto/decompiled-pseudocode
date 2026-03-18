/*
 * XREFs of ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C003DC90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pj_EtwWriteTransfer @ 0x1C00391CC (McTemplateK0pj_EtwWriteTransfer.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C003BCE4 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlCallback(
        DXGADAPTER *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pj_EtwWriteTransfer((__int64)this, &Dxgk_PowerRuntimeControlRequest, a3, this, a2);
  return DXGADAPTER::DdiPowerRuntimeControlRequest(this, a2, a3, a4, a5, a6, a7);
}
