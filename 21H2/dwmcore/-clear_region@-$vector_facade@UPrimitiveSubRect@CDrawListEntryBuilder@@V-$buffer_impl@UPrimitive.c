/*
 * XREFs of ?clear_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D997C
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801E37AC (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x1801E2864 (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - v5) >> 3);
  if ( a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_6;
  }
  result = (v3 - v5) >> 3;
  v8 = v5 + 8 * result;
  if ( a3 != v6 )
  {
LABEL_6:
    v11 = 0LL;
    v9 = 24 * a3;
    *(_QWORD *)&v10 = v5;
    *((_QWORD *)&v10 + 1) = v6;
    v13 = 0LL;
    v12 = v10;
    result = ((__int64 (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>)(
               &v10,
               24 * a3 + v5,
               v8,
               &v12);
    v3 = a1[1];
    goto LABEL_4;
  }
  v9 = 24 * a3;
LABEL_4:
  a1[1] = v3 - v9;
  return result;
}
