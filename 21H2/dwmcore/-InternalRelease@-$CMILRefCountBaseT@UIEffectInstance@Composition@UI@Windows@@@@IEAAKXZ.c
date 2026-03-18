/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800F38DC
 * Callers:
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180031C28 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180032458 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?Release@CRadialGradientEffect@@UEAAKXZ @ 0x1800F38D0 (-Release@CRadialGradientEffect@@UEAAKXZ.c)
 *     ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x18019F580 (--_GCRadialGradientBrush@@UEAAPEAXI@Z.c)
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18023A7F0 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18023B2FC (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18025E4A8 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(
        volatile signed __int32 *a1)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = a1 + 2;
  v3 = _InterlockedDecrement(a1 + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 2));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 112LL))(a1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)a1;
      --*v2;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v5 + 104))(a1, 1LL);
    }
  }
  return v3;
}
