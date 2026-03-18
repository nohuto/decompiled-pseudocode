/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@@Z @ 0x180274FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U3@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@5AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x18027495C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U3@U-$_tlgWrapperByV.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::BeginInteraction(
        InteractionLatencyTelemetry::CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  int AttachedChannel; // eax
  __int64 v7; // rcx
  struct CChannelContext *v8; // r14
  wchar_t *v9; // rsi
  unsigned __int64 v10; // kr00_8
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  wchar_t *v15; // rax
  __int16 v17; // [rsp+50h] [rbp-49h] BYREF
  __int16 v18; // [rsp+52h] [rbp-47h] BYREF
  struct CChannelContext *v19; // [rsp+58h] [rbp-41h] BYREF
  int v20; // [rsp+60h] [rbp-39h] BYREF
  const struct IManipulationResource *v21; // [rsp+68h] [rbp-31h] BYREF
  wchar_t *v22; // [rsp+70h] [rbp-29h] BYREF
  const struct IManipulationResource *v23; // [rsp+78h] [rbp-21h] BYREF
  __int16 v24; // [rsp+80h] [rbp-19h]
  __int16 v25; // [rsp+82h] [rbp-17h]
  int v26; // [rsp+84h] [rbp-15h]
  int v27; // [rsp+88h] [rbp-11h]

  v19 = 0LL;
  v4 = 0LL;
  if ( a2 )
  {
    AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 34), *((_DWORD *)this + 70), &v19);
    v8 = v19;
    v5 = AttachedChannel;
    if ( AttachedChannel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, AttachedChannel, 0x73u);
    }
    else
    {
      v9 = (wchar_t *)*((_QWORD *)v19 + 7);
      if ( v9 )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( v9[v4] );
      }
      v10 = v4;
      v11 = 2 * v4;
      if ( is_mul_ok(v10, 2uLL) )
      {
        v5 = 0;
        v23 = a2;
        v26 = 2;
        v27 = 2;
        if ( (unsigned int)dword_1803D0EB8 > 5 && tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
        {
          v17 = v25;
          v18 = v24;
          v15 = word_18032C468;
          if ( v9 )
            v15 = v9;
          v20 = v14;
          v22 = v15;
          LODWORD(v19) = v14;
          v21 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v12,
            byte_180373189,
            v13,
            v14,
            &v22,
            (__int64)&v21,
            (__int64)&v18,
            (__int64)&v17,
            (__int64)&v19,
            (__int64)&v20);
        }
        (*(void (__fastcall **)(_QWORD, const struct IManipulationResource **, __int64, wchar_t *))(**(_QWORD **)(*((_QWORD *)this + 34) + 656LL)
                                                                                                  + 8LL))(
          *(_QWORD *)(*((_QWORD *)this + 34) + 656LL),
          &v23,
          v11,
          v9);
      }
      else
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024362, 0x7Bu);
      }
    }
    if ( v8 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v8);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x70u);
  }
  return v5;
}
