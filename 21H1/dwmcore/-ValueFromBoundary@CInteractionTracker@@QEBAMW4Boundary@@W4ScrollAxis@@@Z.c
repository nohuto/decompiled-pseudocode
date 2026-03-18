/*
 * XREFs of ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801D13E8
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801D1014 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18020527C (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1802072E0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1802073F0 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180207B30 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x1801CDA04 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

float __fastcall CInteractionTracker::ValueFromBoundary(_DWORD *a1, __int64 a2, int a3)
{
  float result; // xmm0_4
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  float v7; // [rsp+38h] [rbp+10h] BYREF
  float v8; // [rsp+48h] [rbp+20h] BYREF

  CInteractionTracker::GetScrollRange(a1, a3, &v8, &v7);
  result = 0.0;
  v5 = v4 - 1;
  if ( !v5 )
    return v8;
  v6 = v5 - 1;
  if ( !v6 )
    return v7;
  if ( v6 == 1 )
    return v8;
  return result;
}
