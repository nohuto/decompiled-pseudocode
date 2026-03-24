/*
 * XREFs of ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180213AC4
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CA3A0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025B70 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C8390 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801CCDC0 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801CCE80 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x180212E78 (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x1802136F0 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180213F40 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180214934 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall InteractionSourceManager::OnManipulationChanged(__int64 a1, int a2, const struct CManipulation *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  const struct CManipulation *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *v11; // rsi
  int v12; // r11d
  _BYTE *v13; // rbx
  int v14; // r11d
  bool v15; // dl
  struct CManipulation *v16; // rdx
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 == 1
          && CInteractionTracker::AreInteractionAnimationsAlive(*(CInteractionTracker **)(*(_QWORD *)(a1 + 8) + 16LL)) )
        {
          if ( InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, v8) )
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 272LL) + 416LL) |= 4u;
        }
      }
      else
      {
        wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
          &v18,
          (__int64)a3);
        std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::lower_bound(
          a1 + 16,
          v17,
          &v18);
        v10 = v17[0];
        if ( v17[0] == *(_QWORD *)(a1 + 24) )
        {
          std::_Xout_of_range("invalid unordered_map<K, T> key");
          __debugbreak();
        }
        v11 = *(_BYTE **)(v10 + 24);
        v12 = 0;
        v13 = v11;
        do
        {
          v15 = CInteractionTracker::ShouldChainForAxis(v9, v12, (__int64)a3, 1u)
             && CInteractionTracker::ShouldChainAllForAxis(v9, v14, (__int64)a3);
          LOBYTE(v9) = *v13;
          if ( (*v13 & 1) != v15 )
          {
            LOBYTE(v9) = v15 | v9 & 0xFE;
            *v13 = v9;
            v11[36] |= 1u;
          }
          v12 = v14 + 1;
          v13 += 12;
        }
        while ( v12 < 3 );
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      }
    }
    else if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 168LL) )
    {
      InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)a1);
    }
  }
  else
  {
    if ( !InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, a3) )
      InteractionSourceManager::AddActiveManipulation((InteractionSourceManager *)a1, v16);
    *(_BYTE *)(a1 + 120) = 1;
  }
}
