/*
 * XREFs of ??0CExclusiveModeListener@@QEAA@XZ @ 0x1801062E4
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180105D78 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x180067A88 (--0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMMNotificationClient@@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180106214 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMMNotificationClient@@UIMixedReality.c)
 */

// Hidden C++ exception states: #wind=6
CExclusiveModeListener *__fastcall CExclusiveModeListener::CExclusiveModeListener(CExclusiveModeListener *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &CExclusiveModeListener::`vftable';
  *((_QWORD *)this + 1) = &CExclusiveModeListener::`vftable'{for `IMixedRealitySpatialAudioFormatPolicyChange'};
  *((_QWORD *)this + 2) = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 2, 0, 0);
  *(_OWORD *)((char *)this + 120) = 0LL;
  *(GUID *)((char *)this + 136) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 38) = 4;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 20) = v2;
  *((_DWORD *)this + 44) = 0;
  CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_WORD *)this + 188) = 0;
  return this;
}
