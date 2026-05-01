/*
 * XREFs of ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180402488
 * Callers:
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180403700 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180403A00 (-TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IUnknown_GetScaleFactor(IUnknown *punk, enum DEVICE_SCALE_FACTOR *a2)
{
  HRESULT ScaleFactorForMonitor; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  ppvOut = 0LL;
  *a2 = SCALE_100_PERCENT;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  ScaleFactorForMonitor = IUnknown_QueryService(
                            punk,
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
      v6 = 11LL;
    }
    else
    {
      v6 = 10LL;
    }
  }
  else
  {
    v6 = 8LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"internal\\shell\\private\\inc\\TwinUIScaling.h",
    (const char *)(unsigned int)ScaleFactorForMonitor);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
