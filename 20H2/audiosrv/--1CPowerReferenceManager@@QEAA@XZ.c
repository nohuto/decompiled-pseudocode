/*
 * XREFs of ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B7C08
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180062A80 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x18006930C (--1-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@std@@.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BA740 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800459E4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180064FFC (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800650E4 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800EEAD4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@std@@@s.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@1@@Z @ 0x1800EEB30 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1800EEB30.c)
 *     ?CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ @ 0x1800EF624 (-CancelDeferredSebReferenceRelease@CSebNotifier@@AEAAXXZ.c)
 */

void __fastcall CPowerReferenceManager::~CPowerReferenceManager(CPowerReferenceManager *this)
{
  char *v1; // rdi
  int v3; // eax
  void *v4; // rcx

  v1 = (char *)this + 312;
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 312));
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,APPLICATION_REF_DATA>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,APPLICATION_REF_DATA>,void *>>>(
    v1 + 80,
    v1 + 80,
    *(_QWORD *)(*((_QWORD *)v1 + 10) + 8LL));
  std::_Deallocate<16,0>(*((void **)v1 + 10), (const struct std::nothrow_t *)0x30);
  _Mtx_destroy_in_situ((_Mtx_t)v1);
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 216));
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,ENDPOINT_REF_DATA>,void *>>>(
    (char *)this + 296,
    (char *)this + 296,
    *(_QWORD *)(*((_QWORD *)this + 37) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 37), (const struct std::nothrow_t *)0x48);
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 216));
  if ( *((_QWORD *)this + 26) )
  {
    CSebNotifier::CancelDeferredSebReferenceRelease((CPowerReferenceManager *)((char *)this + 112));
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
  }
  CSebNotifier::PublishSebEvent((CPowerReferenceManager *)((char *)this + 112), 0);
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 120));
  if ( *(_QWORD *)this )
  {
    v3 = Pdcv2ActivationClientUnregister() | 0x10000000;
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v3);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 32));
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 3) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
