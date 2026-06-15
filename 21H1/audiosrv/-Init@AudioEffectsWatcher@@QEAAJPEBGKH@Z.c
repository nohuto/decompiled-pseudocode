/*
 * XREFs of ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800C5CF0
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800C5B3C (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800C6220 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D7D1C (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioEffectsWatcher::Init(char *pv, const unsigned __int16 *a2, int a3, int a4)
{
  int PropertyStoreProperty; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  char *v11; // rax
  signed int LastError; // eax
  int v13; // ebx
  HANDLE EventW; // rax
  PTP_WAIT ThreadpoolWait; // rax
  LONG lVal; // eax
  CEndpointCharacteristics *v18; // [rsp+40h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-31h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-29h] BYREF
  __int64 v21; // [rsp+68h] [rbp-11h] BYREF
  __int128 v22; // [rsp+70h] [rbp-9h]
  __int128 v23; // [rsp+80h] [rbp+7h] BYREF

  PropertyStoreProperty = 0;
  SecurityDescriptor = 0LL;
  v18 = 0LL;
  v22 = *(_OWORD *)(pv + 8);
  v23 = v22;
  EtwEventActivityIdControl(4LL, &v23);
  memset(&pvar, 0, sizeof(pvar));
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  *((_QWORD *)pv + 3) = 0LL;
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    PropertyStoreProperty = -2147024362;
    goto LABEL_28;
  }
  if ( is_mul_ok(v10, 2uLL) )
  {
    v11 = (char *)CoTaskMemAlloc(2 * v10);
    *((_QWORD *)pv + 3) = v11;
    if ( !v11 )
    {
      PropertyStoreProperty = -2147024882;
      goto LABEL_28;
    }
    StringCchCopyNExW(v11, v9 + 1, a2, v9);
  }
  else
  {
    PropertyStoreProperty = -2147024362;
  }
  if ( PropertyStoreProperty >= 0 )
  {
    *((_DWORD *)pv + 8) = a3;
    *((_DWORD *)pv + 9) = a4;
    PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, char *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                                + 40LL))(
                              *(_QWORD *)&g_DeviceEnumerator,
                              a2,
                              pv + 56);
    if ( PropertyStoreProperty >= 0 )
    {
      if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
              L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-11"
               "59816984-2199008581-497492991)",
              1u,
              &SecurityDescriptor,
              0LL) )
        goto LABEL_11;
      v13 = NtCreateWnfStateName(&v21, 3LL, 0LL);
      if ( v13 < 0 )
      {
LABEL_14:
        PropertyStoreProperty = v13 | 0x10000000;
        goto LABEL_28;
      }
      *(_QWORD *)(pv + 92) = v21;
      pv[88] = 1;
      PropertyStoreProperty = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                                g_pEndpointCharacteristicsCache,
                                *((_QWORD *)pv + 3),
                                0LL,
                                0LL,
                                &v18);
      if ( PropertyStoreProperty < 0 )
        goto LABEL_28;
      if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v18, 0) )
      {
        EventW = CreateEventW(0LL, 0, 0, 0LL);
        *((_QWORD *)pv + 25) = EventW;
        if ( !EventW
          || (ThreadpoolWait = CreateThreadpoolWait(
                                 (PTP_WAIT_CALLBACK)AudioEffectsWatcher::EffectsChangedWaitCallback,
                                 pv,
                                 0LL),
              (*((_QWORD *)pv + 26) = ThreadpoolWait) == 0LL) )
        {
LABEL_11:
          LastError = GetLastError();
          PropertyStoreProperty = LastError;
          if ( LastError > 0 )
            PropertyStoreProperty = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_28;
        }
        PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)&g_DeviceEnumerator + 48LL))(
                                  *(_QWORD *)&g_DeviceEnumerator,
                                  pv);
        if ( PropertyStoreProperty < 0 )
          goto LABEL_28;
        pv[64] = 1;
        PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(
                                  *((const unsigned __int16 **)pv + 3),
                                  1,
                                  &PKEY_AudioEndpoint_Disable_SysFx,
                                  &pvar);
        if ( PropertyStoreProperty < 0 )
          goto LABEL_28;
        lVal = 0;
        if ( pvar.vt == 19 )
          lVal = pvar.lVal;
        *((_DWORD *)pv + 17) = lVal;
        AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos((AudioEffectsWatcher *)pv);
        SetThreadpoolWait(*((PTP_WAIT *)pv + 26), *((HANDLE *)pv + 25), 0LL);
      }
      else
      {
        v13 = RtlPublishWnfStateData(*(_QWORD *)(pv + 92), 0LL, &unk_18016F658, 16LL, 0LL);
        if ( v13 < 0 )
          goto LABEL_14;
      }
      PropertyStoreProperty = 0;
    }
  }
LABEL_28:
  if ( v18 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v18 + 16LL))(v18);
  LocalFree(SecurityDescriptor);
  PropVariantClear((PROPVARIANT *)&pvar);
  EtwEventActivityIdControl(4LL, &v23);
  return (unsigned int)PropertyStoreProperty;
}
