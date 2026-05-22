/*
 * XREFs of ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x1801686AC
 * Callers:
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x18016E50C (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@6@Z @ 0x180168928 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U_tl.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTrace::Telemetry_SpatialInteractionHeartbeat_ButtonCounters<7>(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // r9d
  __int16 v15; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v16; // [rsp+6Ah] [rbp+11h] BYREF
  int v17; // [rsp+6Ch] [rbp+13h] BYREF
  __int64 v18; // [rsp+70h] [rbp+17h] BYREF
  __int64 v19; // [rsp+78h] [rbp+1Fh] BYREF
  int v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+88h] [rbp+2Fh] BYREF
  int v22; // [rsp+90h] [rbp+37h]

  LOBYTE(v11) = SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(a1);
  if ( (_BYTE)v11 )
  {
    v11 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            v12,
            _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v11[1] > 5u )
    {
      LOBYTE(v11) = tlgKeywordOn(v11[1], 0x200000000000LL);
      if ( (_BYTE)v11 )
      {
        v19 = a7;
        v20 = 28;
        v21 = (__int64)&SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest;
        v17 = a5;
        v22 = 28;
        LOWORD(a6) = a4;
        v15 = a3;
        v16 = a2;
        v18 = a1;
        LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
                        v13,
                        (__int64)&v18,
                        (__int64)&v16,
                        (__int64)&v15,
                        (__int64)&a6,
                        (__int64)&v17,
                        (__int64)&v21,
                        (__int64)&v19);
      }
    }
  }
  return (char)v11;
}
