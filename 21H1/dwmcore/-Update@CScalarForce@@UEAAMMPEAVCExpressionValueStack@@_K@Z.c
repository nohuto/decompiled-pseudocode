/*
 * XREFs of ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1802169F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1802170D4 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 */

float __fastcall CScalarForce::Update(CScalarForce *this, float a2, struct CExpressionValueStack *a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-28h] BYREF

  CScalarForceEvaluator::AdvanceToTime(
    (CScalarForce *)((char *)this + 24),
    a2 - *((float *)this + 26),
    *((struct IAccelerator **)this + 14));
  return *(float *)((*(__int64 (__fastcall **)(CScalarForce *, _BYTE *))(*(_QWORD *)this + 32LL))(this, v5) + 4);
}
