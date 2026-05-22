/*
 * XREFs of ?AddPulse@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_J0NPEA_J@Z @ 0x18016AA40
 * Callers:
 *     ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x18016F518 (-StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsFilter::AddPulse(
        Windows::Internal::SpatialInteractions::HapticsFilter *this,
        __int64 a2,
        __int64 a3,
        double a4,
        __int64 *a5)
{
  __int128 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 40) )
  {
    *a5 = 0LL;
    return (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsFilter *, __int64, __int64))(*(_QWORD *)this + 8LL))(
             this,
             a2,
             a3);
  }
  v9 = *((__int64 *)this + 1);
  *((double *)this + 3) = a4;
  *((_BYTE *)this + 40) = 1;
  *((_QWORD *)this + 2) = a2;
  v10 = v9 / 2;
  if ( !*((_BYTE *)this + 32) )
    v10 = *((_QWORD *)this + 1);
  *a5 = a2 + v10;
  v11 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::HapticsFilter *, __int64))this)(this, a2);
  v12 = v11;
  if ( v11 >= 0 )
    return (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsFilter *, __int64, __int64))(*(_QWORD *)this + 8LL))(
             this,
             a2,
             a3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
    (const char *)(unsigned int)v11);
  return v12;
}
