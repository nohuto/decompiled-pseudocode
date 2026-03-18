/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A624
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18008CD30 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CRenderData@@MEAA@XZ @ 0x180098A6C (--1CRenderData@@MEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18009A688 (--1CExpression@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180156718 (--1CComposition@@MEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1801AC6E0 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801AC6EC (--1CExpressionManager@@UEAA@XZ.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801BA4A0 (--1CCompositionCubeMap@@UEAA@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CA504 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CE6B0 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x1801FC510 (--_ECExpressionValueStack@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DynArrayImpl<1>::~DynArrayImpl<1>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 != a1[1] )
  {
    operator delete(v2);
    *a1 = 0LL;
  }
}
