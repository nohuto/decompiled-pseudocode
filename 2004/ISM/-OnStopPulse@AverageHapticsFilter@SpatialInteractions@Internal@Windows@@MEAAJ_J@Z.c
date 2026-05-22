/*
 * XREFs of ?OnStopPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x18016D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x18016A524 (-AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnStopPulse(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Internal::SpatialInteractions::AverageHapticsFilter::AccumulateCurrent(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *((_BYTE *)this + 48) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
