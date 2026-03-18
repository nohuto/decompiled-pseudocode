/*
 * XREFs of ?UpdateLightToWorldForScene@CCompositionLight@@EEAAJPEBVCDrawingContext@@@Z @ 0x180200CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::UpdateLightToWorldForScene(
        CCompositionLight *this,
        const struct CVisualTree **a2)
{
  CVisual *v4; // rax
  int WorldTransform; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CVisual *)(*(__int64 (__fastcall **)(CCompositionLight *))(*(_QWORD *)this + 200LL))(this);
  WorldTransform = CVisual::GetWorldTransform(v4, a2[991], 3, (__int64)this + 184, 0LL, 0LL);
  v6 = WorldTransform;
  if ( WorldTransform >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x260,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
    (const char *)(unsigned int)WorldTransform);
  return v6;
}
