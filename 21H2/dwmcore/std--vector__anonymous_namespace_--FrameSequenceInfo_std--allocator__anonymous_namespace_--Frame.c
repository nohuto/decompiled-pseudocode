/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800E350C
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180077634 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077A0C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800E3660 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800E3660.c)
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800E36F4 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1801854E8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x1801A933C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // [rsp+60h] [rbp+8h]
  unsigned __int64 v23; // [rsp+68h] [rbp+10h]

  v6 = (a2 - *a1) / 480;
  v7 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[1] - *a1) >> 5);
  if ( v7 == 0x88888888888888LL )
    std::_Xlength_error("vector too long");
  v8 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[2] - *a1) >> 5);
  v23 = v7 + 1;
  v9 = v8 >> 1;
  if ( v8 > 0x88888888888888LL - (v8 >> 1) )
  {
    v10 = 0x88888888888888LL;
  }
  else
  {
    v10 = v7 + 1;
    if ( v9 + v8 >= v7 + 1 )
      v10 = v9 + v8;
    if ( v10 > 0x88888888888888LL )
      std::_Throw_bad_array_new_length();
  }
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(480 * v10);
  v12 = v11 + 480 * v6;
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 == v13 )
  {
    if ( v15 != v13 )
    {
      v16 = a1[1];
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v14, v15);
        v14 += 480LL;
        v15 += 480LL;
      }
      while ( v15 != v16 );
    }
    v17 = v14;
    v18 = v14;
  }
  else
  {
    while ( v15 != a2 )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v14, v15);
      v14 += 480LL;
      v15 += 480LL;
    }
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v14, v14);
    v20 = v12 + 480;
    v22 = a1[1];
    if ( a2 != v22 )
    {
      v21 = a2;
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v20, v21);
        v20 += 480LL;
        v21 += 480LL;
      }
      while ( v21 != v22 );
    }
    v17 = v20;
    v18 = v20;
  }
  std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v18, v17);
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
    a1,
    v11,
    v23,
    v10);
  return v12;
}
