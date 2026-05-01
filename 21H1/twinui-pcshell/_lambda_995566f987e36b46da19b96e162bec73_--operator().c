/*
 * XREFs of _lambda_995566f987e36b46da19b96e162bec73_::operator() @ 0x1800A8A44
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_995566f987e36b46da19b96e162bec73__&_::Run @ 0x1800A8FB0 (wil--details--functor_wrapper_void__lambda_995566f987e36b46da19b96e162bec73__-_--Run.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@QEAA_NXZ @ 0x1800A9110 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ModernAppBlocking@@@details@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18042F7F4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180431DDC (-Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall lambda_995566f987e36b46da19b96e162bec73_::operator()(__int64 a1)
{
  PCWSTR StringRawBuffer; // rax
  _BYTE *v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // ebx
  const struct _tlgProvider_t *v6; // rcx
  int v7; // ecx
  bool v8; // zf
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a1, 0LL);
  v3 = *(_BYTE **)(a1 + 8);
  v4 = (__int64)StringRawBuffer;
  v5 = 0;
  v6 = AppUsageTelemetry::Provider();
  if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
  {
    v8 = *v3 == 0;
    v11 = 0x2000000LL;
    LOBYTE(v10) = !v8;
    v12 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      (int)&dword_1804FDB89,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v11);
  }
  if ( !**(_BYTE **)(a1 + 8) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 256LL) + 72LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 256LL),
             v4);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ModernAppBlocking>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ModernAppBlocking>::GetImpl'::`2'::impl) )
  {
    if ( **(_DWORD **)(a1 + 16) == 1 )
      v5 = 1;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 256LL) + 64LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 256LL),
           v4,
           v5);
}
