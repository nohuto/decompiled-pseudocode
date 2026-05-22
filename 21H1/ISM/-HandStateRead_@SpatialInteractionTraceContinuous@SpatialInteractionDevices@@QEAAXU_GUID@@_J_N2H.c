/*
 * XREFs of ?HandStateRead_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_J_N2H22@Z @ 0x1800DFFA4
 * Callers:
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800E1530 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D46AC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1800DDB70 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@U3@U-$_.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateRead_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        struct _GUID *a2,
        __int64 a3,
        char a4,
        bool a5,
        int a6,
        bool a7,
        bool a8)
{
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  bool v16; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v17[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v18; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  struct _GUID *v21; // [rsp+78h] [rbp-8h] BYREF
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v22; // [rsp+A0h] [rbp+20h] BYREF
  bool v23; // [rsp+B0h] [rbp+30h] BYREF

  v22 = this;
  v11 = 1000000 * a3 / qword_180209310;
  v12 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          (__int64)this,
          _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v12[1] > 5u && tlgKeywordOn(v12[1], 2LL) )
  {
    LOBYTE(v22) = a8;
    v23 = a7;
    v18 = a6;
    v16 = a5;
    v17[0] = a4;
    v19 = v11;
    v20 = a3;
    v21 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v15,
      byte_1801CDEC3,
      v13,
      v14,
      (__int64 *)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v18,
      (__int64)&v23,
      (__int64)&v22);
  }
}
