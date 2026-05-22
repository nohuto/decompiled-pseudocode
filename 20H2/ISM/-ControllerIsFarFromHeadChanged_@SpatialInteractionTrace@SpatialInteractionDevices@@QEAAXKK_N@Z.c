/*
 * XREFs of ?ControllerIsFarFromHeadChanged_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_N@Z @ 0x18016B54C
 * Callers:
 *     ??$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEA_N@Z @ 0x1801680D8 (--$ControllerIsFarFromHeadChanged@AEAKAEAKAEA_N@SpatialInteractionTrace@SpatialInteractionDevice.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18009CB0C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6DF4 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerIsFarFromHeadChanged_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        char a4)
{
  LPVOID v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  SpatialInteractionDevices::SpatialInteractionTrace *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = this;
  v7 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v7 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 2LL) )
  {
    LOBYTE(v13) = a4;
    v11 = a3;
    v12[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v10,
      byte_1801D0CCD,
      v8,
      v9,
      (__int64)v12,
      (__int64)&v11,
      (__int64)&v13);
  }
}
