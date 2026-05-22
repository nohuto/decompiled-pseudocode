/*
 * XREFs of ??0SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@QEAA@PEB_WPEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DB5F0
 * Callers:
 *     ??$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_WPEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@@0@$$QEAPEB_W$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800DB534 (--$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@623@@Z @ 0x1800D5C10 (--0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAU.c)
 */

// Hidden C++ exception states: #wind=3
Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::SpatialInteractionEyeGazeSourceObject(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this,
        const wchar_t *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a3,
        struct Windows::Internal::Holographic::ISpatialObject *a4)
{
  _QWORD *v7; // rax
  const char *v8; // r9
  _BYTE v10[16]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SpatialInteractionSourceObject(
    (__int64)this,
    (__int64)a2,
    (__int64)a3,
    0x200000,
    (__int64)a3,
    (__int64)a4);
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::`vftable';
  memset_0((char *)this + 152, 0, 0x3B8uLL);
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_DWORD *)this + 292) = 0;
  *((_QWORD *)this + 147) = 0LL;
  *((_BYTE *)this + 1184) = 0;
  *(_OWORD *)((char *)this + 1188) = 0LL;
  *(_QWORD *)((char *)this + 1204) = 0LL;
  *((_BYTE *)this + 1212) = 0;
  *((_QWORD *)this + 157) = 0LL;
  *((_DWORD *)this + 316) = 0;
  *((_QWORD *)this + 159) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v7[1] = 0LL;
  *((_QWORD *)this + 159) = v7;
  *v7 = (char *)this + 1272;
  *((_DWORD *)this + 328) = 0;
  if ( (unsigned int)_o_wcscpy_s((char *)this + 162, 200LL, a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      124LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
      v8);
    __debugbreak();
  }
  *(_OWORD *)((char *)this + 564) = *(_OWORD *)(*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObject *, _BYTE *))(*(_QWORD *)a4 + 48LL))(
                                                 a4,
                                                 v10);
  return this;
}
