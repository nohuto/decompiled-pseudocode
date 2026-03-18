/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C0015ACC
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C00051D8 (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C0016384 (rimOnPnpArrived.c)
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     EtwTraceStartInputDeviceRead @ 0x1C0015C40 (EtwTraceStartInputDeviceRead.c)
 *     RIMStartDeviceRead @ 0x1C0015C60 (RIMStartDeviceRead.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C00176A0 (RawInputManagerDeviceObjectReference.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0055BBC (RimDeviceTypeToRimInputTypeString.c)
 *     rimIsHidInputDevice @ 0x1C005BC0C (rimIsHidInputDevice.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012D11C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013EEE0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C015220C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01548C8 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(HANDLE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  HANDLE *v6; // r15
  __int64 v7; // rcx
  int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 v21; // cl
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+78h] [rbp+38h] BYREF
  __int64 v33; // [rsp+80h] [rbp+40h] BYREF
  __int64 v34; // [rsp+88h] [rbp+48h]

  v4 = *(_DWORD *)(a2 + 184);
  v6 = a1;
  if ( (v4 & 0x2000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    v4 = *(_DWORD *)(a2 + 184);
  }
  LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 3221226614LL);
    return (unsigned int)v8;
  }
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 152) = 0;
  *(_QWORD *)(a2 + 160) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( (_BYTE)a1 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)a1 != 2 )
      goto LABEL_8;
    if ( !*(_QWORD *)(a2 + 472) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( (unsigned int)rimIsHidInputDevice(a2, *(_QWORD *)(a2 + 464)) )
    {
LABEL_8:
      v7 = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 184) |= 0x80u;
      v8 = RawInputManagerDeviceObjectReference(v7);
      if ( v8 >= 0 )
      {
        v9 = RIMStartDeviceRead((PVOID)a2);
        LOBYTE(v10) = *(_BYTE *)(a2 + 48);
        v8 = v9;
        EtwTraceStartInputDeviceRead(v10, v9);
        if ( (unsigned int)dword_1C0246A70 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 256LL, v11, v12) )
        {
          v32 = (__int64)InputTraceLogging::RimDevTypeToString(*(unsigned __int8 *)(a2 + 48));
          v33 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
            (int)&dword_1C0246A70,
            (__int64)&v33,
            (__int64)&v32);
        }
        if ( v8 < 0 )
        {
          ObfDereferenceObject(*(PVOID *)(a2 + 32));
        }
        else
        {
          v13 = *(unsigned int *)(a2 + 184);
          if ( (v13 & 0x100) != 0 )
          {
            if ( (unsigned int)dword_1C0245170 > 5
              && (unsigned __int8)tlgKeywordOn(&dword_1C0245170, 0x400000000000LL, v13, v12) )
            {
              v19 = *(unsigned __int8 *)(a2 + 48);
              v33 = *(_QWORD *)(a2 + 216);
              LODWORD(v32) = v8;
              v34 = RimDeviceTypeToRimInputTypeString(a2, v19);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v20,
                &unk_1C02176CC);
              LODWORD(v13) = *(_DWORD *)(a2 + 184);
            }
            *(_DWORD *)(a2 + 184) = v13 & 0xFFFFFEFF;
          }
        }
        if ( v8 == -1073741670 )
        {
          v21 = *(_BYTE *)(a2 + 204);
          *(_BYTE *)(a2 + 204) = v21 + 1;
          if ( v21 >= 5u )
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %X..not retrying read as maximum retryReads reached",
              v6,
              (const void *)a2,
              -1073741670);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v27) = 4;
              WPP_RECORDER_SF_qqd(
                (_DWORD)gRimLog,
                v27,
                1,
                11,
                (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
                (char)v6,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C0245170 > 5
              && (unsigned __int8)tlgKeywordOn(&dword_1C0245170, 0x400000000000LL, v28, v29) )
            {
              v30 = *(unsigned __int8 *)(a2 + 48);
              v33 = *(_QWORD *)(a2 + 216);
              LODWORD(v32) = -1073741670;
              v34 = RimDeviceTypeToRimInputTypeString(a2, v30);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                v31,
                &unk_1C021764B);
            }
          }
          else
          {
            DbgPrintGDI(
              ":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n",
              v6,
              (const void *)a2,
              -1073741670);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = 4;
              WPP_RECORDER_SF_qqd(
                (_DWORD)gRimLog,
                v22,
                1,
                10,
                (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
                (char)v6,
                a2,
                154);
            }
            if ( (unsigned int)dword_1C0245170 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C0245170, 0x400000000000LL, v23, v24) )
              {
                v25 = *(unsigned __int8 *)(a2 + 48);
                v33 = *(_QWORD *)(a2 + 216);
                LODWORD(v32) = -1073741670;
                v34 = RimDeviceTypeToRimInputTypeString(a2, v25);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v26,
                  &unk_1C02175F4);
              }
            }
            *(_DWORD *)(a2 + 184) &= ~0x80u;
            ZwSetEvent(v6[48], 0LL);
          }
        }
      }
      return (unsigned int)v8;
    }
    if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
  }
  return 0LL;
}
