/*
 * XREFs of ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x18026473C
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180113E5C (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTeleme.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801F46CC (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ??$_Find@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@1@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180263698 (--$_Find@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_traits.c)
 *     ??$_Try_emplace@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@$$V@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802638AC (--$_Try_emplace@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@$$V@-$_Hash@V-.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180263FFC (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToIdle(InteractionSourceManager *a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  CManipulation **v6; // rsi
  __int64 v7; // rcx
  __int64 appended; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct InteractionLatencyTelemetry::IManipulationTelemetryData *TelemetryDataNoRef; // rax
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  CManipulation *v13; // [rsp+70h] [rbp+18h] BYREF

  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(v2 + 104);
      v5 = v4 + *(_QWORD *)(v2 + 112);
      while ( v4 != v5 )
      {
        v6 = (CManipulation **)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 8 * ((*((_QWORD *)a1 + 12) - 1LL) & (v4 >> 1)))
                              + 8 * (v4 & 1));
        CManipulation::SetCaptureState_RenderThread(*v6);
        v13 = *v6;
        appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)&v13, 8uLL);
        v9 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
               (__int64)a1 + 16,
               (__int64)v6,
               appended);
        if ( !(unsigned int)ReportInertia(
                              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 40LL) + 1704LL),
                              6LL,
                              0LL,
                              0LL,
                              0LL) )
          GetLastError();
        if ( dword_1803D0EB8 && tlgKeywordOn((__int64)&dword_1803D0EB8, 0x400000000002LL) )
        {
          v10 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Try_emplace<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &,>(
                  (_QWORD *)a1 + 2,
                  (__int64)v12,
                  v6);
          TelemetryDataNoRef = CInteraction::GetTelemetryDataNoRef(*(CInteraction **)(*(_QWORD *)(*(_QWORD *)v10 + 24LL)
                                                                                    + 40LL));
          if ( TelemetryDataNoRef )
            (*(void (__fastcall **)(struct InteractionLatencyTelemetry::IManipulationTelemetryData *, unsigned __int64))(*(_QWORD *)TelemetryDataNoRef + 32LL))(
              TelemetryDataNoRef,
              ((unsigned __int64)*v6 + 72) & -(__int64)(*v6 != 0LL));
        }
        ++v4;
      }
    }
    InteractionSourceManager::ClearActiveManipulations(a1);
  }
  InteractionSourceManager::ReconfigureAllManipulations(a1);
}
