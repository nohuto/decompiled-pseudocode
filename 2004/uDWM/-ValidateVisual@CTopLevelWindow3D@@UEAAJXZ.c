/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180016DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000C240 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180014514 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800152F0 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016F90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180017074 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800172D0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18001FFF0 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180024E74 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18003DA6C (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003E2D4 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  int started; // edi
  int v4; // eax
  int v5; // eax
  CSecondaryWindowRepresentation *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  void *v12; // [rsp+20h] [rbp-18h]
  unsigned int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
  {
LABEL_14:
    v4 = CVisual::ValidateVisual(this);
    started = v4;
    if ( v4 < 0 )
    {
      v11 = 144LL;
    }
    else
    {
      if ( (*((_BYTE *)this + 80) & 4) == 0 )
      {
LABEL_16:
        started = 0;
        goto LABEL_17;
      }
      v4 = (*(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)this + 192LL))(this);
      started = v4;
      if ( v4 >= 0 )
      {
        *((_DWORD *)this + 20) &= ~4u;
        goto LABEL_16;
      }
      v11 = 148LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v4);
LABEL_17:
    if ( started < 0 )
    {
      v10 = 616LL;
      goto LABEL_39;
    }
    v5 = *((_DWORD *)this + 20);
    if ( (v5 & 0x80u) != 0 )
    {
      v7 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 42);
      if ( v7 )
      {
        started = CSecondaryWindowRepresentation::Validate(v7);
        if ( started < 0 )
        {
          v10 = 623LL;
          goto LABEL_39;
        }
        v5 = *((_DWORD *)this + 20);
      }
      *((_DWORD *)this + 20) = v5 & 0xFFFFFF7F;
    }
    return 0LL;
  }
  if ( *((_BYTE *)this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
  {
    if ( *((_QWORD *)this + 45) )
    {
      started = CTopLevelWindow3D::StopAnimation(this);
      if ( started < 0 )
      {
        v10 = 589LL;
        goto LABEL_39;
      }
    }
    started = CTopLevelWindow3D::StartAnimation(this, 5LL);
    if ( started < 0 )
    {
      v10 = 591LL;
      goto LABEL_39;
    }
    *((_BYTE *)this + 480) = 0;
  }
  v2 = *((_QWORD *)this + 45);
  if ( v2 && !*(_BYTE *)(v2 + 72) )
  {
    started = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 384LL), 0);
    if ( started < 0 )
    {
      v10 = 600LL;
      goto LABEL_39;
    }
    started = 0;
    if ( !*((_QWORD *)this + 42) )
    {
      LODWORD(v12) = 100;
      v9 = CSecondaryWindowRepresentation::Create(
             160LL,
             (__int64)this + 280,
             *((_QWORD *)this + 41),
             0,
             v12,
             (CSecondaryWindowRepresentation **)this + 42);
      started = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x285u);
    }
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x290u);
    }
    else
    {
      if ( *((_QWORD *)this + 44)
        || (v8 = CCompositor::CreateProxy<CScaleTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)),
            started = v8,
            v8 >= 0) )
      {
        if ( *((_QWORD *)this + 43) )
          goto LABEL_10;
        v8 = CCompositor::CreateProxy<CMatrixTransformProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               (volatile signed __int32 **)this + 43);
        started = v8;
        if ( v8 >= 0 )
        {
LABEL_11:
          started = CTopLevelWindow3D::UpdateAnimatedResources(this);
          if ( started < 0 )
          {
            v10 = 604LL;
            goto LABEL_39;
          }
          started = CTopLevelWindow3D::EnsureRenderData(this);
          if ( started < 0 )
          {
            v10 = 606LL;
            goto LABEL_39;
          }
          goto LABEL_13;
        }
        v13 = 665;
      }
      else
      {
        v13 = 660;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v13);
    }
LABEL_10:
    if ( started < 0 )
    {
      v10 = 602LL;
      goto LABEL_39;
    }
    goto LABEL_11;
  }
  started = CTopLevelWindow3D::StopAnimation(this);
  if ( started >= 0 )
  {
LABEL_13:
    *((_DWORD *)this + 20) &= ~0x1000u;
    goto LABEL_14;
  }
  v10 = 610LL;
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)started);
  return (unsigned int)started;
}
