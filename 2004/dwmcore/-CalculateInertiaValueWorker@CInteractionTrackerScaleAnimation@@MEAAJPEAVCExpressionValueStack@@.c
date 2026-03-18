/*
 * XREFs of ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180205170
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CAB30 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x1801CE930 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801CEA84 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        float a4,
        float *a5)
{
  __int64 v5; // rdi
  float CurrentValue; // xmm6_4
  _DWORD *v10; // rcx
  double (__fastcall *v11)(char *, struct CExpressionValueStack *, wchar_t *); // r11
  double v12; // xmm0_8
  int updated; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx

  v5 = *((_QWORD *)this + 41);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  CurrentValue = CInteractionTracker::GetCurrentValue(v5, 2);
  CInteractionTracker::ValueFromBoundary((_DWORD *)v5, 2LL, 2);
  CInteractionTracker::ValueFromBoundary(v10, 1LL, 2);
  v12 = v11((char *)this + 432, a2, a3);
  if ( *(float *)&v12 == CurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState(v5, a2, a3, 2u), v15 = updated, updated >= 0) )
  {
    v15 = 0;
    *a5 = *(float *)&v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, updated, 0x11Eu, 0LL);
  }
  return v15;
}
