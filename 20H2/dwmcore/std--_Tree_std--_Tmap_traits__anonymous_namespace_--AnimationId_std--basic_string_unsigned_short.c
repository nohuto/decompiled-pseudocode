/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_ @ 0x1800D4428
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18007EE20 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate @ 0x1800D4598 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800D4598.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801522F0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0xd209ef2d::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  _QWORD *v5; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  char v12; // r11
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 *result; // rax
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rcx

  v5 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= 0x492492492492491uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = *v5;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v12 = 0;
  v13 = v10;
  *(_OWORD *)(v10 + 32) = *(_OWORD *)a5;
  *(_QWORD *)(v10 + 48) = *(_QWORD *)(a5 + 16);
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(v10 + 8) = v9;
  *(_QWORD *)(v10 + 16) = v9;
  *(_WORD *)(v10 + 24) = 0;
  ++v5[1];
  *(_QWORD *)(v10 + 8) = a4;
  if ( a4 == (__int64 *)*v5 )
  {
    *(_QWORD *)(*v5 + 8LL) = v10;
    *(_QWORD *)*v5 = v10;
    v14 = *v5;
LABEL_4:
    *(_QWORD *)(v14 + 16) = v13;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(__int64 **)*v5 )
      *(_QWORD *)*v5 = v10;
    goto LABEL_5;
  }
  a4[2] = v10;
  v14 = *v5;
  if ( a4 == *(__int64 **)(*v5 + 16LL) )
    goto LABEL_4;
LABEL_5:
  v15 = *(_QWORD *)(v13 + 8);
  v16 = v13;
  while ( *(_BYTE *)(v15 + 24) == v12 )
  {
    v19 = *(_QWORD *)(v16 + 8);
    v20 = *(__int64 **)(v19 + 8);
    v21 = *v20;
    if ( v19 == *v20 )
    {
      v21 = v20[2];
      if ( *(_BYTE *)(v21 + 24) == v12 )
      {
LABEL_19:
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(v21 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v12;
        v16 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
        goto LABEL_16;
      }
      if ( v16 == *(_QWORD *)(v19 + 16) )
        std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
          v5,
          *(_QWORD *)(v16 + 8),
          v11,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v12;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        v5,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
        v11,
        v16);
    }
    else
    {
      if ( *(_BYTE *)(v21 + 24) == v12 )
        goto LABEL_19;
      if ( v16 == *(_QWORD *)v19 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          v5,
          *(_QWORD *)(v16 + 8),
          v11,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v12;
      std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
        v5,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
        v11,
        v16);
    }
LABEL_16:
    v15 = *(_QWORD *)(v16 + 8);
  }
  v17 = *(_QWORD *)(*v5 + 8LL);
  result = a2;
  *a2 = v13;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
