/*
 * XREFs of ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1800C662C
 * Callers:
 *     ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800C6160 (-GetNextRunningEffect@CBrushRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnco.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800C6330 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GetNextRunningEffect@CWARPDrawListEntry@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1801E8310 (-GetNextRunningEffect@CWARPDrawListEntry@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_.c)
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1801F0E50 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
