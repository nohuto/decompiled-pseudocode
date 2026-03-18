/*
 * XREFs of ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x180254A70
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180250B48 (-AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

CHolographicExclusiveMode *__fastcall CHolographicExclusiveMode::CHolographicExclusiveMode(
        CHolographicExclusiveMode *this,
        struct CComposition *a2)
{
  CHolographicManager *v3; // rcx

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicExclusiveMode::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicExclusiveMode::`vftable'{for `IHolographicExclusiveModeManagerProxy'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = -1LL;
  *((_DWORD *)this + 22) = -1;
  *((_DWORD *)this + 23) = 1065353216;
  v3 = (CHolographicManager *)*((_QWORD *)a2 + 17);
  *((_QWORD *)this + 8) = v3;
  CHolographicManager::AddExclusiveModeProxy(v3, this);
  return this;
}
