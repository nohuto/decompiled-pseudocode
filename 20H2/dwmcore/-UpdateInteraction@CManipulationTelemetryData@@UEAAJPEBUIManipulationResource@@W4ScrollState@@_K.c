/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x18022FA60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173814 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801C6178 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$01@@U2@U2@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$01@@443333334@Z @ 0x18022F168 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$01@@U2@U2@U1@.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18022F2B8 (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x18022F318 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x18022F754 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateInteraction(__int64 a1, LONGLONG a2, int a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  std::_Ref_count_base *v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rcx
  std::_Ref_count_base *v14; // rdi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // r8
  std::_Ref_count_base *v20; // rax
  __m128i *v21; // rsi
  std::_Ref_count_base *v22; // rcx
  std::_Ref_count_base *v23; // rcx
  int inserted; // eax
  LPVOID v25; // rax
  std::_Ref_count_base *v26; // rdi
  int v27; // r9d
  __int128 v28; // xmm1
  std::_Ref_count_base *v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  std::_Ref_count_base *v33; // rcx
  LARGE_INTEGER *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v39; // [rsp+28h] [rbp-F0h]
  _DWORD v40[4]; // [rsp+98h] [rbp-80h] BYREF
  std::_Ref_count_base *v41[2]; // [rsp+A8h] [rbp-70h] BYREF
  DWORD LowPart; // [rsp+B8h] [rbp-60h] BYREF
  LONG HighPart; // [rsp+BCh] [rbp-5Ch] BYREF
  DWORD v44; // [rsp+C0h] [rbp-58h] BYREF
  DWORD v45; // [rsp+C4h] [rbp-54h] BYREF
  DWORD v46; // [rsp+C8h] [rbp-50h] BYREF
  LARGE_INTEGER v47; // [rsp+D0h] [rbp-48h] BYREF
  LARGE_INTEGER v48; // [rsp+D8h] [rbp-40h] BYREF
  LARGE_INTEGER v49; // [rsp+E0h] [rbp-38h] BYREF
  LARGE_INTEGER v50; // [rsp+E8h] [rbp-30h] BYREF
  LARGE_INTEGER v51; // [rsp+F0h] [rbp-28h] BYREF
  LARGE_INTEGER v52; // [rsp+F8h] [rbp-20h] BYREF
  LARGE_INTEGER v53; // [rsp+100h] [rbp-18h] BYREF
  std::_Ref_count_base *v54[2]; // [rsp+108h] [rbp-10h] BYREF
  __int128 v55; // [rsp+118h] [rbp+0h] BYREF
  _QWORD v56[2]; // [rsp+158h] [rbp+40h] BYREF
  int v57; // [rsp+168h] [rbp+50h]
  char v58; // [rsp+16Ch] [rbp+54h]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+170h] [rbp+58h] BYREF
  __int128 v60; // [rsp+198h] [rbp+80h] BYREF
  __int128 v61; // [rsp+1A8h] [rbp+90h] BYREF
  _OWORD v62[5]; // [rsp+1B8h] [rbp+A0h] BYREF
  __int64 v63; // [rsp+208h] [rbp+F0h]
  _OWORD v64[5]; // [rsp+218h] [rbp+100h] BYREF
  __int64 v65; // [rsp+268h] [rbp+150h]
  __int16 v66; // [rsp+2B8h] [rbp+1A0h] BYREF

  v56[1] = v56;
  v57 = 0;
  v56[0] = v56;
  v58 = 0;
  v8 = 0;
  InitializeCriticalSection(&CriticalSection);
  *(_OWORD *)v41 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v11 = 0LL;
    v40[0] = *(_DWORD *)(a1 + 120);
    if ( v40[0] )
    {
      while ( 1 )
      {
        v12 = operator new(0x58uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(v41, (__int64)v12);
        v14 = v41[0];
        if ( !v41[0] )
          break;
        memset_0(v62, 0, 0x58uLL);
        v15 = v62[1];
        *(_OWORD *)v14 = v62[0];
        v16 = v62[2];
        *((_OWORD *)v14 + 1) = v15;
        v17 = v62[3];
        *((_OWORD *)v14 + 2) = v16;
        v18 = v62[4];
        *((_OWORD *)v14 + 3) = v17;
        *(_QWORD *)&v17 = v63;
        *((_OWORD *)v14 + 4) = v18;
        *((_QWORD *)v14 + 10) = v17;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1 + 104, v54, v19, v40);
        v20 = v11;
        v21 = (__m128i *)v54[0];
        v22 = v11;
        v11 = v54[1];
        *(_OWORD *)v54 = 0LL;
        if ( v20 )
          std::_Ref_count_base::_Decref(v22);
        v23 = v41[1];
        *((_DWORD *)v14 + 14) = v21->m128i_i32[0];
        *((_WORD *)v14 + 30) = v21[4].m128i_i16[6];
        *((_DWORD *)v14 + 17) = v21->m128i_i32[1];
        *((_DWORD *)v14 + 16) = v21->m128i_i32[2];
        *((_QWORD *)v14 + 1) = v21[1].m128i_i64[0];
        *((_QWORD *)v14 + 4) = _mm_srli_si128(v21[1], 8).m128i_u64[0];
        *((_QWORD *)v14 + 5) = v21[2].m128i_i64[0];
        *((_QWORD *)v14 + 2) = v21[3].m128i_i64[1];
        *((_QWORD *)v14 + 6) = _mm_srli_si128(v21[2], 8).m128i_u64[0];
        *((_DWORD *)v14 + 20) = v21[4].m128i_i32[2];
        if ( v23 )
          _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
        v60 = *(_OWORD *)v41;
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v56, (__int64 *)&v60);
        v8 = inserted;
        if ( inserted < 0 )
        {
          v39 = 198;
          goto LABEL_14;
        }
        if ( !v40[0] )
          goto LABEL_10;
      }
      v39 = 181;
      goto LABEL_16;
    }
LABEL_10:
    if ( a3 == 2 )
    {
      v25 = operator new(0x58uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(v41, (__int64)v25);
      v26 = v41[0];
      if ( !v41[0] )
      {
        v39 = 204;
LABEL_16:
        v27 = -2147024882;
        v8 = -2147024882;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v27, v39, 0LL);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        goto LABEL_33;
      }
      memset_0(v64, 0, 0x58uLL);
      v28 = v64[1];
      v29 = v41[1];
      *(_OWORD *)v26 = v64[0];
      v30 = v64[2];
      *((_OWORD *)v26 + 1) = v28;
      v31 = v64[3];
      *((_OWORD *)v26 + 2) = v30;
      v32 = v64[4];
      *((_OWORD *)v26 + 3) = v31;
      *(_QWORD *)&v31 = v65;
      *((_OWORD *)v26 + 4) = v32;
      *((_QWORD *)v26 + 10) = v31;
      *((_QWORD *)v26 + 2) = a4;
      if ( v29 )
        _InterlockedIncrement((volatile signed __int32 *)v29 + 2);
      v61 = *(_OWORD *)v41;
      inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v56, (__int64 *)&v61);
      v8 = inserted;
      if ( inserted < 0 )
      {
        v39 = 208;
LABEL_14:
        v27 = inserted;
        goto LABEL_17;
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v40[0] = v57;
  while ( v40[0] )
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((__int64)v56, &v55, v10, v40);
    v33 = v41[1];
    v41[1] = *((std::_Ref_count_base **)&v55 + 1);
    v34 = (LARGE_INTEGER *)v55;
    v55 = 0LL;
    if ( v33 )
      std::_Ref_count_base::_Decref(v33);
    v34->QuadPart = a2;
    v34[9].LowPart = 1;
    QueryPerformanceCounter(v34 + 3);
    if ( (unsigned int)dword_180341EB8 > 5 && (qword_180341EC8 & 2) != 0 && (qword_180341ED0 & 2) == qword_180341ED0 )
    {
      LowPart = v34[10].LowPart;
      v47 = v34[6];
      v48 = v34[3];
      v49 = v34[2];
      v50 = v34[5];
      v51 = v34[4];
      v52 = v34[1];
      HighPart = v34[8].HighPart;
      v44 = v34[8].LowPart;
      v66 = WORD2(v34[7].QuadPart);
      v45 = v34[9].LowPart;
      v46 = v34[7].LowPart;
      v53 = *v34;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v35,
        byte_1802E9AA7,
        v36,
        v37,
        (__int64)&v53,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&v66,
        (__int64)&v44,
        (__int64)&HighPart,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&LowPart);
    }
    (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**(_QWORD **)(*(_QWORD *)(a1 + 176) + 504LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 504LL),
      v34);
  }
LABEL_33:
  if ( v41[1] )
    std::_Ref_count_base::_Decref(v41[1]);
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v56,
    v9,
    v10);
  return v8;
}
