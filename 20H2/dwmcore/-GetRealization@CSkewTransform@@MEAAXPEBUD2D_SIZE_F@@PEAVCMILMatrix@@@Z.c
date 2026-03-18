/*
 * XREFs of ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F4540
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18004EAEC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _o_fmod_0 @ 0x1800E3D54 (_o_fmod_0.c)
 *     _o_tan_0 @ 0x1800E3D9C (_o_tan_0.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18020E77C (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 */

void __fastcall CSkewTransform::GetRealization(
        CSkewTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v5; // xmm7_8
  __int64 v6; // rcx
  double v7; // xmm0_8
  double v8; // xmm0_8
  float v9; // xmm1_4
  double v10; // xmm0_8
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  CMILMatrix *v14; // rcx
  float v15; // xmm4_4
  float v16; // xmm5_4

  v5 = o_fmod_0((__int64)this);
  v7 = o_fmod_0(v6);
  *(_DWORD *)a3 = 1065353216;
  v8 = o_tan_0(v7 * 0.01745329238474369);
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 3) = 0;
  v9 = v8;
  *((float *)a3 + 1) = v9;
  v10 = o_tan_0(v5 * 0.01745329238474369);
  *((_DWORD *)a3 + 6) = 0;
  *((_DWORD *)a3 + 7) = 0;
  *((_DWORD *)a3 + 8) = 0;
  *((_DWORD *)a3 + 9) = 0;
  *((_DWORD *)a3 + 11) = 0;
  *((_DWORD *)a3 + 12) = 0;
  *((_DWORD *)a3 + 13) = 0;
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 16) = 0;
  v11 = v10;
  *((_DWORD *)a3 + 5) = 1065353216;
  *((_DWORD *)a3 + 10) = 1065353216;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((float *)a3 + 4) = v11;
  v12 = *((float *)this + 40);
  v13 = *((float *)this + 41);
  if ( v12 != 0.0 || v13 != 0.0 )
  {
    CMILMatrix::PrependTranslate(a3, COERCE_FLOAT(LODWORD(v12) ^ _xmm), COERCE_FLOAT(LODWORD(v13) ^ _xmm));
    CMILMatrix::Translate(v14, v16, v15);
  }
}
