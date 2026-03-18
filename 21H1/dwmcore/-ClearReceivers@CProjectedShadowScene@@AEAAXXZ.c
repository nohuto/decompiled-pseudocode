/*
 * XREFs of ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x18000B460
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x18000CA34 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801E8A18 (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 * Callees:
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x18000B134 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x18000B53C (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  char *v2; // rdi
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  CProjectedShadowScene **v10; // r8
  CProjectedShadowScene **j; // rcx
  char v12; // [rsp+20h] [rbp-18h] BYREF

  CProjectedShadowScene::ClearShadows(this, 0);
  v2 = (char *)this + 72;
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v9 = i[2];
    v10 = *(CProjectedShadowScene ***)(v9 + 72);
    for ( j = *(CProjectedShadowScene ***)(v9 + 64); j != v10 && *j != this; ++j )
      ;
    if ( j != v10 )
    {
      memmove_0(j, j + 1, (char *)v10 - (char *)(j + 1));
      *(_QWORD *)(v9 + 72) -= 8LL;
    }
  }
  v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  *v6 = v6;
  v6[1] = v6;
  if ( v2 != &v12 )
  {
    v7 = *(_QWORD **)v2;
    *((_QWORD *)this + 10) = 0LL;
    *(_QWORD *)v2 = v6;
    v6 = v7;
  }
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v5,
    v6);
  *v6 = v6;
  v6[1] = v6;
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v8,
    v6);
  std::_Deallocate<16,0>(v6, 120LL);
}
