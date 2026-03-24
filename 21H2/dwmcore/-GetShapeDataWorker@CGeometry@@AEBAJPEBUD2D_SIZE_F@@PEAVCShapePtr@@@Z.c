/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D54D0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180087600 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800805D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C4638 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, unsigned __int64 a2, CShape **a3)
{
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx
  struct CShape *v12; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v13[80]; // [rsp+40h] [rbp-88h] BYREF
  struct D2D_MATRIX_3X2_F v14; // [rsp+90h] [rbp-38h] BYREF

  v5 = a2 & -(__int64)(*((_BYTE *)this + 128) != 0);
  v6 = (*(__int64 (__fastcall **)(CGeometry *, unsigned __int64))(*(_QWORD *)this + 224LL))(this, v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xFAu, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 240LL))(this) && *a3 )
  {
    (*(void (__fastcall **)(CGeometry *, unsigned __int64, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this + 232LL))(
      this,
      v5,
      &v14);
    CMILMatrix::CMILMatrix((CMILMatrix *)v13, &v14);
    v10 = CShape::CopyShape(*a3, (const struct CMILMatrix *)v13, &v12);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x108u, 0LL);
    }
    else
    {
      CShapePtr::Release((CShapePtr *)a3);
      *a3 = v12;
      *((_BYTE *)a3 + 8) = 1;
    }
  }
  return v8;
}
