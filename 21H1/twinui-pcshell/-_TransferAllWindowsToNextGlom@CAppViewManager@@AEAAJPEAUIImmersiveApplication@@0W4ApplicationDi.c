/*
 * XREFs of ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x18014E87C
 * Callers:
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x1801449B0 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::Invoke @ 0x180146E80 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180146E80.c)
 *     ?OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z @ 0x1801477A0 (-OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x18014E960 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlom(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int GlomWorker; // edi
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  GlomWorker = v9(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v12);
  if ( GlomWorker >= 0 )
    GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(a1, v12, a3, a4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)GlomWorker;
}
