/*
 * XREFs of std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x180028670
 * Callers:
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x180028500 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 * Callees:
 *     std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x180029098 (std--_Destroy_range_std--allocator__anonymous_namespace_--FrameSequenceInfo___.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(v6, a1[1]);
    std::_Deallocate<16,0>(*a1, 480 * ((a1[2] - *a1) / 480LL));
  }
  *a1 = a2;
  a1[1] = a2 + 480 * a3;
  result = a2 + 480 * a4;
  a1[2] = result;
  return result;
}
