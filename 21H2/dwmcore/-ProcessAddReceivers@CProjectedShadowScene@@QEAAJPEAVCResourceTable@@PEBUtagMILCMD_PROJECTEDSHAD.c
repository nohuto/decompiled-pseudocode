/*
 * XREFs of ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x180237064
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAVCProjectedShadowScene@@@?$vector@PEAVCProjectedShadowScene@@V?$allocator@PEAVCProjectedShadowScene@@@std@@@std@@QEAAPEAPEAVCProjectedShadowScene@@QEAPEAV2@AEBQEAV2@@Z @ 0x180200E7C (--$_Emplace_reallocate@AEBQEAVCProjectedShadowScene@@@-$vector@PEAVCProjectedShadowScene@@V-$all.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235AD0 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ??$?0AEAPEAVCProjectedShadowReceiver@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x180235C30 (--$-0AEAPEAVCProjectedShadowReceiver@@@-$_List_node_emplace_op2@V-$allocator@U-$_List_node@URece.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@UReceiverEntry@CProjectedShadowScene@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180235FC8 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@UReceiverEntry@CProjectedShadowScene@@PEA.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18023642C (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  CProjectedShadowReceiver *v12; // rbx
  __int64 v13; // r15
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  CProjectedShadowReceiver *v16; // rbx
  const void **v17; // rcx
  _BYTE *v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-40h]
  CProjectedShadowReceiver *v22; // [rsp+90h] [rbp+18h] BYREF
  CProjectedShadowScene *v23; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)a3 + 2) )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, a4[v5]);
      v12 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              130LL) )
      {
        break;
      }
      v22 = v12;
      if ( !CProjectedShadowScene::FindReceiverEntry(this, v12) )
      {
        v13 = *((_QWORD *)this + 10);
        if ( *((_QWORD *)this + 11) == 0x222222222222222LL )
          std::_Xlength_error("list too long");
        std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>(
          &v20,
          (__int64)this + 80,
          (__int64 *)&v22);
        v14 = v21;
        ++*((_QWORD *)this + 11);
        v15 = *(_QWORD **)(v13 + 8);
        v21 = 0LL;
        *v14 = v13;
        v14[1] = v15;
        *(_QWORD *)(v13 + 8) = v14;
        *v15 = v14;
        std::_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CProjectedShadowScene::ReceiverEntry,void *>>>((__int64)&v20);
        v16 = v22;
        v23 = this;
        v17 = (const void **)((char *)v22 + 72);
        v18 = (_BYTE *)*((_QWORD *)v22 + 10);
        if ( v18 == *((_BYTE **)v22 + 11) )
        {
          std::vector<CProjectedShadowScene *>::_Emplace_reallocate<CProjectedShadowScene * const &>(v17, v18, &v23);
        }
        else
        {
          *(_QWORD *)v18 = this;
          v17[1] = (char *)v17[1] + 8;
        }
        CProjectedShadowReceiver::RequestRedraw(v16);
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2003303421, 0x4Cu);
  }
  return v4;
}
