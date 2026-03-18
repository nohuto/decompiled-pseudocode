/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C0187E38
 * Callers:
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 * Callees:
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C004E030 (RIMFindSiblingPointerDeviceForMouse.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     IsPTPInputEnabled @ 0x1C0128BB8 (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C0169CCC (RIMConfigurePointerDevice.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C0187D88 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01D3468 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  unsigned __int16 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int16 *v11; // rcx
  unsigned int v12; // ecx
  unsigned __int16 *v13; // rdi
  __int64 v14; // rcx
  unsigned __int16 *v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+38h] [rbp-31h]
  unsigned __int16 *v18; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 *v19[3]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-9h] BYREF
  _OWORD v21[2]; // [rsp+68h] [rbp-1h] BYREF
  int v22; // [rsp+88h] [rbp+1Fh]

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v20, 1, 0);
    if ( (unsigned int)IsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqd(
          (__int64)gRimLog,
          4u,
          1u,
          0xCu,
          (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
          a1,
          a2,
          *(unsigned __int8 *)(a2 + 206));
      if ( *(_DWORD *)(a2 + 2292) % 0x19u == 1 && (v4 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v4 + 1, v4 < 0x14u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = (unsigned __int8)(v4 + 1);
          WPP_RECORDER_SF_qqd(
            (__int64)gRimLog,
            4u,
            1u,
            0xDu,
            (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
            a1,
            a2,
            v17);
        }
        v18 = 0LL;
        RIMFindSiblingPointerDeviceForMouse(a2, &v18);
        v5 = v18;
        if ( !v18 )
          goto LABEL_30;
        v6 = *((_QWORD *)v18 + 53);
        RIMLockExclusive(v6 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && (unsigned int)dword_1C024B250 > 5
          && tlgKeywordOn((__int64)&dword_1C024B250, 0x800000000000LL) )
        {
          v18 = v5 + 148;
          v19[0] = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v7,
            byte_1C021E42B,
            v8,
            v9,
            v19,
            &v18);
        }
        RIMConfigurePointerDevice(v6, (__int64)(v5 + 44), *((_QWORD *)v5 + 69));
        if ( !*((_QWORD *)v5 + 71) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
        ApiSetSetUserPTPEnabledPreference(v5 + 44, *((_QWORD *)v5 + 69), v6);
        *(_QWORD *)(v6 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v6 + 104, 0LL);
        KeLeaveCriticalRegion();
        v11 = v5;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 206) < 0x14u )
          goto LABEL_30;
        v12 = dword_1C024B250;
        v13 = 0LL;
        v18 = 0LL;
        if ( dword_1C024B250 )
        {
          RIMFindSiblingPointerDeviceForMouse(a2, &v18);
          v12 = dword_1C024B250;
          v13 = v18;
        }
        v22 = *(_DWORD *)L">";
        v19[2] = (unsigned __int16 *)v21;
        v19[1] = (unsigned __int16 *)2359330;
        v21[0] = *(_OWORD *)L"<Unknown sibling>";
        v21[1] = *(_OWORD *)L" sibling>";
        if ( v12 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x800000000000LL) )
        {
          v19[0] = v15;
          v18 = (unsigned __int16 *)(a2 + 208);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v14,
            byte_1C021E3DF,
            (__int64)v15,
            v16,
            &v18,
            v19);
        }
        *(_DWORD *)(a2 + 184) &= ~0x4000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = *(unsigned __int8 *)(a2 + 206);
          WPP_RECORDER_SF_qqd(
            (__int64)gRimLog,
            4u,
            1u,
            0xEu,
            (__int64)&WPP_09f3a69173bf3f521b10e986f86340e6_Traceguids,
            a1,
            a2,
            v17);
        }
        if ( !v13 )
          goto LABEL_30;
        v11 = v13;
      }
      ObfDereferenceObject(v11);
    }
LABEL_30:
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v20);
  }
}
