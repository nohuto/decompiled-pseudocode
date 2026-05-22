/*
 * XREFs of ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C59E0
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D098C (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x18002E46C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D390 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180094F74 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C4300 (--$_Destroy_range@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrapp.c)
 *     ??$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAAPEAVHString@Wrappers@WRL@Microsoft@@QEAV2345@$$QEAV2345@@Z @ 0x1800C4344 (--$_Emplace_reallocate@VHString@Wrappers@WRL@Microsoft@@@-$vector@VHString@Wrappers@WRL@Microsof.c)
 *     ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800C6D38 (-_Tidy@-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall SpatialInteractionDevices::EnumerateDevices(LPGUID InterfaceClassGuid, __int64 a2)
{
  HSTRING *v4; // r13
  __int64 v5; // rdx
  int v6; // edi
  size_t v7; // rax
  WCHAR *v8; // rax
  WCHAR *v9; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  const struct std::nothrow_t *v11; // rdx
  DWORD v12; // eax
  const struct std::nothrow_t *v13; // rdx
  const struct std::nothrow_t *v14; // rdx
  const wchar_t *v15; // r15
  HSTRING *v16; // r14
  unsigned __int64 v17; // rax
  HSTRING v18; // rcx
  __int64 v19; // rax
  ULONG pulLen; // [rsp+30h] [rbp-58h] BYREF
  HSTRING string; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  HSTRING *v24; // [rsp+50h] [rbp-38h]
  void *v25; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(*(HSTRING **)a2, *(HSTRING **)(a2 + 8));
  *(_QWORD *)(a2 + 8) = *(_QWORD *)a2;
  v23 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    pulLen = 0;
    if ( CM_Get_Device_Interface_List_SizeW(&pulLen, InterfaceClassGuid, 0LL, 0) )
    {
      v5 = 619LL;
LABEL_6:
      v6 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
        (const char *)0x80070490LL);
      goto LABEL_35;
    }
    if ( pulLen <= 1 )
    {
      v5 = 620LL;
      goto LABEL_6;
    }
    v7 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v7 = -1LL;
    v8 = (WCHAR *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    v25 = v8;
    if ( !v8 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26F,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_35;
    }
    memset_0(v8, 0, 2LL * pulLen);
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(InterfaceClassGuid, 0LL, v9, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
      break;
    operator delete(v9, v11);
  }
  v12 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
  if ( v12 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           638LL,
           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
           (const char *)v12);
  }
  else
  {
    v15 = v9;
    v16 = (HSTRING *)*((_QWORD *)&v23 + 1);
    while ( 1 )
    {
      if ( !*v15 )
      {
        if ( (__int128 *)a2 != &v23 )
        {
          std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(a2);
          *(_QWORD *)a2 = v23;
          *(_QWORD *)(a2 + 8) = v16;
          *(_QWORD *)(a2 + 16) = v4;
          v23 = 0LL;
          v24 = 0LL;
        }
        if ( v9 )
          operator delete(v9, v13);
        v6 = 0;
        goto LABEL_35;
      }
      string = 0LL;
      v17 = -1LL;
      do
        ++v17;
      while ( v15[v17] );
      if ( v17 > 0xFFFFFFFF )
        break;
      v6 = Microsoft::WRL::Wrappers::HString::Set(&string, v15, v17);
      if ( v6 < 0 )
        goto LABEL_28;
      if ( v4 == v16 )
      {
        std::vector<Microsoft::WRL::Wrappers::HString>::_Emplace_reallocate<Microsoft::WRL::Wrappers::HString>(
          (__int64 *)&v23,
          (__int64)v16,
          &string);
        v4 = v24;
        v16 = (HSTRING *)*((_QWORD *)&v23 + 1);
        v18 = string;
      }
      else
      {
        *v16 = string;
        v18 = 0LL;
        string = 0LL;
        *((_QWORD *)&v23 + 1) = ++v16;
      }
      WindowsDeleteString(v18);
      v19 = -1LL;
      do
        ++v19;
      while ( v15[v19] );
      v15 += v19 + 1;
    }
    v6 = -2147024362;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)(unsigned int)v6);
    WindowsDeleteString(string);
    string = 0LL;
    if ( !v9 )
      goto LABEL_35;
  }
  operator delete(v9, v14);
LABEL_35:
  std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(&v23);
  return (unsigned int)v6;
}
