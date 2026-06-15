/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800590A4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058790 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011E40C (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180059130 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800740F0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800DBE48 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800DD590 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801186D4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18011A24C (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x18011A398 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011AB24 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x18011C700 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18011C954 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x18011D1B0 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        bool *a2)
{
  int PacketSizeConstraints; // r15d
  int ProcessingModeCharacteristicsFromPropertyStore; // eax
  struct KSMULTIPLE_ITEM *v7; // rbx
  struct KSMULTIPLE_ITEM *v8; // rdi
  __int64 OemEnginePeriodicity; // rdx
  struct PacketSizeConstraints *v10; // rsi
  int SupportedDataRangeForEndpoint; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  ULONG Count; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  struct KSMULTIPLE_ITEM *v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 TimeSec; // [rsp+70h] [rbp-90h] BYREF
  struct KSMULTIPLE_ITEM *v22; // [rsp+78h] [rbp-88h] BYREF
  struct PacketSizeConstraints *v23; // [rsp+80h] [rbp-80h] BYREF
  struct KSMULTIPLE_ITEM *v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28[541]; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+119Ch] [rbp+109Ch]
  GUID v30; // [rsp+11A0h] [rbp+10A0h]
  __int64 v31[541]; // [rsp+11B0h] [rbp+10B0h] BYREF
  int v32; // [rsp+229Ch] [rbp+219Ch]
  GUID v33; // [rsp+22A0h] [rbp+21A0h]

  PacketSizeConstraints = 0;
  ProcessingModeCharacteristicsFromPropertyStore = CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this);
  *a2 = ProcessingModeCharacteristicsFromPropertyStore < 0;
  if ( ProcessingModeCharacteristicsFromPropertyStore < 0 )
  {
    v22 = 0LL;
    v7 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    Count = 0;
    v20 = 0LL;
    PerformanceCount.QuadPart = 0LL;
    v25 = 0LL;
    QueryPerformanceFrequency(&Frequency);
    CQPCStopWatch::Start((CQPCStopWatch *)&v25);
    GetSupportedDataRangeForEndpoint(eHostProcessConnector, *((struct IMMDevice **)this + 2), &v22);
    v8 = v22;
    PacketSizeConstraints = GetPacketSizeConstraints(*((struct IPropertyStore **)this + 5), &v23);
    if ( PacketSizeConstraints == -2147023728 )
      PacketSizeConstraints = 0;
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    v18 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxCapturePeriodicityInMs",
            0x18u,
            0LL,
            &v18,
            &pcbData) )
      LODWORD(g_MaxCapturePeriodicityInHns) = 10000 * v18;
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    TimeSec = OemEnginePeriodicity;
    v10 = v23;
    if ( PacketSizeConstraints >= 0 && *((_DWORD *)this + 54) )
    {
      LODWORD(v28[0]) = 3;
      *(__int64 *)((char *)&v28[28] + 4) = 0LL;
      v29 = 0;
      v30 = GUID_00000000_0000_0000_0000_000000000000;
      SupportedDataRangeForEndpoint = GetSupportedDataRangeForEndpoint(
                                        eKeywordDetectorConnector,
                                        *((struct IMMDevice **)this + 2),
                                        &v24);
      v7 = v24;
      if ( SupportedDataRangeForEndpoint >= 0 )
      {
        Count = v24->Count;
        v20 = v24 + 1;
      }
      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                this,
                                (__int64)v10,
                                pvData != 0,
                                TimeSec,
                                (__int64)this + 232,
                                (__int64)v28);
      CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v28);
      OemEnginePeriodicity = TimeSec;
    }
    LODWORD(v31[0]) = 0;
    *(__int64 *)((char *)&v31[28] + 4) = 0LL;
    v32 = 0;
    v33 = GUID_00000000_0000_0000_0000_000000000000;
    if ( PacketSizeConstraints >= 0 )
    {
      PacketSizeConstraints = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
                                this,
                                (__int64)v10,
                                pvData != 0,
                                OemEnginePeriodicity,
                                (__int64)this + 224,
                                (__int64)v31);
      if ( PacketSizeConstraints >= 0 && !*((_DWORD *)this + 55) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v31);
    QueryPerformanceCounter(&PerformanceCount);
    pv = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &pv) >= 0
      && (unsigned int)dword_18019C448 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_18019C448, 0x200000000000LL) )
    {
      TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v25);
      Count = PacketSizeConstraints;
      v20 = (struct KSMULTIPLE_ITEM *)pv;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v12,
        (unsigned int)&unk_180169DB6,
        v13,
        v14,
        (__int64)&v20,
        (__int64)&Count,
        (__int64)&TimeSec);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v10);
    CoTaskMemFree(v7);
    CoTaskMemFree(v8);
  }
  return (unsigned int)PacketSizeConstraints;
}
