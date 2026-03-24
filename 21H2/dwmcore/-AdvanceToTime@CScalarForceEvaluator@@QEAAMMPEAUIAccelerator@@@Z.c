/*
 * XREFs of ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x1802154C4
 * Callers:
 *     ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180214DE0 (-Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180214F80 (-Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x180215D24 (-AdvanceToTime@CVector3ForceEvaluator@@QEAA-AUD2DVector3@@MPEAUIAccelerator@@00@Z.c)
 * Callees:
 *     ?CorrectOvershootIfNecessary@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEBU2@PEAUIAccelerator@@PEA_N@Z @ 0x180215618 (-CorrectOvershootIfNecessary@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEBU2@PEAUIAccelera.c)
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x180215868 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 */

float __fastcall CScalarForceEvaluator::AdvanceToTime(CScalarForceEvaluator *this, float a2, struct IAccelerator *a3)
{
  float v7; // xmm1_4
  float v8; // xmm1_4
  char *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // [rsp+20h] [rbp-58h]
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF
  char v21; // [rsp+88h] [rbp+10h] BYREF

  if ( a2 == *(float *)this )
    return *((float *)this + 9);
  v7 = a2 - *(float *)this;
  if ( (*((_BYTE *)this + 64) & 2) != 0 )
    v7 = fmaxf(0.0, fminf(v7, 0.25));
  v8 = v7 + *((float *)this + 1);
  *((float *)this + 1) = v8;
  if ( v8 >= 0.0099999998 )
  {
    v9 = (char *)this + 12;
    do
    {
      v10 = *((_DWORD *)v9 + 4);
      *((_OWORD *)this + 2) = *(_OWORD *)v9;
      LODWORD(v19) = *((_DWORD *)this + 2);
      *((_DWORD *)this + 12) = v10;
      v11 = CScalarForceEvaluator::Integrate(this, v20, v9, a3, v19, LODWORD(FLOAT_0_0099999998));
      v21 = 0;
      *(_OWORD *)v9 = *(_OWORD *)v11;
      *((_DWORD *)v9 + 4) = *(_DWORD *)(v11 + 16);
      v12 = CScalarForceEvaluator::CorrectOvershootIfNecessary(this, v20, v9, a3, &v21);
      v13 = v21 == 0;
      v8 = *((float *)this + 1) - 0.0099999998;
      *(_OWORD *)v9 = *(_OWORD *)v12;
      LODWORD(v12) = *(_DWORD *)(v12 + 16);
      v14 = *((float *)this + 2) + 0.0099999998;
      *((float *)this + 1) = v8;
      *((_DWORD *)v9 + 4) = v12;
      *((float *)this + 2) = v14;
    }
    while ( v13 && v8 >= 0.0099999998 );
  }
  v15 = v8 / 0.0099999998;
  v16 = 1.0 - v15;
  v17 = v15 * *((float *)this + 4);
  v18 = v16 * *((float *)this + 9);
  *(float *)this = a2;
  return v18 + v17;
}
