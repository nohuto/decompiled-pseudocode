/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C0182138
 * Callers:
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C005B9F0 (RIMFindSiblingPointerDeviceForMouse.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     IsPTPInputEnabled @ 0x1C0122BD8 (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C016397C (RIMConfigurePointerDevice.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C0182088 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01CD4E8 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(char a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned __int8 v9; // al
  unsigned __int16 *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int16 *v19; // rcx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // rdi
  __int64 v22; // rcx
  unsigned __int16 *v23; // r8
  __int64 v24; // r9
  unsigned __int16 *v25; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 *v26[3]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-9h] BYREF
  _OWORD v28[2]; // [rsp+68h] [rbp-1h] BYREF
  int v29; // [rsp+88h] [rbp+1Fh]

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v27, 1, 0);
    if ( (unsigned int)IsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_qqd(
          (_DWORD)gRimLog,
          v4,
          1,
          12,
          (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
          a1,
          a2,
          *(_BYTE *)(a2 + 206));
      }
      v7 = *(_DWORD *)(a2 + 2292);
      v8 = v7 / 0x19;
      if ( v7 % 0x19 == 1 && (v9 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v9 + 1, v9 < 0x14u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v8,
            1,
            13,
            (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
            a1,
            a2,
            v9 + 1);
        }
        v25 = 0LL;
        RIMFindSiblingPointerDeviceForMouse(a2, &v25, v5, v6);
        v10 = v25;
        if ( !v25 )
          goto LABEL_30;
        v11 = *((_QWORD *)v25 + 53);
        RIMLockExclusive(v11 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && (unsigned int)dword_1C0245250 > 5
          && tlgKeywordOn((__int64)&dword_1C0245250, 0x800000000000LL) )
        {
          v25 = v10 + 148;
          v26[0] = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v12,
            byte_1C02188BB,
            v13,
            v14,
            v26,
            &v25);
        }
        RIMConfigurePointerDevice(v11, (__int64)(v10 + 44), *((_QWORD *)v10 + 69));
        if ( !*((_QWORD *)v10 + 71) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
        ApiSetSetUserPTPEnabledPreference(v10 + 44, *((_QWORD *)v10 + 69), v11);
        *(_QWORD *)(v11 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
        KeLeaveCriticalRegion();
        v19 = v10;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 206) < 0x14u )
          goto LABEL_30;
        v20 = dword_1C0245250;
        v21 = 0LL;
        v25 = 0LL;
        if ( dword_1C0245250 )
        {
          RIMFindSiblingPointerDeviceForMouse(a2, &v25, v5, v6);
          v20 = dword_1C0245250;
          v21 = v25;
        }
        v29 = *(_DWORD *)L">";
        v26[2] = (unsigned __int16 *)v28;
        v26[1] = (unsigned __int16 *)2359330;
        v28[0] = *(_OWORD *)L"<Unknown sibling>";
        v28[1] = *(_OWORD *)L" sibling>";
        if ( v20 > 5 && tlgKeywordOn((__int64)&dword_1C0245250, 0x800000000000LL) )
        {
          v26[0] = v23;
          v25 = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v22,
            byte_1C021886F,
            (__int64)v23,
            v24,
            &v25,
            v26);
        }
        *(_DWORD *)(a2 + 184) &= ~0x4000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v8,
            1,
            14,
            (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
            a1,
            a2,
            *(_BYTE *)(a2 + 206));
        }
        if ( !v21 )
          goto LABEL_30;
        v19 = v21;
      }
      ObfDereferenceObject(v19);
    }
LABEL_30:
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v27);
  }
}
