/*
 * XREFs of ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180214F80
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1802154C4 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x180215A88 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 */

float __fastcall CExpressionForce::Update(
        CExpressionForce *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  int v4; // eax
  float v7; // xmm2_4
  float v8; // xmm1_4
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  *((_QWORD *)this + 14) = a3;
  *((_QWORD *)this + 15) = a4;
  if ( !*((_BYTE *)this + 128) )
  {
    v7 = *((float *)this + 34);
    LOBYTE(v4) = *((_DWORD *)this + 26) == 2;
    v8 = *((float *)this + 33);
    v10[0] = v4;
    v10[1] = 0;
    v10[2] = 0;
    CScalarForceEvaluator::Reset(
      (CExpressionForce *)((char *)this + 24),
      v8,
      v7,
      (CExpressionForce *)((char *)this - 8),
      (const struct ForceThreshold *)v10);
    *((_BYTE *)this + 128) = 1;
  }
  CScalarForceEvaluator::AdvanceToTime(
    (CExpressionForce *)((char *)this + 24),
    a2,
    (CExpressionForce *)((char *)this - 8));
  return *((float *)this + 10);
}
