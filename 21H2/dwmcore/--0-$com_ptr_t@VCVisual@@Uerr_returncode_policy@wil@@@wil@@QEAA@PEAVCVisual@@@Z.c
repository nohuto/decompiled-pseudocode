/*
 * XREFs of ??0?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCVisual@@@Z @ 0x1800458B4
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCVisual@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCVisual@@@Z @ 0x1800457C4 (--$_Emplace_reallocate@AEAPEAVCVisual@@@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@w.c)
 *     ?AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1800492AC (-AddToInputSinkPossibleDirtyList@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800716AC (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x180219F48 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18025B2B4 (--0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CVisual,wil::err_returncode_policy>::com_ptr_t<CVisual,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
