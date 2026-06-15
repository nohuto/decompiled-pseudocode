/*
 * XREFs of ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180105FCC
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180047850 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x180105C80 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180107AB8 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801082A4 (-RemoveAtPos@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudio.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010A020 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18010B158 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18010B890 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::AddStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        const struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5,
        struct Sarm::CEndpointResourcePool *a6)
{
  Sarm::CStreamResource *v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  struct __POSITION *v14; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct __POSITION *v16; // [rsp+70h] [rbp+8h] BYREF

  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::AddStream", 0x67u);
  v10 = (Sarm::CStreamResource *)util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Add(
                                   (__int64)this + 232,
                                   (__int64)a2,
                                   (__int64 *)&v16);
  if ( !v10 )
  {
    v11 = -2147024882;
    v12 = 107LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = v16;
  v11 = Sarm::CStreamResource::Initialize(v10, a2, a3, a4, v16, a5, a6);
  if ( v11 < 0 )
  {
    v12 = 109LL;
    goto LABEL_3;
  }
  v11 = Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges(this, v10);
  if ( v11 < 0 )
  {
    Sarm::CStreamResource::Reclaim(v10);
    if ( v14 )
      ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
        (char *)this + 232,
        v14);
    v12 = 116LL;
    goto LABEL_3;
  }
  return 0LL;
}
