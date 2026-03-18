/*
 * XREFs of ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E7A4
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18004F560 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800505C0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180081270 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ @ 0x1800C15BC (-ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18019DA0C (--$uninitialized_copy@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_R.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  bool v10; // sf
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v7 = (v3 - *a1) >> 4;
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v9 = v5 + 16 * v7;
  if ( v8 != v7 )
  {
    *(_QWORD *)&v12 = v5;
    *((_QWORD *)&v12 + 1) = v7;
    v10 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
      {
LABEL_11:
        _o__invalid_parameter_noinfo_noreturn(v9, a2);
        __debugbreak();
LABEL_12:
        v13 = a2;
        v14 = v12;
        v15 = a2;
        std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
          (__int64)&v12,
          (const void *)(v5 + 16 * v8),
          v9,
          &v14);
        v3 = a1[1];
        goto LABEL_13;
      }
      v10 = a2 < 0;
    }
    if ( (!v10 || !a2) && (a2 <= 0 || v7 >= a2) )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_13:
  result = v3 - 16 * a3;
  a1[1] = result;
  return result;
}
