/*
 * XREFs of ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x18023629C
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x18023603C (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x180237200 (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x180235D2C (--$_Free_non_head@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@st.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180236374 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 */

void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  char *v2; // rdi
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rsi
  CProjectedShadowScene **v6; // r8
  CProjectedShadowScene **j; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  char v12; // [rsp+20h] [rbp-18h] BYREF

  CProjectedShadowScene::ClearShadows(this, 0);
  v2 = (char *)this + 80;
  v3 = (_QWORD *)*((_QWORD *)this + 10);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[2];
    v6 = *(CProjectedShadowScene ***)(v5 + 80);
    for ( j = *(CProjectedShadowScene ***)(v5 + 72); j != v6; ++j )
    {
      if ( *j == this )
      {
        memmove_0(j, j + 1, (char *)v6 - (char *)(j + 1));
        *(_QWORD *)(v5 + 80) -= 8LL;
        break;
      }
    }
  }
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  *v9 = v9;
  v9[1] = v9;
  if ( v2 != &v12 )
  {
    v10 = *(_QWORD **)v2;
    *((_QWORD *)this + 11) = 0LL;
    *(_QWORD *)v2 = v9;
    v9 = v10;
  }
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v8,
    (__int64)v9);
  *v9 = v9;
  v9[1] = v9;
  std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
    v11,
    (__int64)v9);
  std::_Deallocate<16,0>(v9, 0x78uLL);
}
