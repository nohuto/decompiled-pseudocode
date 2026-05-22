/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801897E4
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801896D0 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z @ 0x18012C8C8 (-AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z.c)
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x18012CB68 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 *     ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1801898B4 (-LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ.c)
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x180189978 (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  struct ISMHeatFrameworkHost **v3; // rsi
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct ISMHeatFrameworkHost **)((char *)this + 96);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  v7 = ISMHeatFrameworkHost::Create(a3, v3);
  if ( v7 < 0 )
  {
    v8 = 59LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)(unsigned int)v7);
    return 0LL;
  }
  v7 = HeatProcessor::LoadAndInitializeHeatCore(this);
  if ( v7 < 0 )
  {
    v8 = 63LL;
    goto LABEL_9;
  }
  v7 = ISMHeatFrameworkHost::AttachHeatFramework(*v3, *((struct IHeatFramework **)this + 11));
  if ( v7 < 0 )
  {
    v8 = 67LL;
    goto LABEL_9;
  }
  v7 = HeatProcessor::OnDeviceArrival(this, a2);
  if ( v7 < 0 )
  {
    v8 = 69LL;
    goto LABEL_9;
  }
  return 0LL;
}
