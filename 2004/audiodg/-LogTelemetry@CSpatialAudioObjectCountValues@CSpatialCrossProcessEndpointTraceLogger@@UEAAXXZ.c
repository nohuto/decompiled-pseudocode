/*
 * XREFs of ?LogTelemetry@CSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x14005F320
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U3@U2@U3@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44545445@Z @ 0x14005E40C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U3@U.c)
 *     ?StdDev@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjectCountTypes@@@Z @ 0x14005FAB0 (-StdDev@-$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@QEAANW4SpatialObjec.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues::LogTelemetry(
        CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues *this)
{
  _DWORD **v1; // rax
  _DWORD *v3; // rsi
  double v4; // xmm0_8
  int v5; // r15d
  int v6; // edi
  int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // r9
  double v10; // xmm0_8
  int v11; // ecx
  int v12; // [rsp+80h] [rbp-9h] BYREF
  int v13; // [rsp+84h] [rbp-5h] BYREF
  double v14; // [rsp+88h] [rbp-1h] BYREF
  __int64 v15; // [rsp+90h] [rbp+7h] BYREF
  double v16; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v18[7]; // [rsp+A8h] [rbp+1Fh] BYREF
  double v19; // [rsp+F0h] [rbp+67h] BYREF
  int v20; // [rsp+F8h] [rbp+6Fh] BYREF
  int v21; // [rsp+100h] [rbp+77h] BYREF
  double v22; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = (_DWORD **)*((_QWORD *)this + 10);
  v3 = *v1;
  if ( **v1 > 4u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v4 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 1LL);
    v5 = *((_DWORD *)this + 12);
    v6 = 0;
    v19 = v4;
    if ( v5 )
      v7 = *((_DWORD *)this + 16);
    else
      v7 = 0;
    v10 = CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::StdDev(this, 0LL);
    v11 = *((_DWORD *)this + 4);
    v22 = v10;
    if ( v11 )
      v6 = *((_DWORD *)this + 8);
    v14 = v19;
    LODWORD(v19) = *((_DWORD *)this + 17);
    v15 = *((_QWORD *)this + 7);
    v16 = v22;
    LODWORD(v22) = *((_DWORD *)this + 9);
    v17 = *((_QWORD *)this + 3);
    v18[0] = *((_QWORD *)this + 11);
    v13 = v11;
    v20 = v7;
    v21 = v5;
    v12 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)v3,
      byte_14007259C,
      v8,
      v9,
      v18,
      (__int64)&v13,
      (__int64)&v17,
      (__int64)&v12,
      (__int64)&v22,
      (__int64)&v16,
      (__int64)&v21,
      (__int64)&v15,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v14);
  }
}
