/*
 * XREFs of ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x18016B704
 * Callers:
 *     _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180169EA4 (_lambda_0ef360edd2b0e079ee5004fb777ac3fe_--operator().c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180168C98 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U-$_tlgWrapperByRef@$0BA@.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        __int64 a8)
{
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  int v20; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+74h] [rbp-Ch] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h] BYREF
  __int64 v23; // [rsp+90h] [rbp+10h] BYREF

  v23 = a1;
  v11 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          a1,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v11[1] > 4u )
  {
    LOBYTE(v11) = tlgKeywordOn(v11[1], 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v16 = a7;
      v22 = a8;
      v19 = a4;
      v20 = a3;
      v17 = *(_DWORD *)(a8 + 16);
      v18 = a5;
      LOBYTE(v23) = a6;
      v21 = a2;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                      v14,
                      byte_1801D106F,
                      v12,
                      v13,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v23,
                      (__int64)&v18,
                      (__int64)&v17,
                      &v22,
                      (__int64)&v16);
    }
  }
  return (char)v11;
}
