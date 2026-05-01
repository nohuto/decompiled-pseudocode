/*
 * XREFs of ??0SwitchItemListViewModelArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18030F3D8
 * Callers:
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemDataView@Multitasking@5Internal@Windows@@@Z @ 0x180310484 (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800914E0 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EBC80 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x1802EE60C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModelArgs::SwitchItemListViewModelArgs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // [rsp+20h] [rbp-10h] BYREF
  int v11; // [rsp+28h] [rbp-8h]
  int v12; // [rsp+2Ch] [rbp-4h]
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+38h]
  __int64 v15; // [rsp+70h] [rbp+40h]

  v10 = 53LL;
  v11 = 192;
  v12 = 1174405120;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SwitchItemListViewModelArgs",
                                (struct Platform::Guid *)&v10,
                                (void **)&v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v13);
  v14 = v5;
  v6 = __abi_winrt_cast_to(
         1,
         v5,
         (__int64)&_uuidof__AVSwitchItemListViewModelArgs_Switcher_Experiences_ComposableShell_WindowsInternal__);
  v15 = v6;
  v7 = __abi_winrt_ptr_ctor(v6);
  v15 = v7;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
  v8 = __abi_winrt_ptr_ctor(v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v8;
}
