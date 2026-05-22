/*
 * XREFs of ?StopPulse@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEA_N@Z @ 0x18016FB50
 * Callers:
 *     ?StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18016F934 (-StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsFilter::StopPulse(
        Windows::Internal::SpatialInteractions::HapticsFilter *this,
        __int64 a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = *((_BYTE *)this + 40);
  *((_BYTE *)this + 40) = 0;
  if ( !*a3 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsFilter *))(*(_QWORD *)this + 16LL))(this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
    (const char *)(unsigned int)v3);
  return v4;
}
