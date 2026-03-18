/*
 * XREFs of ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x18004B470
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180028710 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x18004A0E0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??0?$set@_KU?$less@_K@std@@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800D9C34 (--0-$set@_KU-$less@_K@std@@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x180153B70 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 *     ??0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z @ 0x1801EA6AC (--0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z.c)
 *     ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x1801EB0F4 (--$-0V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>()
{
  __int64 result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
