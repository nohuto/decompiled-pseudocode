/*
 * XREFs of ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x18000F638
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x18000EA6C (-FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000ECE4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ??$_Insert@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UCasterEntry@CProjectedShadowScene@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAVCProjectedShadowCaster@@@Z @ 0x18000F71C (--$_Insert@AEAPEAVCProjectedShadowCaster@@@-$list@UCasterEntry@CProjectedShadowScene@@V-$allocat.c)
 *     ??$_Emplace_reallocate@AEBU_LUID@@@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LUID@@QEAU2@AEBU2@@Z @ 0x18001DD78 (--$_Emplace_reallocate@AEBU_LUID@@@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@QEAAPEAU_LU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A3DC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAddCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS *a3,
        _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  struct CResource *ResourceWithoutType; // rax
  unsigned int v11; // ecx
  const struct CProjectedShadowCaster *v12; // r14
  char *v13; // rcx
  _QWORD *v14; // rdx
  const struct CProjectedShadowCaster *v16; // [rsp+70h] [rbp+18h] BYREF
  CProjectedShadowScene *v17; // [rsp+78h] [rbp+20h] BYREF

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
      v16 = v12;
      if ( !CProjectedShadowScene::FindCasterEntry(this, v12) )
      {
        std::list<CProjectedShadowScene::CasterEntry>::_Insert<CProjectedShadowCaster * &>(
          (char *)this + 56,
          *((_QWORD *)this + 7),
          &v16);
        v13 = (char *)v16 + 88;
        v17 = this;
        v14 = (_QWORD *)*((_QWORD *)v16 + 12);
        if ( *((_QWORD **)v16 + 13) == v14 )
        {
          std::vector<_LUID>::_Emplace_reallocate<_LUID const &>(v13, v14, &v17);
        }
        else
        {
          *v14 = this;
          *((_QWORD *)v13 + 1) += 8LL;
        }
        CProjectedShadowScene::RequestRedrawAll(this);
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *((_DWORD *)a3 + 2) )
        return v4;
    }
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x2Au, 0LL);
  }
  return v4;
}
