/*
 * XREFs of ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180039368
 * Callers:
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180038DD0 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180038E50 (-OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_i.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x18003903C (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::GetTransitionVisualSetIndex(CAnimationEngine *this, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  __int64 v4; // r8

  v2 = *((_DWORD *)this + 16);
  v3 = -1;
  v4 = 0LL;
  if ( v2 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) + 16LL) != a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v2 )
        return v3;
    }
    return (unsigned int)v4;
  }
  return v3;
}
