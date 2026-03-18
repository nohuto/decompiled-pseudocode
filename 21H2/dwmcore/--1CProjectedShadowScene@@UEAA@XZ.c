/*
 * XREFs of ??1CProjectedShadowScene@@UEAA@XZ @ 0x18023603C
 * Callers:
 *     ??_GCProjectedShadowScene@@UEAAPEAXI@Z @ 0x1802360C0 (--_GCProjectedShadowScene@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180235CDC (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180235D2C (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180236200 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x18023629C (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180236374 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 */

void __fastcall CProjectedShadowScene::~CProjectedShadowScene(CProjectedShadowScene *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  CProjectedShadowScene::ClearShadows(this, 0);
  CProjectedShadowScene::ClearCasters(this);
  CProjectedShadowScene::ClearReceivers(this);
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v2,
    *((_QWORD *)this + 10));
  std::_Deallocate<16,0>(*((void **)this + 10), 0x78uLL);
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    v3,
    *((_QWORD ***)this + 8));
  std::_Deallocate<16,0>(*((void **)this + 8), 0xB0uLL);
  CResource::~CResource(this);
}
