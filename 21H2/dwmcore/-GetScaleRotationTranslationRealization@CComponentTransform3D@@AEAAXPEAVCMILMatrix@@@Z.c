/*
 * XREFs of ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18020B538
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800D27C0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180260E04 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x180260E94 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetScaleRotationTranslationRealization(
        CComponentTransform3D *this,
        struct CMILMatrix *a2)
{
  char v4; // al
  float v5; // xmm1_4
  float v6; // xmm2_4
  int v7; // xmm1_4
  __int64 v8; // r8
  __int64 v9; // r9
  float v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  __int64 v13; // r8
  __int64 v14; // r9
  float v15; // xmm2_4
  float v16; // [rsp+28h] [rbp-19h] BYREF
  int v17; // [rsp+2Ch] [rbp-15h]
  int v18; // [rsp+30h] [rbp-11h]
  int v19; // [rsp+34h] [rbp-Dh]
  _BYTE v20[64]; // [rsp+38h] [rbp-9h] BYREF
  int v21; // [rsp+78h] [rbp+37h]

  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  v4 = *((_BYTE *)a2 + 65) & 0xD7;
  *((_BYTE *)a2 + 64) = 85;
  *((_BYTE *)a2 + 65) = v4 | 0x17;
  v5 = *((float *)this + 51);
  if ( v5 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
    CMILMatrix::Scale(a2, v5, *((float *)this + 52), *((float *)this + 53));
  v6 = *((float *)this + 58);
  if ( v6 != 0.0 )
  {
    v7 = *((_DWORD *)this + 49);
    v16 = *((float *)this + 48);
    v18 = *((_DWORD *)this + 50);
    v17 = v7;
    v21 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v20, (const struct Windows::Foundation::Numerics::float3 *)&v16, v6);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v20, v8, v9);
  }
  v10 = *((float *)this + 54);
  if ( v10 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
  {
    v17 = *((_DWORD *)this + 55);
    v11 = *((_DWORD *)this + 57);
    v16 = v10;
    v12 = *((_DWORD *)this + 56);
    v19 = v11;
    v18 = v12;
    v21 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v20, (const struct Windows::Foundation::Numerics::quaternion *)&v16);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v20, v13, v14);
  }
  v15 = *((float *)this + 46);
  if ( COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v15) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(a2, *((float *)this + 45), v15, *((float *)this + 47));
  }
}
