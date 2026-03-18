/*
 * XREFs of ?clear_region@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008A2EC
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800AD540 (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?erase@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexAAOffsetDesc@Mesh@@@2@V?$basic_iterator@$$CBUVertexAAOffsetDesc@Mesh@@@2@0@Z @ 0x1801E8750 (-erase@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$.c)
 *     ?clear@?$vector_facade@VMatrix3x2F@D2D1@@V?$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18025C818 (-clear@-$vector_facade@VMatrix3x2F@D2D1@@V-$buffer_impl@VMatrix3x2F@D2D1@@$09$00Vliberal_expansi.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801E2864 (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 */

__int64 __fastcall detail::vector_facade<D2D1::Matrix3x2F,detail::buffer_impl<D2D1::Matrix3x2F,10,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  bool v10; // zf
  __int64 v11; // r8
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v4 = *a1;
  v6 = (v3 - *a1) >> 3;
  v7 = a2 + a3;
  v8 = 0xAAAAAAAAAAAAAAABuLL * v6;
  v10 = a2 + a3 == v8;
  if ( a2 + a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v11 = v4 + 24 * v8;
    if ( v10 )
      goto LABEL_3;
  }
  *(_QWORD *)&v13 = v4;
  *((_QWORD *)&v13 + 1) = v8;
  if ( a2 && (!v4 || a2 < 0 || v8 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x180144F46LL);
  }
  v14 = a2;
  v15 = v13;
  v16 = a2;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
    &v13,
    v4 + 24 * v7,
    v11,
    &v15);
  v3 = a1[1];
LABEL_3:
  result = 24 * a3;
  a1[1] = v3 - 24 * a3;
  return result;
}
