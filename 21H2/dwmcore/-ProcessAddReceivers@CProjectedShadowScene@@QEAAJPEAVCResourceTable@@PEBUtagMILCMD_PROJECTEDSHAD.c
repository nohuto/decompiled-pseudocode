/*
 * XREFs of ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x18000DBF0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18000C188 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000CE14 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ??$_Insert@AEAPEAVCProjectedShadowReceiver@@@?$list@UReceiverEntry@CProjectedShadowScene@@V?$allocator@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UReceiverEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowReceiver@@@Z @ 0x18000DCD8 (--$_Insert@AEAPEAVCProjectedShadowReceiver@@@-$list@UReceiverEntry@CProjectedShadowScene@@V-$all.c)
 *     ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x18001C6B4 (--$_Emplace_reallocate@AEBU_LUID@@@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A0B90 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // ecx
  CProjectedShadowReceiver *v12; // rsi
  CProjectedShadowReceiver *v13; // rsi
  char *v14; // rcx
  _QWORD *v15; // rdx
  CProjectedShadowReceiver *v17; // [rsp+70h] [rbp+18h] BYREF
  CProjectedShadowScene *v18; // [rsp+78h] [rbp+20h] BYREF

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
              131LL) )
      {
        break;
      }
      v17 = v12;
      if ( !CProjectedShadowScene::FindReceiverEntry(this, v12) )
      {
        std::list<CProjectedShadowScene::ReceiverEntry>::_Insert<CProjectedShadowReceiver * &>(
          (char *)this + 72,
          *((_QWORD *)this + 9),
          &v17);
        v13 = v17;
        v18 = this;
        v14 = (char *)v17 + 64;
        v15 = (_QWORD *)*((_QWORD *)v17 + 9);
        if ( *((_QWORD **)v17 + 10) == v15 )
        {
          std::vector<_LUID>::_Emplace_reallocate<_LUID const &>(v14, v15, &v18);
        }
        else
        {
          *v15 = this;
          *((_QWORD *)v14 + 1) += 8LL;
        }
        CProjectedShadowReceiver::RequestRedraw(v13);
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x4Cu, 0LL);
  }
  return v4;
}
