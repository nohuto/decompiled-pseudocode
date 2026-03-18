/*
 * XREFs of ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802056A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1802029F0 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x180205620 (-CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x180205878 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueWorker(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        bool *a4)
{
  __int64 v4; // rsi
  int v5; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct CInteractionTracker *InteractionTracker; // rax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  float v19; // [rsp+60h] [rbp+8h] BYREF
  float v20; // [rsp+68h] [rbp+10h] BYREF

  *a4 = 0;
  v4 = 0LL;
  v5 = *((_DWORD *)this + 100) - 1;
  v19 = 0.0;
  *((_QWORD *)this + 44) = a2;
  *((_QWORD *)this + 45) = a3;
  if ( v5 <= 0 )
  {
LABEL_4:
    *((_DWORD *)this + 100) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 376, 4u);
    InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
    v14 = CScrollAnimation::CalculateValueForState(this, a2, a3, *((_DWORD *)InteractionTracker + 42), &v19);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x102u, 0LL);
    }
    else
    {
      v16 = CExpressionValueStack::PushConstant(a2, v19);
      v12 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x10Eu, 0LL);
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = CScrollAnimation::CalculateValueForState(this, a2, a3, *(_DWORD *)(*((_QWORD *)this + 47) + 4 * v4), &v20);
      v12 = v10;
      if ( v10 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (int)v4 >= *((_DWORD *)this + 100) - 1 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF9u, 0LL);
  }
  *a4 = *((_BYTE *)this + 344) & 1;
  return v12;
}
