/*
 * XREFs of ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x180039F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180027264 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall OneCoreUAPInputHost::DeferredInitializeStatic(_QWORD *a1, __int64 a2, struct _FILETIME *a3)
{
  int v4; // eax
  const char *v5; // r9
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v10);
  v4 = CoreUICreate(&v10);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v4,
      v8);
    __debugbreak();
  }
  v6 = InputProviderManager::InitializeHelper((__int64)(a1 + 7), a1[6], 1, v5);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)(unsigned int)v6,
      v8);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(void *, bool, struct _FILETIME *), _QWORD *))(*(_QWORD *)v10 + 248LL))(
    v10,
    OneCoreUAPInputHost::DeferredInitializeStatic,
    a1);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v10);
  return 0LL;
}
