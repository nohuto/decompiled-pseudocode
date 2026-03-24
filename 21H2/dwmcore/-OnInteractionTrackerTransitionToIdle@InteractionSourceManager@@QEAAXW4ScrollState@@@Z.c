/*
 * XREFs of ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18021380C
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CCACC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x1801C63C4 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801C9EE4 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801D4C34 (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180212AF8 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$com_ptr_t@VCManipulation@@Uerr_returnco.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1802130C0 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180214934 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToIdle(InteractionSourceManager *a1)
{
  int v2; // r10d
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  CManipulation **v5; // r14
  __int64 v6; // r8
  __int64 v7; // rax
  struct IManipulationTelemetryData *TelemetryDataNoRef; // rax
  CManipulation **v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    if ( v2 == 2 )
    {
      v3 = *((_QWORD *)a1 + 13);
      v4 = v3 + *((_QWORD *)a1 + 14);
      while ( v3 != v4 )
      {
        v5 = (CManipulation **)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 8 * ((*((_QWORD *)a1 + 12) - 1LL) & (v3 >> 1)))
                              + 8 * (v3 & 1));
        CManipulation::SetCaptureState_RenderThread(*v5);
        std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::lower_bound(
          (char *)a1 + 16,
          &v12,
          v5);
        if ( !(unsigned int)ReportInertia(
                              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 40LL) + 1696LL),
                              6LL,
                              0LL,
                              0LL,
                              0LL) )
          GetLastError();
        std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::lower_bound(
          (char *)a1 + 16,
          &v13,
          v5);
        v7 = v13;
        if ( v13 == *((_QWORD *)a1 + 3) )
        {
          v9 = v5;
          std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>,std::tuple<>>(
            (__int64)a1 + 16,
            (__int64)&v10,
            v6,
            (__int64 **)&v9);
          v7 = v10;
        }
        else
        {
          v10 = v13;
          v11 = 0;
        }
        TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(*(CInteraction **)(*(_QWORD *)(v7 + 24) + 40LL));
        if ( TelemetryDataNoRef )
          (*(void (__fastcall **)(struct IManipulationTelemetryData *, unsigned __int64))(*(_QWORD *)TelemetryDataNoRef
                                                                                        + 32LL))(
            TelemetryDataNoRef,
            ((unsigned __int64)*v5 + 64) & -(__int64)(*v5 != 0LL));
        ++v3;
      }
    }
    InteractionSourceManager::ClearActiveManipulations(a1);
  }
  InteractionSourceManager::ReconfigureAllManipulations(a1);
}
