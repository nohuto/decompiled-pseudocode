/*
 * XREFs of std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___ @ 0x1800DA9B0
 * Callers:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800C8A84 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Emplace_reallocate__anonymous_namespace_::FrameSequenceInfo_const_&_ @ 0x1800D983C (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_namespace_--Frame.c)
 *     std::vector__anonymous_namespace_::FrameSequenceInfo_std::allocator__anonymous_namespace_::FrameSequenceInfo___::_Change_array @ 0x1800DAAD8 (std--vector__anonymous_namespace_--FrameSequenceInfo_std--allocator__anonymous_name_ea_1800DAAD8.c)
 * Callees:
 *     _anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo @ 0x1800DA9EC (_anonymous_namespace_--FrameSequenceInfo--_FrameSequenceInfo.c)
 */

__int64 __fastcall std::_Destroy_range_std::allocator__anonymous_namespace_::FrameSequenceInfo___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = anonymous_namespace_::FrameSequenceInfo::_FrameSequenceInfo(v3);
      v3 += 480LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
