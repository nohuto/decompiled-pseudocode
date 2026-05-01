/*
 * XREFs of ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x1802EF4FC
 * Callers:
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1802EF640 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800914E0 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Platform@@PEAPE$AAV67@@Z @ 0x1802F01FC (-CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Pl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Application::Application(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdi
  _DWORD v10[4]; // [rsp+20h] [rbp-10h] BYREF
  void *v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h]

  v10[0] = -1816403103;
  v10[1] = 1323548250;
  v10[2] = 295019444;
  v10[3] = -1988441715;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Application",
                                (struct Platform::Guid *)v10,
                                &v11,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  Instance = Windows::UI::Xaml::IApplicationFactory::CreateInstance(v11, a1, (a1 + 48) & -(__int64)(a1 != 0));
  v12 = Instance;
  v7 = __abi_winrt_ptr_ctor(Instance);
  v12 = v7;
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
  if ( a1 )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    return 0LL;
  }
  else
  {
    v8 = __abi_winrt_ptr_ctor(v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    return v8;
  }
}
