/*
 * XREFs of ??0PhoneTopology@@IEAA@XZ @ 0x180056A68
 * Callers:
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x1800568C4 (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 * Callees:
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180055FCC (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180056B30 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
PhoneTopology *__fastcall PhoneTopology::PhoneTopology(PhoneTopology *this)
{
  __int64 v2; // rdx

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &PhoneTopology::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneTopology *)((char *)this + 48));
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneTopology *)((char *)this + 136));
  *((_DWORD *)this + 44) = 0;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (__int64)this + 184,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  memset_0((char *)this + 256, 0, 0x418uLL);
  return this;
}
