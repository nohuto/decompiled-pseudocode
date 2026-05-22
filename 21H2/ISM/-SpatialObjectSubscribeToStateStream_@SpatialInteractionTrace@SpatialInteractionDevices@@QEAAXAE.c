/*
 * XREFs of ?SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800D90FC
 * Callers:
 *     _lambda_86a3fa2e77f671cbbc20107799d6d433_::operator() @ 0x1800D67A8 (_lambda_86a3fa2e77f671cbbc20107799d6d433_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D5004 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectSubscribeToStateStream_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        int a3)
{
  LPVOID v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // [rsp+40h] [rbp+8h] BYREF
  const struct _GUID *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = this;
  v5 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 2LL) )
  {
    LODWORD(v8) = a3;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v7,
      byte_1801CCC8B,
      v6,
      v7,
      (__int64 *)&v9,
      (__int64)&v8);
  }
}
