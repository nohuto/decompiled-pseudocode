/*
 * XREFs of ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800E1E28
 * Callers:
 *     s_midiOpenPort @ 0x1800E20E0 (s_midiOpenPort.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A0C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

__int64 __fastcall GetKsMidiDeviceInfo(const unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 *v5; // rdi
  int ObjectProperties; // ebx
  __int64 Property; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  const unsigned __int16 *v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r14
  char *v15; // rax
  __int64 v16; // rax
  unsigned __int64 *v18; // [rsp+28h] [rbp-71h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-71h]
  unsigned int v20[2]; // [rsp+30h] [rbp-69h]
  unsigned int v21[2]; // [rsp+30h] [rbp-69h]
  unsigned __int64 v22; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int16 **v23; // [rsp+48h] [rbp-51h] BYREF
  DEVPROPKEY v24; // [rsp+50h] [rbp-49h]
  int v25; // [rsp+64h] [rbp-35h]
  __int64 v26; // [rsp+68h] [rbp-31h]
  __int128 v27; // [rsp+70h] [rbp-29h]
  int v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+84h] [rbp-15h]
  __int64 v30; // [rsp+88h] [rbp-11h]
  __int128 v31; // [rsp+90h] [rbp-9h]
  int v32; // [rsp+A0h] [rbp+7h]
  int v33; // [rsp+A4h] [rbp+Bh]
  __int64 v34; // [rsp+A8h] [rbp+Fh]

  v24 = DEVPKEY_DeviceInterface_ClassGuid;
  v28 = 1;
  v32 = 2;
  LODWORD(v22) = 0;
  v5 = 0LL;
  v27 = DEVPKEY_KsMidiPort_KsFilterInterfaceId;
  v23 = 0LL;
  v31 = DEVPKEY_KsMidiPort_KsPinId;
  v25 = 0;
  v26 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v33 = 0;
  v34 = 0LL;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    Property = DevFindProperty(&DEVPKEY_DeviceInterface_ClassGuid, 0LL, 0LL, (unsigned int)v22, v23, &v22, &v23);
    if ( Property && *(_DWORD *)(Property + 32) == 13 )
    {
      v8 = *(_QWORD **)(Property + 40);
      v9 = *v8 - DEVINTERFACE_MIDI_OUTPUT;
      if ( *v8 == DEVINTERFACE_MIDI_OUTPUT )
        v9 = v8[1] - 0x1428BFEBB3BBD480LL;
      if ( v9 )
      {
        v10 = *v8 - DEVINTERFACE_MIDI_INPUT;
        if ( *v8 == DEVINTERFACE_MIDI_INPUT )
          v10 = v8[1] - 0x2BE247378B6F3FB7LL;
        if ( v10 )
        {
          ObjectProperties = -2147024809;
          goto LABEL_27;
        }
      }
      v11 = DevFindProperty(
              &DEVPKEY_KsMidiPort_KsFilterInterfaceId,
              0LL,
              0LL,
              (unsigned int)v22,
              v23,
              v18,
              *(_QWORD *)v20);
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 32) == 18 )
        {
          v12 = *(const unsigned __int16 **)(v11 + 40);
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          v14 = v13 + 1;
          if ( v13 + 1 < v13 )
          {
            ObjectProperties = -2147024362;
            goto LABEL_27;
          }
          if ( is_mul_ok(v14, 2uLL) )
          {
            v15 = (char *)CoTaskMemAlloc(2 * v14);
            v5 = (unsigned __int16 *)v15;
            if ( !v15 )
            {
              ObjectProperties = -2147024882;
              goto LABEL_27;
            }
            ObjectProperties = 0;
            StringCchCopyNExW(v15, v13 + 1, v12, v13);
          }
          else
          {
            ObjectProperties = -2147024362;
          }
          if ( ObjectProperties < 0 )
            goto LABEL_27;
          v16 = DevFindProperty(&DEVPKEY_KsMidiPort_KsPinId, 0LL, 0LL, (unsigned int)v22, v23, v19, *(_QWORD *)v21);
          if ( v16 && *(_DWORD *)(v16 + 32) == 7 )
          {
            ObjectProperties = 0;
            *a3 = **(_DWORD **)(v16 + 40);
            *a2 = v5;
            v5 = 0LL;
            goto LABEL_27;
          }
        }
      }
    }
    ObjectProperties = -2147023728;
  }
LABEL_27:
  CoTaskMemFree(v5);
  DevFreeObjectProperties((unsigned int)v22);
  if ( ObjectProperties < 0 )
    AudSrvTraceLoggingErrorHelper("GetKsMidiDeviceInfo", 92, ObjectProperties);
  return (unsigned int)ObjectProperties;
}
