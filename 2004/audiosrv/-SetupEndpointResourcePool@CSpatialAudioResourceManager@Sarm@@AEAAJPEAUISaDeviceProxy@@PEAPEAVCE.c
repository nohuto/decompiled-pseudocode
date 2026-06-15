/*
 * XREFs of ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180109704
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180048010 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800D99E0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Add@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@PEAPEAU__POSITION@@@Z @ 0x180106AE4 (-Add@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResour.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180108F88 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010ACB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x18010B0B4 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(
        Sarm::CSpatialAudioResourceManager *this,
        struct ISaDeviceProxy *a2,
        struct Sarm::CEndpointResourcePool **a3)
{
  const char *v6; // r9
  Sarm::CEndpointResourcePool *v7; // rax
  struct Sarm::CEndpointResourcePool *v8; // rdi
  int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  struct __POSITION *v13; // [rsp+58h] [rbp+20h] BYREF

  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool", 0x107u);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      265LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v6);
    __debugbreak();
  }
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      266LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v6);
    __debugbreak();
  }
  *a3 = 0LL;
  v7 = (Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Add(
                                        (__int64)this + 152,
                                        (__int64)a2,
                                        (__int64 *)&v13);
  v8 = v7;
  if ( v7 )
  {
    v10 = Sarm::CEndpointResourcePool::Initialize(v7, a2, v13);
    if ( v10 >= 0 )
    {
      *a3 = v8;
      return 0LL;
    }
    else
    {
      v12 = 1;
      (**((void (__fastcall ***)(char *, __int64, int *))this + 82))((char *)this + 656, 2LL, &v12);
      if ( v13 )
        ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
          (__int64)this + 152,
          (__int64)v13);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x117,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
