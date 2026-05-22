/*
 * XREFs of ??0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DE7CC
 * Callers:
 *     ??$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@0@$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800DE6F0 (--$make_shared@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@PEAUISpatialO.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A580 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ??0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@623@@Z @ 0x1800D5C10 (--0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAU.c)
 */

// Hidden C++ exception states: #wind=2
Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::SpatialInteractionSourceHand(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a2,
        struct Windows::Internal::Holographic::ISpatialObject *a3)
{
  _QWORD *v4; // rax
  RegistryHelpers *v5; // rcx
  RegistryHelpers *v6; // rcx

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SpatialInteractionSourceObject(
    (__int64)this,
    (__int64)a2,
    (__int64)a3,
    512,
    (__int64)a2,
    (__int64)a3);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::`vftable';
  *((_DWORD *)this + 38) = 0;
  *((_WORD *)this + 78) = 0;
  *((_BYTE *)this + 158) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_BYTE *)this + 272) = 0;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *(_QWORD *)((char *)this + 284) = 0LL;
  *(_QWORD *)((char *)this + 292) = 0LL;
  *(_QWORD *)((char *)this + 300) = 1065353216LL;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *(_QWORD *)((char *)this + 324) = 0LL;
  *(_QWORD *)((char *)this + 332) = 1065353216LL;
  *((_DWORD *)this + 85) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 43) = v4;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_WORD *)this + 192) = 1;
  *((_BYTE *)this + 384) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                           v5,
                                           (const WCHAR *)&stru_1801D87C0,
                                           L"DisableArticulatedHands",
                                           0LL) == 0;
  *((_BYTE *)this + 385) = (unsigned int)RegistryHelpers::GetDwordWithDefault(
                                           v6,
                                           (const WCHAR *)&stru_1801D88A0,
                                           L"DisableHomeGesture",
                                           0LL) == 1;
  return this;
}
