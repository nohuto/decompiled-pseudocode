/*
 * XREFs of ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800152F0
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000FA58 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800166F4 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180016DA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18008B478 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800926C4 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180095AAC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019290 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CMatrixTransformProxy>(__int64 a1, volatile signed __int32 **a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  int v7; // edi

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 12) = 0;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v6 = CResource::Create(21LL, *(_QWORD *)(a1 + 16), v5 + 4);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x10u);
    else
      v7 = 0;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x61u);
    }
    else
    {
      *a2 = v5;
      v7 = 0;
    }
    CBaseObject::Release((CBaseObject *)v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Fu);
  }
  return (unsigned int)v7;
}
