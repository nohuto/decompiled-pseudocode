/*
 * XREFs of ??1SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800DEA80
 * Callers:
 *     ??_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800DEBD0 (--_GSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4HandJointKind@People@Perception@Windows@@UJointHelper@SpatialInteractionSourceHand@SpatialInteractions@Internal@4@@std@@PEAX@1@@Z @ 0x1800DDEA0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4HandJointKind@People@Perception@Windows@.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::~SpatialInteractionSourceHand(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this)
{
  void *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 45);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(1328 * ((*((_QWORD *)this + 47) - (_QWORD)v2) / 1328LL)));
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum Windows::Perception::People::HandJointKind const,Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::JointHelper>,void *>>>(
    (__int64)this + 344,
    (__int64)this + 344,
    *(_QWORD *)(*((_QWORD *)this + 43) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 43), (const struct std::nothrow_t *)0x60);
  v4 = (void *)*((_QWORD *)this + 29);
  if ( v4 )
    operator delete(v4, v3);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::~SpatialInteractionSourceObject(this);
}
