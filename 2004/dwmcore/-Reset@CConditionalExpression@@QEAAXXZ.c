/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1801BF840
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801BE8D4 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1801BF6C4 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CC4E0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  *((_DWORD *)this + 89) = *((_DWORD *)this + 79);
  v1 = (_QWORD *)*((_QWORD *)this + 41);
  for ( i = (_QWORD *)*((_QWORD *)this + 40); i != v1; i += 2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 224LL))(*i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)i[1] + 224LL))(i[1]);
  }
}
