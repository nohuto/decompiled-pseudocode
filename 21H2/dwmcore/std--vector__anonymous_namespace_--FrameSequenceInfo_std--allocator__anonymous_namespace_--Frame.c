/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x180028530
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028740 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 * Callees:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800286A0 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800286A0.c)
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800290C8 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x18005001C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180152340 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const___(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  SIZE_T v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+78h] [rbp+20h]

  v6 = (a2 - *a1) / 480;
  v7 = (a1[1] - *a1) / 480;
  if ( v7 == 0x88888888888888LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 480;
  v10 = v9 >> 1;
  if ( v9 > 0x88888888888888LL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 480 * v11;
  if ( v11 > 0x88888888888888LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v23 = 480 * v6;
  v25 = v13 + 480 * v6;
  anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v25, a3);
  v14 = a1[1];
  v15 = v13;
  v16 = *a1;
  if ( a2 == v14 )
  {
    if ( v16 != v14 )
    {
      v17 = a1[1];
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo(v15, v16);
        v15 += 480LL;
        v16 += 480LL;
      }
      while ( v16 != v17 );
    }
    v18 = v15;
    v19 = v15;
  }
  else
  {
    while ( v16 != a2 )
    {
      anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v15, v16);
      v15 += 480LL;
      v16 += 480LL;
    }
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v15, v15);
    v21 = v25 + 480;
    v24 = a1[1];
    if ( a2 != v24 )
    {
      v22 = v25 - v23 - v13 + a2;
      do
      {
        anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0(v21, v22);
        v21 += 480LL;
        v22 += 480LL;
      }
      while ( v22 != v24 );
    }
    v18 = v21;
    v19 = v21;
  }
  std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v19, v18);
  std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
    a1,
    v13,
    v8,
    v11);
  return v23 + *a1;
}
