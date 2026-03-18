/*
 * XREFs of ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x1802331B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18007EC44 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U3@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@5AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x180232D9C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U3@U-$_tlgWrapperByV.c)
 */

__int64 __fastcall CManipulationTelemetryData::BeginInteraction(
        CManipulationTelemetryData *this,
        const struct IManipulationResource *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  int AttachedChannel; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  CDrawListEntry *v9; // r14
  wchar_t *v10; // rsi
  unsigned __int64 v11; // kr00_8
  __int64 v12; // rdi
  wchar_t *v13; // rax
  __int16 v15; // [rsp+50h] [rbp-49h] BYREF
  __int16 v16; // [rsp+52h] [rbp-47h] BYREF
  CDrawListEntry *v17; // [rsp+58h] [rbp-41h] BYREF
  int v18; // [rsp+60h] [rbp-39h] BYREF
  const struct IManipulationResource *v19; // [rsp+68h] [rbp-31h] BYREF
  wchar_t *v20; // [rsp+70h] [rbp-29h] BYREF
  const struct IManipulationResource *v21; // [rsp+78h] [rbp-21h] BYREF
  __int16 v22; // [rsp+80h] [rbp-19h]
  __int16 v23; // [rsp+82h] [rbp-17h]
  int v24; // [rsp+84h] [rbp-15h]
  int v25; // [rsp+88h] [rbp-11h]

  v17 = 0LL;
  v4 = 0LL;
  if ( a2 )
  {
    AttachedChannel = CComposition::GetAttachedChannel(*((CComposition **)this + 22), *((_DWORD *)this + 46), &v17);
    v9 = v17;
    v5 = AttachedChannel;
    if ( AttachedChannel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, AttachedChannel, 0x63u, 0LL);
    }
    else
    {
      v10 = (wchar_t *)*((_QWORD *)v17 + 6);
      if ( v10 )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( v10[v4] );
      }
      v11 = v4;
      v12 = 2 * v4;
      if ( is_mul_ok(v11, 2uLL) )
      {
        v5 = 0;
        v21 = a2;
        v24 = 2;
        v25 = 2;
        if ( (unsigned int)dword_180346E48 > 5 && (qword_180346E58 & 2) != 0 && (qword_180346E60 & 2) == qword_180346E60 )
        {
          v15 = v23;
          v16 = v22;
          v13 = word_1802CE738;
          if ( v10 )
            v13 = v10;
          v18 = 2;
          v20 = v13;
          LODWORD(v17) = 2;
          v19 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v7,
            byte_1802ED91B,
            2LL,
            v8,
            &v20,
            (__int64)&v19,
            (__int64)&v16,
            (__int64)&v15,
            (__int64)&v17,
            (__int64)&v18);
        }
        (*(void (__fastcall **)(_QWORD, const struct IManipulationResource **, __int64, wchar_t *))(**(_QWORD **)(*((_QWORD *)this + 22) + 504LL)
                                                                                                  + 8LL))(
          *(_QWORD *)(*((_QWORD *)this + 22) + 504LL),
          &v21,
          v12,
          v10);
      }
      else
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0x6Bu, 0LL);
      }
    }
    if ( v9 )
      CDrawListEntry::Release(v9);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x60u, 0LL);
  }
  return v5;
}
