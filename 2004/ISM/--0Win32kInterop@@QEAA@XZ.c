/*
 * XREFs of ??0Win32kInterop@@QEAA@XZ @ 0x1800235AC
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180021DBC (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180023768 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@1@@Z @ 0x180024D38 (--0-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_KU-$hash@_K@std@@U.c)
 *     ??0?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_K_K@std@@@1@@Z @ 0x180025A88 (--0-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$all.c)
 *     ??0?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x18002AD88 (--0-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_t.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18003D31C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAA@PEBD@Z @ 0x180041194 (--0-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAA@PEBD@Z @ 0x1800411C0 (--0-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAA@PEBD@Z @ 0x1800411EC (--0-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041218 (--0-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAA@PEBD@Z @ 0x18004123C (--0-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041268 (--0-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAA@PEBD@Z @ 0x180041294 (--0-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAA@PEBD@Z.c)
 *     ??0?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAA@PEBD@Z @ 0x1800412C0 (--0-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAA@PEBD@Z.c)
 */

// Hidden C++ exception states: #wind=12
Win32kInterop *__fastcall Win32kInterop::Win32kInterop(Win32kInterop *this)
{
  char *v2; // rcx
  char *v4; // [rsp+58h] [rbp+10h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &Win32kInterop::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &Win32kInterop::`vftable'{for `IInputBuffer'};
  *((_QWORD *)this + 2) = &Win32kInterop::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v2 = (char *)this + 64;
  HIDWORD(v4) = HIDWORD(v2);
  LODWORD(v4) = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>(
    v2,
    &v4);
  v4 = (char *)this + 128;
  v5 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator *>>,0>>(
    (char *)this + 128,
    &v5);
  v4 = (char *)this + 192;
  v6 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>(
    (char *)this + 192,
    &v6);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((char *)this + 272, 360LL);
  *((_WORD *)this + 140) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 344,
    8uLL,
    8uLL,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = "CMK:MITInputInterop";
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>(
    (char *)this + 544,
    "CMK:MTInputInterop");
  KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>::KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>((char *)this + 680);
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>((char *)this + 816);
  KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>((char *)this + 952);
  KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>((char *)this + 1088);
  KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>((char *)this + 1224);
  KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>((char *)this + 1360);
  KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>((char *)this + 1496);
  *((_BYTE *)this + 1632) = 0;
  return this;
}
