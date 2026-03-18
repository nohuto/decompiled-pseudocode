/*
 * XREFs of ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180019B80
 * Callers:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019B34 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18019D308 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019C94 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0458 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ConvertContextDependentClipToLocal(CShape **this)
{
  unsigned int v2; // edi
  CShape *v3; // rcx
  const struct CMILMatrix *v4; // rdx
  CShape *v5; // rax
  CMILMatrix *v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  struct CShape *v10; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v11[4]; // [rsp+40h] [rbp-69h] BYREF
  int v12; // [rsp+80h] [rbp-29h]
  char v13[72]; // [rsp+90h] [rbp-19h] BYREF
  struct D2D_MATRIX_3X2_F v14; // [rsp+D8h] [rbp+2Fh] BYREF

  v2 = 0;
  v3 = *this;
  if ( v3 )
  {
    v12 = 0;
    v4 = 0LL;
    v5 = this[1];
    if ( v5 )
    {
      *(_QWORD *)&v14.m11 = *(_QWORD *)v5;
      *(_QWORD *)&v14.m[1][0] = *((_QWORD *)v5 + 2);
      *(_QWORD *)&v14.m[2][0] = *((_QWORD *)v5 + 6);
      D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v14);
      v6 = CMILMatrix::CMILMatrix((CMILMatrix *)v13, &v14);
      v3 = *this;
      v4 = (const struct CMILMatrix *)v11;
      v11[0] = *(_OWORD *)v6;
      v11[1] = *((_OWORD *)v6 + 1);
      v11[2] = *((_OWORD *)v6 + 2);
      v11[3] = *((_OWORD *)v6 + 3);
      v12 = *((_DWORD *)v6 + 16);
    }
    v7 = CShape::CopyShape(v3, v4, &v10);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xEFu, 0LL);
    }
    else
    {
      CShapePtr::Release((CShapePtr *)(this + 2));
      this[2] = v10;
      *((_BYTE *)this + 24) = 1;
    }
  }
  return v2;
}
