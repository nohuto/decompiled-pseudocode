/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18021E688
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180256630 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180256740 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180219564 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(
        __int64 a1,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a4 == 1 )
  {
    v8 = 156LL;
  }
  else
  {
    if ( a4 != 2 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v8 = 164LL;
  }
  v9 = a1 + v8;
  v10 = CInteractionTracker::CalculateCenterPointForAxis((float *)a1, a2, a3, a4, 0, (void *)(a1 + v8));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1709u);
  }
  else
  {
    v13 = CInteractionTracker::CalculateCenterPointForAxis((float *)a1, a2, a3, a4, 1u, (void *)(v9 + 4));
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x170Bu);
    }
    else if ( a4 == 1 )
    {
      *(_QWORD *)(a1 + 164) = *(_QWORD *)(a1 + 156);
    }
  }
  return v12;
}
