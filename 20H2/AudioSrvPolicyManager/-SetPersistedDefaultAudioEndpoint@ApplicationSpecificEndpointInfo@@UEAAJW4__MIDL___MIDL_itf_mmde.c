/*
 * XREFs of ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180030E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180031A54 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180031C0C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800325C0 (-SendRefreshEndpointNotification@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdev.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x1800326F4 (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x1800327E8 (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800330EC (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::SetPersistedDefaultAudioEndpoint(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4)
{
  ApplicationSpecificEndpointInfo *v4; // rbx
  unsigned int v8; // eax
  unsigned int v9; // esi
  char v10; // r13
  int AppKey; // eax
  __int64 v12; // rdx
  int PersistentId; // eax
  ApplicationSpecificEndpointInfo *v14; // rcx
  void *v15; // rbx
  __int64 v16; // rdx
  ApplicationSpecificEndpointInfo *v17; // rcx
  int refreshed; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-49h]
  HKEY hKey; // [rsp+30h] [rbp-39h] BYREF
  struct IMMDevice *v23; // [rsp+38h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  ApplicationSpecificEndpointInfo *v25; // [rsp+48h] [rbp-21h]
  WCHAR ValueName[12]; // [rsp+50h] [rbp-19h] BYREF
  WCHAR Buffer[12]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a1;
  v25 = a1;
  v8 = RpcImpersonateClient(0LL);
  if ( v8 )
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           (void *)0x71,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           (const char *)v8);
  hKey = 0LL;
  v10 = 1;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(v4, 0x2001Fu, 1, &hKey);
  v9 = AppKey;
  if ( AppKey >= 0 )
  {
    AppKey = StringCbPrintfW(ValueName, 0x14uLL, L"%03d_%03d", a3, a2);
    v9 = AppKey;
    if ( AppKey < 0 )
    {
      v12 = 121LL;
      goto LABEL_9;
    }
    LODWORD(v21) = a2;
    AppKey = StringCbPrintfW(Buffer, 0x18uLL, L"%03d_%03d_p", a3, v21);
    v9 = AppKey;
    if ( AppKey < 0 )
    {
      v12 = 128LL;
      goto LABEL_9;
    }
    if ( a4 )
    {
      v23 = 0LL;
      if ( (int)mmdDevGetMMDeviceFromInterfaceId(a4, &v23) < 0 )
      {
        v9 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)0x80070057LL);
LABEL_21:
        if ( v23 )
          ((void (__fastcall *)(struct IMMDevice *))v23->lpVtbl->Release)(v23);
LABEL_34:
        if ( !v10 )
          goto LABEL_36;
        goto LABEL_35;
      }
      pv = 0LL;
      PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v23, (unsigned __int16 **)&pv);
      v15 = pv;
      v9 = PersistentId;
      if ( PersistentId < 0 )
      {
        v16 = 142LL;
        goto LABEL_19;
      }
      PersistentId = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(
                       v14,
                       hKey,
                       Buffer,
                       (const unsigned __int16 *)pv);
      v9 = PersistentId;
      if ( PersistentId < 0 )
      {
        v16 = 143LL;
        goto LABEL_19;
      }
      PersistentId = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v17, hKey, ValueName, a4);
      v9 = PersistentId;
      if ( PersistentId < 0 )
      {
        v16 = 146LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)PersistentId);
        if ( v15 )
          CoTaskMemFree(v15);
        goto LABEL_21;
      }
      if ( v15 )
        CoTaskMemFree(v15);
      if ( v23 )
        ((void (__fastcall *)(struct IMMDevice *))v23->lpVtbl->Release)(v23);
      v4 = v25;
    }
    else
    {
      RegDeleteValueW(hKey, ValueName);
      RegDeleteValueW(hKey, Buffer);
      refreshed = ApplicationSpecificEndpointInfo::SendRefreshEndpointNotification(v4, a2, a3);
      v9 = refreshed;
      if ( refreshed < 0 )
      {
        v19 = 155LL;
        goto LABEL_30;
      }
    }
    v10 = 0;
    RpcRevertToSelf();
    refreshed = ApplicationSpecificEndpointInfo::UpdateState(v4, a3, a2, a4);
    v9 = refreshed;
    if ( refreshed >= 0 )
    {
      v9 = 0;
      goto LABEL_34;
    }
    v19 = 162LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)refreshed);
    goto LABEL_34;
  }
  v12 = 117LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)AppKey);
LABEL_35:
  RpcRevertToSelf();
LABEL_36:
  if ( hKey )
    RegCloseKey(hKey);
  return v9;
}
