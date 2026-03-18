/*
 * XREFs of ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180233D60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443333344@Z @ 0x180232E7C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U2@U2@@-$_tlgWri.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x180233478 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateOnRenderThread(LARGE_INTEGER *this, __m128i *a2)
{
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  LARGE_INTEGER v6; // rax
  __m128i v7; // xmm2
  __int64 (__fastcall *v8)(LARGE_INTEGER *); // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD *v12; // rax
  _OWORD *v13; // rdi
  volatile signed __int32 *v14; // rax
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  int v17; // edi
  __int64 v18; // rcx
  __int32 v20; // [rsp+80h] [rbp-29h] BYREF
  __int32 v21; // [rsp+84h] [rbp-25h] BYREF
  __int64 v22; // [rsp+88h] [rbp-21h] BYREF
  __int64 v23; // [rsp+90h] [rbp-19h] BYREF
  __int64 v24; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v28[9]; // [rsp+B8h] [rbp+Fh] BYREF
  __int32 v29; // [rsp+110h] [rbp+67h] BYREF
  __int32 v30; // [rsp+120h] [rbp+77h] BYREF
  __int32 v31; // [rsp+128h] [rbp+7Fh] BYREF

  QueryPerformanceCounter(this + 21);
  if ( (unsigned int)dword_180346E48 > 5 && (qword_180346E58 & 2) != 0 && (qword_180346E60 & 2) == qword_180346E60 )
  {
    v4 = a2[1];
    v29 = a2[4].m128i_i32[3];
    v5 = a2[2];
    v30 = a2[4].m128i_i32[2];
    v22 = a2[4].m128i_i64[0];
    v23 = a2[3].m128i_i64[1];
    v31 = a2->m128i_i32[2];
    v20 = a2->m128i_i32[1];
    v21 = a2->m128i_i32[0];
    v6 = *this;
    v25 = _mm_srli_si128(v4, 8).m128i_u64[0];
    v7 = a2[1];
    v8 = *(__int64 (__fastcall **)(LARGE_INTEGER *))(v6.QuadPart + 64);
    v24 = v5.m128i_i64[0];
    v26 = v7.m128i_i64[0];
    v27 = v8(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_1802ED772,
      v10,
      v11,
      (__int64)&v27,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v31,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v30,
      (__int64)&v29);
  }
  v12 = operator new(0x50uLL);
  v13 = v12;
  if ( v12 )
  {
    *v12 = *a2;
    v12[1] = a2[1];
    v12[2] = a2[2];
    v12[3] = a2[3];
    v12[4] = a2[4];
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (volatile signed __int32 *)operator new(0x18uLL);
  v16 = v14;
  if ( v14 )
  {
    *((_DWORD *)v14 + 2) = 1;
    *((_DWORD *)v14 + 3) = 1;
    *(_QWORD *)v14 = &std::_Ref_count<ManipulationThreadTelemetryData>::`vftable';
    *((_QWORD *)v14 + 2) = v13;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v13 )
  {
    if ( v16 )
    {
      _InterlockedAdd(v16 + 2, 1u);
      _InterlockedAdd(v16 + 2, 1u);
    }
    v28[0] = v13;
    v28[1] = v16;
    v17 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert((__int64)&this[13], 1LL, v28);
    if ( v16 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x13Du, 0LL);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x13Cu, 0LL);
  }
  if ( v16 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
  return (unsigned int)v17;
}
