/*
 * XREFs of ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x1801BA000
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800BF6E0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180082D80 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800CB03C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180210C0C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x180210CA8 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetScaleRotationTranslationRealization(
        CComponentTransform3D *this,
        struct CMILMatrix *a2)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  int v6; // xmm1_4
  float v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  float v10; // [rsp+28h] [rbp-19h] BYREF
  int v11; // [rsp+2Ch] [rbp-15h]
  int v12; // [rsp+30h] [rbp-11h]
  int v13; // [rsp+34h] [rbp-Dh]
  _BYTE v14[64]; // [rsp+38h] [rbp-9h] BYREF
  int v15; // [rsp+78h] [rbp+37h]

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
  *((_WORD *)a2 + 32) = 32085;
  v4 = *((float *)this + 49);
  if ( v4 != 1.0 || *((float *)this + 50) != 1.0 || *((float *)this + 51) != 1.0 )
    CMILMatrix::Scale(a2, v4, *((float *)this + 50), *((float *)this + 51));
  v5 = *((float *)this + 56);
  if ( v5 != 0.0 )
  {
    v6 = *((_DWORD *)this + 47);
    v10 = *((float *)this + 46);
    v12 = *((_DWORD *)this + 48);
    v11 = v6;
    v15 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v14, (const struct Windows::Foundation::Numerics::float3 *)&v10, v5);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v14);
  }
  v7 = *((float *)this + 52);
  if ( v7 != 0.0 || *((float *)this + 53) != 0.0 || *((float *)this + 54) != 0.0 || *((float *)this + 55) != 1.0 )
  {
    v11 = *((_DWORD *)this + 53);
    v8 = *((_DWORD *)this + 55);
    v10 = v7;
    v9 = *((_DWORD *)this + 54);
    v13 = v8;
    v12 = v9;
    v15 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v14, (const struct Windows::Foundation::Numerics::quaternion *)&v10);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v14);
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 43) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 44) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(a2, *((float *)this + 43), *((float *)this + 44), *((float *)this + 45));
  }
}
