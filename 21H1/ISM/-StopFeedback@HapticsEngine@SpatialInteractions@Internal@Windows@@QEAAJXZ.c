/*
 * XREFs of ?StopFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18016F934
 * Callers:
 *     ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016FA10 (-StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?StopPulse@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEA_N@Z @ 0x18016FB50 (-StopPulse@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEA_N@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x180170070 (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::StopFeedback(
        Windows::Internal::SpatialInteractions::HapticsEngine *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v9 = v2;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( !*((_BYTE *)this + 229) )
    {
      v7 = 0;
      Windows::Internal::SpatialInteractions::HapticsFilter::StopPulse(
        *((Windows::Internal::SpatialInteractions::HapticsFilter **)this + 14),
        v8,
        &v7);
    }
    *((_BYTE *)this + 231) = 0;
    Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(this, 0.0, v8);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 72LL))(*((_QWORD *)this + 15));
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25F,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)(unsigned int)v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
