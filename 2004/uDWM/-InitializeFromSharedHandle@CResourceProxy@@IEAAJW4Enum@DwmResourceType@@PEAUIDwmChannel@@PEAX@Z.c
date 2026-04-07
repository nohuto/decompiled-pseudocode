/*
 * XREFs of ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX@Z @ 0x180017DC8
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180008710 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180013EF8 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180016324 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800BDC8C (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800BDD94 (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 *     ??$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemoteAppRenderTargetProxy@@@Z @ 0x1800BDE9C (--$CreateProxyFromSharedHandle@VCRemoteAppRenderTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCRemo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z @ 0x180017E58 (-WrapExistingResource@CResource@@SAJPEAUIDwmChannel@@W4Enum@DwmResourceType@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceProxy::InitializeFromSharedHandle(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = *a3;
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, unsigned int *))(v4 + 112))(a3, a4, a2, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB5u);
  }
  else
  {
    v10 = CResource::WrapExistingResource(a3, v8, v12, a1 + 16);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xB7u);
    else
      v9 = 0;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*a3 + 120))(a3);
  return v9;
}
