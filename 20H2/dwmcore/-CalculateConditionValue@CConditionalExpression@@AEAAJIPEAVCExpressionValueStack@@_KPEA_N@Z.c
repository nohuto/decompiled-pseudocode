/*
 * XREFs of ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BCDB4
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BCE70 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BD3C4 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::CalculateConditionValue(
        CConditionalExpression *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        __int64 a4,
        bool *a5)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // cl
  bool *v13; // rax
  char v15; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 40) + 16LL * a2);
  v7 = (*(__int64 (__fastcall **)(__int64, struct CExpressionValueStack *, __int64, char *))(*(_QWORD *)v6 + 256LL))(
         v6,
         a3,
         a4,
         &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x155u, 0LL);
  }
  else
  {
    v10 = (unsigned int)(*((_DWORD *)a3 + 4) - 1);
    v11 = *((_QWORD *)a3 + 3) + 80 * v10;
    if ( *(_DWORD *)(v11 + 72) == 17 )
    {
      v12 = *(_BYTE *)v11;
      v9 = 0;
      v13 = a5;
      *((_DWORD *)a3 + 4) = v10;
      *v13 = v12;
    }
    else
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024809, 0x15Bu, 0LL);
    }
  }
  return v9;
}
