/*
 * XREFs of ?SpatialInteractionEyeGaze_CombinedGaze_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXMMMMMM@Z @ 0x1800DC53C
 * Callers:
 *     ??$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAM00000@Z @ 0x1800DAFC4 (--$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContin.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x1800896F0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D41EC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::SpatialInteractionEyeGaze_CombinedGaze_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  float v10; // [rsp+50h] [rbp-20h] BYREF
  float v11; // [rsp+54h] [rbp-1Ch] BYREF
  float v12; // [rsp+58h] [rbp-18h] BYREF
  float v13; // [rsp+5Ch] [rbp-14h] BYREF
  float v14[4]; // [rsp+60h] [rbp-10h] BYREF
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v15; // [rsp+80h] [rbp+10h] BYREF
  float v16; // [rsp+88h] [rbp+18h]
  float v17; // [rsp+90h] [rbp+20h]
  float v18; // [rsp+98h] [rbp+28h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = this;
  v7 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
         (__int64)this,
         _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v7[1] > 4u && tlgKeywordOn(v7[1], 2LL) )
  {
    *(float *)&v15 = a7;
    v10 = a6;
    v11 = a5;
    v12 = v18;
    v13 = v17;
    v14[0] = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1801CC997,
      v8,
      v9,
      (__int64)v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v15);
  }
}
