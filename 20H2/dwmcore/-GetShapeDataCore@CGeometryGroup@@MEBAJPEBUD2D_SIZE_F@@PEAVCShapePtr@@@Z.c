/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801C34D0
 * Callers:
 *     <none>
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001824C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180069850 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072EDC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  struct CShape *v3; // rbx
  unsigned int v4; // edi
  int v6; // eax
  CRectanglesShape *v9; // rax
  __int64 v10; // rcx
  int ShapeData; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-28h]
  struct CShape *v19; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  v19 = 0LL;
  v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) != 2 )
  {
    v9 = (CRectanglesShape *)CRectanglesShape::operator new(this);
    if ( v9 )
      v3 = CRectanglesShape::CRectanglesShape(v9);
    if ( !v3 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x25u, 0LL);
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 21), a2, a3);
  v4 = ShapeData;
  if ( ShapeData < 0 )
  {
    v18 = 47;
  }
  else
  {
    v13 = CShape::CopyShape(*(CShape **)a3, 0LL, &v19);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x30u, 0LL);
      v3 = v19;
      goto LABEL_20;
    }
    v3 = v19;
    v15 = 1;
    if ( *((_DWORD *)this + 40) <= 1u )
    {
LABEL_14:
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v3;
      v3 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_20;
    }
    while ( 1 )
    {
      ShapeData = CGeometry::GetShapeData(*(CGeometry **)(*((_QWORD *)this + 21) + 8LL * v15), a2, a3);
      v4 = ShapeData;
      if ( ShapeData < 0 )
        break;
      ShapeData = CShape::Combine((__int64)v3, v16, *(_QWORD *)a3, 0LL, 1, &v19);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        v18 = 65;
        goto LABEL_19;
      }
      if ( v3 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
      v3 = v19;
      if ( ++v15 >= *((_DWORD *)this + 40) )
        goto LABEL_14;
    }
    v18 = 57;
  }
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShapeData, v18, 0LL);
LABEL_20:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v3 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
  return v4;
}
