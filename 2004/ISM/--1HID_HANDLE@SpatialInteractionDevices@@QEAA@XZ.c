/*
 * XREFs of ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800CB5BC
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$3 @ 0x1801699F4 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_1801699F4.c)
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180169BF0 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@@Z @ 0x1800CA688 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@.c)
 */

void __fastcall SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(
        SpatialInteractionDevices::HID_HANDLE *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  unsigned __int64 v13; // rdx

  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
    operator delete(v3, a2);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *>>>(
    (__int64)this + 248,
    (__int64)this + 248,
    *(__int64 **)(*((_QWORD *)this + 31) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 31), (const struct std::nothrow_t *)0x38);
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
    operator delete(v5, v4);
  v6 = (void *)*((_QWORD *)this + 27);
  if ( v6 )
    operator delete(v6, v4);
  v7 = (void *)*((_QWORD *)this + 26);
  if ( v7 )
    operator delete(v7, v4);
  v8 = (void *)*((_QWORD *)this + 24);
  if ( v8 )
    operator delete(v8, v4);
  v9 = (void *)*((_QWORD *)this + 22);
  if ( v9 )
    operator delete(v9, v4);
  v10 = (void *)*((_QWORD *)this + 20);
  if ( v10 )
    operator delete(v10, v4);
  v11 = (void *)*((_QWORD *)this + 18);
  if ( v11 )
    operator delete(v11, v4);
  v12 = (void *)*((_QWORD *)this + 16);
  if ( v12 )
    operator delete(v12, v4);
  v13 = *((_QWORD *)this + 4);
  if ( v13 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 1), (const struct std::nothrow_t *)(2 * v13 + 2));
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 7LL;
  *((_WORD *)this + 4) = 0;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this);
}
