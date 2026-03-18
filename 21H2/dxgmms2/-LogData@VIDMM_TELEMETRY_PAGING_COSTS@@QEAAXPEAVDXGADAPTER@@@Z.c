/*
 * XREFs of ?LogData@VIDMM_TELEMETRY_PAGING_COSTS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00E51F8
 * Callers:
 *     ?LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D8284 (-LogTeardownTelemetry@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014BA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@@Z @ 0x1C0030B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperPtrSize@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperPtrSize@@66@Z @ 0x1C0030C58 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNIC_ea_1C0030C58.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C00311B8 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z @ 0x1C00E4DA0 (-ConvertTimingData@VIDMM_TELEMETRY_PAGING_COSTS@@CAXPEBUTimingData@1@PEAU21@@Z.c)
 */

void __fastcall VIDMM_TELEMETRY_PAGING_COSTS::LogData(VIDMM_TELEMETRY_PAGING_COSTS *this, struct DXGADAPTER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int16 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h]
  _BYTE *v33; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+80h] [rbp-80h]
  _BYTE *v35; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  char v38; // [rsp+A0h] [rbp-60h]
  _BYTE v39[448]; // [rsp+B0h] [rbp-50h] BYREF

  if ( (*((_DWORD *)a2 + 109) & 0x10) == 0 )
  {
    DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED(
      (DXGAUTOPUSHLOCKFASTSHARED *)&v37,
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 3168));
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v32 = 88;
      v31 = (char *)this + 3080;
      v29 = *((_QWORD *)a2 + 202);
      v28 = 0;
      v30 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize>(
        v4,
        byte_1C0051065,
        v5,
        v6,
        (__int64)&v30,
        (__int64)&v28,
        (unsigned __int16 **)&v29,
        (__int64 *)&v31);
    }
    memset(v39, 0, 0x1B8uLL);
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(this, (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v32 = 176;
      v31 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v35 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v36 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v7,
        byte_1C0050FF3,
        v8,
        v9,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v35,
        (__int64 *)&v33,
        (__int64 *)&v31);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 440),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v31 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v32 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v10,
        byte_1C0050F85,
        v11,
        v12,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v31,
        (__int64 *)&v33,
        (__int64 *)&v35);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 880),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v31 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v32 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v13,
        byte_1C0050F17,
        v14,
        v15,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v31,
        (__int64 *)&v33,
        (__int64 *)&v35);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1320),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v31 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v32 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v16,
        byte_1C0050EA7,
        v17,
        v18,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v31,
        (__int64 *)&v33,
        (__int64 *)&v35);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 1760),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v31 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v32 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v19,
        byte_1C0050E32,
        v20,
        v21,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v31,
        (__int64 *)&v33,
        (__int64 *)&v35);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2200),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v31 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v32 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v22,
        byte_1C0050DC0,
        v23,
        v24,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v31,
        (__int64 *)&v33,
        (__int64 *)&v35);
    }
    VIDMM_TELEMETRY_PAGING_COSTS::ConvertTimingData(
      (VIDMM_TELEMETRY_PAGING_COSTS *)((char *)this + 2640),
      (struct VIDMM_TELEMETRY_PAGING_COSTS::TimingData *)v39);
    if ( (unsigned int)dword_1C006E048 > 5 && tlgKeywordOn((__int64)&dword_1C006E048, 0x400000000008LL) )
    {
      v36 = 176;
      v35 = &v39[264];
      v34 = 176;
      v33 = &v39[88];
      v31 = v39;
      v30 = *((_QWORD *)a2 + 202);
      v32 = 88;
      v28 = 0;
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        v25,
        byte_1C0050D54,
        v26,
        v27,
        (__int64)&v29,
        (__int64)&v28,
        (unsigned __int16 **)&v30,
        (__int64 *)&v31,
        (__int64 *)&v33,
        (__int64 *)&v35);
    }
    if ( v38 )
    {
      ExReleasePushLockSharedEx(v37, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
