/*
 * XREFs of ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E3980
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x1801E3CA4 (-erase@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansi.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801E2928 (--$move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimitiveUVDes.c)
 */

__int64 __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v7 = 0x4EC4EC4EC4EC4EC5LL * ((v3 - *a1) >> 2);
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( v8 != v7 )
  {
    *(_QWORD *)&v10 = v5;
    *((_QWORD *)&v10 + 1) = v7;
    if ( a2 && (!v5 || a2 < 0 || v7 < a2) )
    {
      _o__invalid_parameter_noinfo_noreturn(v8);
      __debugbreak();
      JUMPOUT(0x1801E3A59LL);
    }
    v11 = a2;
    v12 = v10;
    v13 = a2;
    std::move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
      (__int64)&v10,
      v5 + 52 * v8,
      v5 + 52 * v7,
      &v12);
    v3 = a1[1];
  }
  result = 52 * a3;
  a1[1] = v3 - 52 * a3;
  return result;
}
