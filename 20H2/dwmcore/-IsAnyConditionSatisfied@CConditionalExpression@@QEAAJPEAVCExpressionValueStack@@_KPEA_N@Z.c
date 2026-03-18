/*
 * XREFs of ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BD3C4
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BCE70 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1801BD794 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CA6D0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BCDB4 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsAnyConditionSatisfied(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // ecx
  unsigned int v10; // r14d
  int v11; // eax
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rcx
  bool v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 89);
  v10 = 0;
  v11 = *((_DWORD *)this + 79);
  if ( v9 != v11 )
    goto LABEL_11;
  v12 = 0;
  if ( !((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 4) )
  {
LABEL_9:
    v11 = *((_DWORD *)this + 79);
    if ( v9 == v11 )
    {
      v9 = *((_DWORD *)this + 78);
      *((_DWORD *)this + 89) = v9;
    }
LABEL_11:
    if ( a4 )
    {
      if ( v9 != *((_DWORD *)this + 78) && v9 != v11 || *((_QWORD *)this + 43) )
        v4 = 1;
      *a4 = v4;
    }
    return v10;
  }
  while ( 1 )
  {
    v13 = CConditionalExpression::CalculateConditionValue(this, v12, a2, a3, &v16);
    v10 = v13;
    if ( v13 < 0 )
      break;
    if ( v16 )
    {
      *((_DWORD *)this + 89) = v12;
      v9 = v12;
      goto LABEL_9;
    }
    if ( ++v12 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 4) )
    {
      v9 = *((_DWORD *)this + 89);
      goto LABEL_9;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x211u, 0LL);
  return v10;
}
