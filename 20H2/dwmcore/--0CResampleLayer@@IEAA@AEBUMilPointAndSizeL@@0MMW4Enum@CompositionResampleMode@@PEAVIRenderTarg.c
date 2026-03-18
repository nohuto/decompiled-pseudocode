/*
 * XREFs of ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x180191610
 * Callers:
 *     ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x1801918D8 (-Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResample.c)
 * Callees:
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800459AC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18006C2FC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CResampleLayer::CResampleLayer(
        __int64 a1,
        __int128 *a2,
        const struct MilPointAndSizeL *a3,
        float a4,
        float a5,
        int a6,
        struct IRenderTargetBitmap *a7,
        __int64 a8)
{
  __int64 result; // rax
  __int128 v11; // xmm0

  CExternalLayer::CExternalLayer((CExternalLayer *)a1, a3, a7);
  *(_QWORD *)a1 = &CResampleLayer::`vftable';
  *(_DWORD *)(a1 + 120) = a6;
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)(a1 + 128),
    a8);
  result = a1;
  *(float *)(a1 + 140) = fmaxf(a5, 1.0);
  v11 = *a2;
  *(float *)(a1 + 136) = fmaxf(a4, 1.0);
  *(_OWORD *)(a1 + 144) = v11;
  return result;
}
