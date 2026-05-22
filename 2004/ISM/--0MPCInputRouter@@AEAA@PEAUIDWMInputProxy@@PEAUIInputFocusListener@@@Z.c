/*
 * XREFs of ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x1800237F4
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F40C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180025678 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@1@@Z @ 0x180025B30 (--0-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
MPCInputRouter *__fastcall MPCInputRouter::MPCInputRouter(
        MPCInputRouter *this,
        struct IDWMInputProxy *a2,
        struct IInputFocusListener *a3)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+48h] [rbp+20h] BYREF
  int v9; // [rsp+4Ch] [rbp+24h]

  DWMInputRouter::DWMInputRouter(this, a2, a3);
  *(_QWORD *)this = &MPCInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &MPCInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &MPCInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &MPCInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &MPCInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &MPCInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &MPCInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 7) = &MPCInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 8) = &MPCInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 96) = &MPCInputRouter::`vftable'{for `IMPCInputRouter'};
  *((_QWORD *)this + 97) = &MPCInputRouter::`vftable'{for `IMPCExclusiveModeStateManager'};
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *(_OWORD *)((char *)this + 824) = 0LL;
  *(_OWORD *)((char *)this + 840) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  *((_BYTE *)this + 864) = 0;
  *((_DWORD *)this + 217) = 0;
  *((_BYTE *)this + 872) = 0;
  *((_DWORD *)this + 219) = 0;
  *((_QWORD *)this + 110) = 0LL;
  *((_BYTE *)this + 888) = 0;
  *((_DWORD *)this + 223) = 0;
  *((_QWORD *)this + 112) = 0LL;
  v9 = ((unsigned __int64)this + 904) >> 32;
  v8 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>(
    (char *)this + 904,
    &v8);
  *((_QWORD *)this + 121) = 0LL;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 968);
  v4 = CoreUICreate((char *)this + 968);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v4,
      v6);
    JUMPOUT(0x18005870ELL);
  }
  return this;
}
