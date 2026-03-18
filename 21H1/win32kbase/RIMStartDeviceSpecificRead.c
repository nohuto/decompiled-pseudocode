/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C0059A04
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C0005218 (rimStartDeviceReadIfAllowed.c)
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     rimIsHidInputDevice @ 0x1C005675C (rimIsHidInputDevice.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C0059B80 (EtwTraceStartInputDeviceRead.c)
 *     RIMStartDeviceRead @ 0x1C0059BA0 (RIMStartDeviceRead.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C005A910 (RawInputManagerDeviceObjectReference.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C013310C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C015855C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C015AC18 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2)
{
  int v2; // eax
  HANDLE *v4; // r15
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int8 v16; // cl
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // [rsp+78h] [rbp+38h] BYREF
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  const wchar_t *v29; // [rsp+88h] [rbp+48h]

  v2 = *(_DWORD *)(a2 + 184);
  v4 = a1;
  if ( (v2 & 0x2000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v2 = *(_DWORD *)(a2 + 184);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (v2 & 0x80u) != 0 )
  {
    v6 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v6;
  }
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( (_BYTE)a1 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)a1 != 2 )
      goto LABEL_8;
    if ( !*(_QWORD *)(a2 + 472) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 464)) )
    {
LABEL_8:
      v5 = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 184) |= 0x80u;
      v6 = RawInputManagerDeviceObjectReference(v5);
      if ( v6 >= 0 )
      {
        v7 = RIMStartDeviceRead((PVOID)a2);
        LOBYTE(v8) = *(_BYTE *)(a2 + 48);
        v6 = v7;
        EtwTraceStartInputDeviceRead(v8, v7);
        if ( (unsigned int)dword_1C024C960 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 256LL, v9, v10) )
        {
          v27 = (__int64)InputTraceLogging::RimDevTypeToString(*(unsigned __int8 *)(a2 + 48));
          v28 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
            (int)&dword_1C024C960,
            (__int64)&v28,
            (__int64)&v27);
        }
        if ( v6 < 0 )
        {
          ObfDereferenceObject(*(PVOID *)(a2 + 32));
        }
        else
        {
          v11 = *(unsigned int *)(a2 + 184);
          if ( (v11 & 0x100) != 0 )
          {
            if ( (unsigned int)dword_1C024B170 > 5
              && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x400000000000LL, v11, v10) )
            {
              v14 = *(unsigned __int8 *)(a2 + 48);
              v28 = *(_QWORD *)(a2 + 216);
              LODWORD(v27) = v6;
              v29 = RimDeviceTypeToRimInputTypeString(a2, v14);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v15,
                &unk_1C021D1B3);
              LODWORD(v11) = *(_DWORD *)(a2 + 184);
            }
            *(_DWORD *)(a2 + 184) = v11 & 0xFFFFFEFF;
          }
        }
        if ( v6 == -1073741670 )
        {
          v16 = *(_BYTE *)(a2 + 204);
          *(_BYTE *)(a2 + 204) = v16 + 1;
          if ( v16 >= 5u )
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %X..not retrying read as maximum retryReads reached",
              v4,
              (const void *)a2,
              -1073741670);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_qqd(
                (_DWORD)gRimLog,
                v22,
                1,
                11,
                (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
                (char)v4,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C024B170 > 5
              && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x400000000000LL, v23, v24) )
            {
              v25 = *(unsigned __int8 *)(a2 + 48);
              v28 = *(_QWORD *)(a2 + 216);
              LODWORD(v27) = -1073741670;
              v29 = RimDeviceTypeToRimInputTypeString(a2, v25);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v26,
                &unk_1C021D164);
            }
          }
          else
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
              v4,
              (const void *)a2,
              -1073741670);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_qqd(
                (_DWORD)gRimLog,
                v17,
                1,
                10,
                (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
                (char)v4,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C024B170 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x400000000000LL, v18, v19) )
              {
                v20 = *(unsigned __int8 *)(a2 + 48);
                v28 = *(_QWORD *)(a2 + 216);
                LODWORD(v27) = -1073741670;
                v29 = RimDeviceTypeToRimInputTypeString(a2, v20);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v21,
                  &unk_1C021D20E);
              }
            }
            *(_DWORD *)(a2 + 184) &= ~0x80u;
            ZwSetEvent(v4[48], 0LL);
          }
        }
      }
      return (unsigned int)v6;
    }
    if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
  }
  return 0LL;
}
