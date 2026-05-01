/*
 * XREFs of ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1803F7968
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803F4D70 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803F739C (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::GetScaleFactor(IUnknown **this, enum DEVICE_SCALE_FACTOR *a2)
{
  HRESULT ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = SCALE_100_PERCENT;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  ScaleFactorForMonitor = IUnknown_QueryService(
                            this[2],
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            &ppvOut);
  v5 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor >= 0 )
  {
    ScaleFactorForMonitor = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v10);
    v5 = ScaleFactorForMonitor;
    if ( ScaleFactorForMonitor >= 0 )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(v10, a2);
      v5 = ScaleFactorForMonitor;
      if ( ScaleFactorForMonitor >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 2308LL;
    }
    else
    {
      v6 = 2306LL;
    }
  }
  else
  {
    v6 = 2303LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)ScaleFactorForMonitor);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
