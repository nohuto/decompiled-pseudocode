/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x1800159F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18001767C (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800184C4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001D884 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x18001E23C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, char a2)
{
  struct _TP_TIMER *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CApplication::`vftable';
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 33);
  if ( v4 )
  {
    WaitForThreadpoolTimerCallbacks(v4, 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 33));
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  CApplication::CleanupDelayedInteractivityNotification(this);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>,void *>>>(
    (char *)this + 648,
    (char *)this + 648,
    *(_QWORD *)(*((_QWORD *)this + 81) + 8LL));
  operator delete(*((void **)this + 81), (const struct std::nothrow_t *)0x48);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 120);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    CoTaskMemFree(v5);
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
