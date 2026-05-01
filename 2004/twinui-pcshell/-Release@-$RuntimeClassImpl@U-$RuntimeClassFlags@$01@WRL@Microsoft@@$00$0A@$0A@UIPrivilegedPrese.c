/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedPresentationOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007FC30
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F3F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProvi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800FEC10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1800FEC10.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800FEC20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1800FEC20.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800FEC30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1800FEC30.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18022AFA4 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x18042D5DC (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800922B0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedPresentationOperations,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
