/*
 * XREFs of ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180203190
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1802035BC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180204A30 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x18020D540 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x18020D760 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18020DB94 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18020DC20 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ScrollAxisToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"X";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Y";
  if ( v1 == 1 )
    return L"Scale";
  return L"Unsupported Axis";
}
