/*
 * XREFs of ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x180045C7C
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180045BC0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x180045C5C (-ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  if ( *((float *)this + 131) != a2 )
  {
    *((_BYTE *)this + 572) |= 4u;
    *((float *)this + 131) = fminf(1.0, fmaxf(a2, 0.0));
    CResource::InvalidateAnimationSources(this, 0x21u);
  }
}
