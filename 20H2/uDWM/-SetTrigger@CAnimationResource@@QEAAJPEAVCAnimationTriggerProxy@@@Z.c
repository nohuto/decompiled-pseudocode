/*
 * XREFs of ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800078D0
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180007840 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 *     ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x180008440 (-SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::SetTrigger(CAnimationResource *this, struct CAnimationTriggerProxy *a2)
{
  __int64 result; // rax

  result = 2147942405LL;
  if ( !*((_BYTE *)this + 73) && !*((_QWORD *)this + 12) )
  {
    *((_QWORD *)this + 12) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    return 0LL;
  }
  return result;
}
