/*
 * XREFs of ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x180205878
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802056A0 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180205B88 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CInteractionTracker *__fastcall CScrollAnimation::GetInteractionTracker(CScrollAnimation *this)
{
  struct CInteractionTracker *result; // rax

  result = (struct CInteractionTracker *)*((_QWORD *)this + 41);
  if ( result )
    return (struct CInteractionTracker *)*((_QWORD *)result + 2);
  return result;
}
