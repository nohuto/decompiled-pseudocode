/*
 * XREFs of ??1CSceneComponent@@MEAA@XZ @ 0x18020A218
 * Callers:
 *     ??1CSceneMeshRendererComponent@@MEAA@XZ @ 0x1801EA72C (--1CSceneMeshRendererComponent@@MEAA@XZ.c)
 *     ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18020A270 (--_GCSceneComponent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x1800876C0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CSceneComponent::~CSceneComponent(CSceneComponent *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 56);
  *(_QWORD *)this = &CSceneComponent::`vftable';
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    (__int64)this + 56,
    (__int64)v1,
    *((__int64 **)*v1 + 1));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  CResource::~CResource(this);
}
