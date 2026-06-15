/*
 * XREFs of ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180038190
 * Callers:
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180036A10 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000FCC0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180037314 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x1800374CC (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180037A20 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180037FB4 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x1800380A8 (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800389AC (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  int v8; // eax
  int Key; // r14d
  HKEY v10; // rsi
  unsigned int v11; // eax
  int AppKey; // eax
  HRESULT v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edi
  int v17; // eax
  int PersistentId; // eax
  WCHAR *v19; // rbx
  LPVOID v20; // rax
  __int64 v22; // rdx
  int v23; // eax
  HKEY v24; // rdi
  int updated; // eax
  ApplicationSpecificEndpointInfo *v26; // rcx
  __int64 v27; // rdx
  LPVOID *ppv; // [rsp+20h] [rbp-89h]
  unsigned int v30; // [rsp+30h] [rbp-79h] BYREF
  struct IMMDevice *v31; // [rsp+38h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-69h] BYREF
  __int64 v33; // [rsp+48h] [rbp-61h] BYREF
  LPVOID v34; // [rsp+50h] [rbp-59h] BYREF
  char v35; // [rsp+59h] [rbp-50h]
  _QWORD *v36; // [rsp+60h] [rbp-49h]
  PCNZWCH lpString2; // [rsp+68h] [rbp-41h] BYREF
  HKEY hkey; // [rsp+70h] [rbp-39h] BYREF
  PCNZWCH lpString1; // [rsp+78h] [rbp-31h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-29h] BYREF
  wchar_t v41[12]; // [rsp+88h] [rbp-21h] BYREF
  wchar_t Buffer[12]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = a4;
  v36 = a4;
  *a4 = 0LL;
  lpString2 = 0LL;
  pv = 0LL;
  v8 = StringCbPrintfW(Buffer, 0x18uLL, L"%03d_%03d_p", a3, a2);
  Key = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x373,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_32;
  }
  v10 = 0LL;
  v11 = RpcImpersonateClient(0LL);
  if ( v11 )
  {
    Key = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x377,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)v11);
    goto LABEL_30;
  }
  v35 = 1;
  hkey = 0LL;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x20019u, 0, &hkey);
  v10 = hkey;
  if ( AppKey < 0 )
  {
LABEL_28:
    v20 = pv;
    pv = 0LL;
    *v4 = v20;
    Key = 0;
    goto LABEL_29;
  }
  Key = ApplicationSpecificEndpointInfo::ReadKey(hkey, Buffer, (unsigned __int16 **)&lpString2);
  if ( Key >= 0 )
  {
    v34 = 0LL;
    v13 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &v34);
    Key = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x380,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v13);
LABEL_63:
      if ( v34 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v34 + 16LL))(v34);
      goto LABEL_29;
    }
    v33 = 0LL;
    v14 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v34 + 24LL))(v34, a2, 1LL, &v33);
    Key = v14;
    if ( v14 < 0 )
    {
      v15 = 899LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v14);
LABEL_61:
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      goto LABEL_63;
    }
    v30 = 0;
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v30);
    Key = v14;
    if ( v14 < 0 )
    {
      v15 = 902LL;
      goto LABEL_13;
    }
    v16 = 0;
    if ( v30 )
    {
      while ( 1 )
      {
        v31 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v33 + 32LL))(v33, v16, &v31);
        Key = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x38B,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)v17);
          goto LABEL_59;
        }
        lpString1 = 0LL;
        PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v31, (unsigned __int16 **)&lpString1);
        Key = PersistentId;
        v19 = (WCHAR *)lpString1;
        if ( PersistentId < 0 )
        {
          v22 = 910LL;
          goto LABEL_55;
        }
        if ( CompareStringW(0x7Fu, 1u, lpString1, -1, lpString2, -1) == 2 )
          break;
        if ( v19 )
          CoTaskMemFree(v19);
        if ( v31 )
          ((void (__fastcall *)(struct IMMDevice *))v31->lpVtbl->Release)(v31);
        if ( ++v16 >= v30 )
          goto LABEL_23;
      }
      PersistentId = mmdDevGetInterfaceIdFromMMDevice(v31, &pv);
      Key = PersistentId;
      if ( PersistentId < 0 )
      {
        v22 = 915LL;
LABEL_55:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)PersistentId);
        goto LABEL_56;
      }
      hKey = 0LL;
      v23 = ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x2001Fu, 0, &hKey);
      v24 = hKey;
      if ( v23 >= 0 )
      {
        LODWORD(ppv) = a2;
        updated = StringCbPrintfW(v41, 0x14uLL, L"%03d_%03d", a3, ppv);
        Key = updated;
        if ( updated < 0 )
        {
          v27 = 924LL;
          goto LABEL_46;
        }
        updated = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v26, v24, v41, (const BYTE *)pv);
        Key = updated;
        if ( updated < 0 )
        {
          v27 = 927LL;
          goto LABEL_46;
        }
      }
      updated = ApplicationSpecificEndpointInfo::UpdateState((__int64)a1, a3, a2, (const unsigned __int16 *)pv);
      Key = updated;
      if ( updated >= 0 )
      {
        if ( v24 )
          RegCloseKey(v24);
        if ( v19 )
          CoTaskMemFree(v19);
        if ( v31 )
          ((void (__fastcall *)(struct IMMDevice *))v31->lpVtbl->Release)(v31);
LABEL_23:
        v4 = v36;
        goto LABEL_24;
      }
      v27 = 931LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)updated);
      if ( v24 )
        RegCloseKey(v24);
LABEL_56:
      if ( v19 )
        CoTaskMemFree(v19);
LABEL_59:
      if ( v31 )
        ((void (__fastcall *)(struct IMMDevice *))v31->lpVtbl->Release)(v31);
      goto LABEL_61;
    }
LABEL_24:
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    if ( v34 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v34 + 16LL))(v34);
    goto LABEL_28;
  }
LABEL_29:
  RpcRevertToSelf();
LABEL_30:
  if ( v10 )
    RegCloseKey(v10);
LABEL_32:
  if ( pv )
    CoTaskMemFree(pv);
  if ( lpString2 )
    CoTaskMemFree((LPVOID)lpString2);
  return (unsigned int)Key;
}
