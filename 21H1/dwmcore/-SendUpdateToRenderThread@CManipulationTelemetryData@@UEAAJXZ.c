/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1802335E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006FEEC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x1801C9F50 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@443333344@Z @ 0x180232E7C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U2@U2@@-$_tlgWri.c)
 */

__int64 __fastcall CManipulationTelemetryData::SendUpdateToRenderThread(CManipulationTelemetryData *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  LARGE_INTEGER v5; // rdx
  CComposition *v6; // rbx
  int ManipulationManager; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct CManipulationManager *v10; // rbx
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v17; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp-78h] BYREF
  LARGE_INTEGER v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h] BYREF
  CManipulationTelemetryData *v26; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v28; // [rsp+D0h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+F0h] [rbp-10h]
  __int128 v31; // [rsp+100h] [rbp+0h]
  struct IMessageCallSendHost *v32; // [rsp+140h] [rbp+40h] BYREF
  struct CManipulationManager *v33; // [rsp+148h] [rbp+48h] BYREF
  CManipulationTelemetryData *v34; // [rsp+150h] [rbp+50h] BYREF
  __int64 v35; // [rsp+158h] [rbp+58h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v5 = PerformanceCount;
  *((LARGE_INTEGER *)this + 11) = PerformanceCount;
  v27 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  v28 = 0LL;
  if ( (unsigned int)dword_180346E48 > 5 && (qword_180346E58 & 2) != 0 && (qword_180346E60 & 2) == qword_180346E60 )
  {
    LODWORD(v32) = *((_DWORD *)this + 25);
    LODWORD(v33) = *((_DWORD *)this + 24);
    v22 = *((_QWORD *)this + 10);
    v23 = v28;
    v24 = *((_QWORD *)&v27 + 1);
    v25 = v27;
    LODWORD(v34) = *((_DWORD *)this + 8);
    LODWORD(v35) = *((_DWORD *)this + 7);
    v19 = *((_DWORD *)this + 6);
    v21 = v5;
    v26 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      byte_1802EDC09,
      v3,
      v4,
      (__int64)&v26,
      (__int64)&v19,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v33,
      (__int64)&v32);
  }
  v6 = (CComposition *)*((_QWORD *)this + 22);
  v33 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  ManipulationManager = CComposition::GetManipulationManager(v6, &v33);
  v9 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 51;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  v10 = v33;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v33, &v32);
  v9 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 53;
    goto LABEL_14;
  }
  v11 = *((_QWORD *)v10 + 10);
  if ( v11 )
  {
    (**(void (__fastcall ***)(CManipulationTelemetryData *))this)(this);
    v12 = *(_OWORD *)((char *)this + 40);
    v27 = *(_OWORD *)((char *)this + 24);
    v13 = *(_OWORD *)((char *)this + 56);
    v28 = v12;
    v14 = *(_OWORD *)((char *)this + 72);
    v29 = v13;
    v15 = *(_OWORD *)((char *)this + 88);
    v30 = v14;
    v31 = v15;
    v34 = this;
    v35 = v11;
    LOWORD(v17) = 0;
    ManipulationManager = CoreUICallSend(v32, &v35, 1LL, 11LL, v17, &unk_1802CFB2A, (unsigned int)&v34, &v27);
    v9 = ManipulationManager;
    if ( ManipulationManager >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 22) + 504LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 22) + 504LL),
        0LL,
        0x4000LL);
      goto LABEL_15;
    }
    v18 = 65;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ManipulationManager, v18, 0LL);
    goto LABEL_15;
  }
  v9 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0x38u, 0LL);
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  return v9;
}
