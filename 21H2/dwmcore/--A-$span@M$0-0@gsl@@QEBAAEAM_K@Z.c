/*
 * XREFs of ??A?$span@M$0?0@gsl@@QEBAAEAM_K@Z @ 0x180229F68
 * Callers:
 *     ?AnimateSingle@?$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x180229F90 (-AnimateSingle@-$LinearKeyframeAnimation@M@Particles@@UEBAXAEAV-$span@M$0-0@gsl@@00@Z.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x180229FF0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat2@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x18022A050 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 *     ?AnimateSingle@?$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@00@Z @ 0x18022A0C0 (-AnimateSingle@-$LinearKeyframeAnimation@Ufloat4@Numerics@Foundation@Windows@@@Particles@@UEBAXA.c)
 *     ?AnimateSingle@DirectionAnimator@Particles@@UEBAXAEAV?$span@M$0?0@gsl@@000@Z @ 0x18022A120 (-AnimateSingle@DirectionAnimator@Particles@@UEBAXAEAV-$span@M$0-0@gsl@@000@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<float,-1>::operator[](gsl::details *a1)
{
  if ( !*(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x180229F81LL);
  }
  return *((_QWORD *)a1 + 1);
}
