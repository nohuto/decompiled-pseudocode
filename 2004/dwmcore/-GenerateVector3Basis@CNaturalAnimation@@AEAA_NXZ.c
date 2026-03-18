/*
 * XREFs of ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801D8F08
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D884C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801D95CC (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800C3B98 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     atan2f_0 @ 0x1800EEC7F (atan2f_0.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18021B910 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18021C42C (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18021CE2C (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18021D2C4 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 */

char __fastcall CNaturalAnimation::GenerateVector3Basis(CNaturalAnimation *this)
{
  char v1; // al
  char v2; // r9
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  unsigned __int64 v7; // xmm9_8
  float v8; // edi
  float *v9; // rax
  float *v10; // r8
  unsigned int v11; // xmm0_4
  unsigned int v12; // xmm2_4
  float v13; // xmm0_4
  const struct D2DMatrix *v14; // r8
  _BYTE v16[16]; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-29h] BYREF
  float v18; // [rsp+40h] [rbp-21h]

  v1 = *((_BYTE *)this + 564);
  v2 = 0;
  if ( (v1 & 4) != 0 )
  {
    v4 = *((float *)this + 81) - *((float *)this + 84);
    v5 = *((float *)this + 82) - *((float *)this + 85);
    v6 = *((float *)this + 83) - *((float *)this + 86);
    v17 = __PAIR64__(LODWORD(v5), LODWORD(v4));
    v18 = v6;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6)) & _xmm) >= 0.0000011920929 )
    {
      v8 = v18;
      v7 = v17;
    }
    else
    {
      v7 = *(_QWORD *)((char *)this + 348);
      v8 = *((float *)this + 89);
      v17 = v7;
      v5 = *((float *)&v7 + 1);
      LODWORD(v4) = v7;
      v18 = v8;
      v6 = v8;
    }
    if ( (v1 & 1) == 0
      || (v9 = (float *)D3DXVec3Cross(
                          (CNaturalAnimation *)((char *)this + 360),
                          (const struct D2DVector3 *)&v17,
                          (CNaturalAnimation *)((char *)this + 360)),
          COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*v9 * *v9) + (float)(v9[1] * v9[1])) + (float)(v9[2] * v9[2])) & _xmm) >= 0.0000011920929)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*v10 * *v10) + (float)(v10[1] * v10[1])) + (float)(v10[2] * v10[2])) & _xmm) < 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6)) & _xmm) >= 0.0000011920929 )
      {
        v11 = (unsigned int)FLOAT_1_0;
        if ( v4 == 0.0 )
          v12 = 0;
        else
          v12 = (unsigned int)FLOAT_1_0;
        if ( v4 != 0.0 )
          v11 = COERCE_UNSIGNED_INT(v5 / v4) ^ _xmm;
        v18 = 0.0;
        v17 = __PAIR64__(v12, v11);
        D3DXVec3Normalize((struct D2DVector3 *)&v17, (const struct D2DVector3 *)&v17);
        v13 = atan2f_0(
                COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)&v17 + 1) * v4) - (float)(*(float *)&v17 * v5)) ^ _xmm),
                v6);
        D3DXQuaternionRotationAxis((struct D2DQuaternion *)v16, (const struct D2DVector3 *)&v17, v13);
        D2DMatrixRotationQuaternion((CNaturalAnimation *)((char *)this + 436), (const struct D2DQuaternion *)v16);
        D2DMatrixInverse((CNaturalAnimation *)((char *)this + 500), 0LL, v14);
        v2 = 1;
      }
    }
    *((_BYTE *)this + 564) &= ~4u;
    *((_QWORD *)this + 45) = v7;
    *((float *)this + 92) = v8;
  }
  return v2;
}
