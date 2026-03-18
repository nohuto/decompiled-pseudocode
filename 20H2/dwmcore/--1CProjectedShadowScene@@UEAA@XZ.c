/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x18000FE84
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x18000FF00 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x18000E43C (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18000E5C4 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x18000E660 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x18000E760 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x18000E83C (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
  CProjectedShadowScene::ClearShadows(this, 0);
  CProjectedShadowScene::ClearCasters(this);
  CProjectedShadowScene::ClearReceivers(this);
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v2,
    *((_QWORD *)this + 9));
  std::_Deallocate<16,0>(*((_QWORD *)this + 9), 120LL);
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    v3,
    *((_QWORD *)this + 7));
  std::_Deallocate<16,0>(*((_QWORD *)this + 7), 176LL);
  CResource::~CResource(this);
}
