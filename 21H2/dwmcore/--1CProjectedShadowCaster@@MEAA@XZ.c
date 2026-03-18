/*
 * XREFs of ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1802012E8
 * Callers:
 *     ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x1802013E0 (--_GCProjectedShadowCaster@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@@Z @ 0x180200F90 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjecte.c)
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x180201D40 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(CProjectedShadowCaster *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::SetCastingVisual(this, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 16));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 14) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
    (__int64)this + 80,
    (__int64)this + 80,
    *(_QWORD *)(*((_QWORD *)this + 10) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 10), 0x58uLL);
  CResource::~CResource(this);
}
