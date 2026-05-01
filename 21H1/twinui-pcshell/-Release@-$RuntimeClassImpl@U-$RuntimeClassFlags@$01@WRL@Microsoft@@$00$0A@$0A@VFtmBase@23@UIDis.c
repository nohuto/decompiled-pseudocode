/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIDiscoverRecentItem@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076E00
 * Callers:
 *     ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180083A6C (-s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameWrapper@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800CADA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApp.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D2310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBr.c)
 *     ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1801F04DC (--$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveSh.c)
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1801F0CC0 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x18028DDCC (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IDiscoverRecentItem>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
