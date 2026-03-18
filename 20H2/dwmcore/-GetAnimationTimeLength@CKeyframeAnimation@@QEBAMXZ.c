/*
 * XREFs of ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180024C20
 * Callers:
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18002466C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180024770 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026B6C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x1801D0904 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D0A10 (-GetProperty@CKeyframeAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801D0FCC (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801D1268 (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020C270 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CKeyframeAnimation::GetAnimationTimeLength(CKeyframeAnimation *this)
{
  __int64 v1; // r8
  float result; // xmm0_4
  int v3; // eax

  v1 = *((_QWORD *)this + 45);
  result = 0.0;
  v3 = *(_DWORD *)(v1 + 112);
  if ( v3 > 0 )
    return (float)*(int *)(*(_QWORD *)(v1 + 104) + 24LL * (unsigned int)(v3 - 1)) / 1000.0;
  return result;
}
