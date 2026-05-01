/*
 * XREFs of ?CoreInputViewOcclusionChanged_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEBGAEAURect@Foundation@6@22@Z @ 0x18035BF28
 * Callers:
 *     ??$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEAGAEAURect@Foundation@5@AEAU675@AEAU675@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@$$QEAPEAGAEAURect@Foundation@5@33@Z @ 0x180356DCC (--$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Wind.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x180356924 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@444444444444@Z @ 0x180358960 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged_(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int *a5,
        int *a6,
        int *a7)
{
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  int v15; // [rsp+A8h] [rbp-11h] BYREF
  int v16; // [rsp+ACh] [rbp-Dh] BYREF
  int v17; // [rsp+B0h] [rbp-9h] BYREF
  int v18; // [rsp+B4h] [rbp-5h] BYREF
  int v19; // [rsp+B8h] [rbp-1h] BYREF
  int v20; // [rsp+BCh] [rbp+3h] BYREF
  int v21; // [rsp+C0h] [rbp+7h] BYREF
  int v22; // [rsp+C4h] [rbp+Bh] BYREF
  int v23; // [rsp+C8h] [rbp+Fh] BYREF
  int v24; // [rsp+CCh] [rbp+13h] BYREF
  int v25; // [rsp+D0h] [rbp+17h] BYREF
  int v26; // [rsp+D4h] [rbp+1Bh] BYREF
  int v27; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v30; // [rsp+108h] [rbp+4Fh] BYREF

  v30 = a1;
  v10 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
          a1,
          _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v10[1] > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn(v10[1], 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v28 = a4;
      v26 = a3;
      v27 = a2;
      LODWORD(v30) = a7[3];
      v15 = a7[2];
      v16 = a7[1];
      v17 = *a7;
      v29 = 0x1000000LL;
      v18 = a6[3];
      v19 = a6[2];
      v20 = a6[1];
      v21 = *a6;
      v22 = a5[3];
      v23 = a5[2];
      v24 = a5[1];
      v25 = *a5;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v13,
                      (unsigned __int8 *)dword_18051B181,
                      v11,
                      v12,
                      (__int64)&v29,
                      (__int64)&v27,
                      (__int64)&v26,
                      (const WCHAR **)&v28,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v15,
                      (__int64)&v30);
    }
  }
  return (char)v10;
}
