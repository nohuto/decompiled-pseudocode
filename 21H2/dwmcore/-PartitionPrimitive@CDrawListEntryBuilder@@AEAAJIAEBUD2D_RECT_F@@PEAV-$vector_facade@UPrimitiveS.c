/*
 * XREFs of ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E369C
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005739C (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800636A8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Area@@YAMAEBUD2D_RECT_F@@@Z @ 0x180085F20 (-Area@@YAMAEBUD2D_RECT_F@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801E37AC (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 */

__int64 __fastcall CDrawListEntryBuilder::PartitionPrimitive(
        __int64 a1,
        int a2,
        const struct D2D_RECT_F *a3,
        __int64 a4)
{
  unsigned int v8; // edi
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rcx
  CCpuClip *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct CShape *v15; // rbx
  struct CShape *v17; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v18[64]; // [rsp+40h] [rbp-68h] BYREF
  int v19; // [rsp+80h] [rbp-28h]

  v8 = 0;
  detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(a4);
  v9 = 1;
  if ( a2 )
    v9 = a2;
  v10 = v9;
  if ( Area(a3) >= (float)v9 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( (*(_QWORD *)v11 || *(_QWORD *)(v11 + 80)) && !CCpuClip::IsAxisAlignedRectangle((CShape **)v11) )
    {
      v12 = *(CCpuClip **)(a1 + 16);
      v19 = 0;
      v13 = CCpuClip::ResolveClip(v12, &v17, (struct CMILMatrix *)v18);
      v8 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x4C9u);
      }
      else
      {
        v15 = v17;
        if ( !(*(unsigned int (__fastcall **)(struct CShape *))(*(_QWORD *)v17 + 8LL))(v17) )
          CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
            v10,
            (int)a3,
            (__int64)v15,
            (__int64)v18,
            a4);
      }
    }
  }
  return v8;
}
