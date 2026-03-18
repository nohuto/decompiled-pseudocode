/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_unsigned_int___ @ 0x18005292C
 * Callers:
 *     ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z @ 0x18005270C (-FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Find_lower_bound__anonymous_namespace_::AnimationId_ @ 0x1800529FC (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800529FC.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Insert_node @ 0x1800E5E20 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_ea_1800E5E20.c)
 *     std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::pair__anonymous_namespace_::AnimationId_unsigned_int___ @ 0x1800E6000 (std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair__anonymous_namespace__ea_1800E6000.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Check_grow_by_1 @ 0x1800E60A4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800E60A4.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_unsigned_int___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  __int128 v9; // xmm6
  __int64 v11; // rax
  __int64 v12; // rdi
  _BYTE v13[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  v5 = (_QWORD *)(a1 + 8);
  v6 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Find_lower_bound__anonymous_namespace_::AnimationId_(
         a1,
         v13);
  v9 = *(_OWORD *)v6;
  v16 = *(_QWORD *)(v6 + 16);
  if ( *(_BYTE *)(v16 + 25) || *(_QWORD *)v7 < *(_QWORD *)(v16 + 32) && *(_DWORD *)(v7 + 8) < *(_DWORD *)(v16 + 40) )
  {
    std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Check_grow_by_1(v8);
    v11 = std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void________std::pair__anonymous_namespace_::AnimationId_unsigned_int___(
            v13,
            v5,
            *v5,
            a3);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    if ( v14 )
      std::_Deallocate<16,0>(v14, 56LL);
    v15 = v9;
    *(_QWORD *)a2 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Insert_node(
                      v5,
                      &v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v16;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
