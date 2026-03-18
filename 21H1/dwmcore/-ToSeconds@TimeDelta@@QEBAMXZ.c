/*
 * XREFs of ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x1801DD1D8
 * Callers:
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801DB15C (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802054AC (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@@QEBA_JXZ @ 0x18009A6D0 (-ToMicroseconds@TimeDelta@@QEBA_JXZ.c)
 */

float __fastcall TimeDelta::ToSeconds(TimeDelta *this)
{
  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)TimeDelta::ToMicroseconds(this) / 1000000.0;
}
