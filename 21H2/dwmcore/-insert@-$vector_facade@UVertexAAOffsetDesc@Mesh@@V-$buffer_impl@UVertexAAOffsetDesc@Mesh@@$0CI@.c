/*
 * XREFs of ?insert@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UVertexAAOffsetDesc@Mesh@@@2@V?$basic_iterator@$$CBUVertexAAOffsetDesc@Mesh@@@2@_KAEBUVertexAAOffsetDesc@Mesh@@@Z @ 0x1800D1630
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexAAOffsetDesc@Mesh@@_K0@Z @ 0x1800D16C4 (-reserve_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mes.c)
 */

_QWORD *__fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::insert(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  _OWORD *i; // rax
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*a3 - *a1) >> 3);
  v7 = a4;
  for ( i = (_OWORD *)detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        v6,
                        a4); v7; --v7 )
  {
    *i = *(_OWORD *)a5;
    i = (_OWORD *)((char *)i + 24);
    *((_QWORD *)i - 1) = *(_QWORD *)(a5 + 16);
  }
  result = a2;
  *a2 = *a1 + 24 * v6;
  return result;
}
