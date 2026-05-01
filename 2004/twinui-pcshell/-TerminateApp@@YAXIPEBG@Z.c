/*
 * XREFs of ?TerminateApp@@YAXIPEBG@Z @ 0x18045EB50
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18045D7D0 (-Run@-$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F8394 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x180456F18 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 */

void __fastcall TerminateApp(DWORD dwProcessId, const unsigned __int16 *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  char *v5; // rbx
  signed int LastError; // eax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v5 = (char *)OpenProcess(1u, 0, dwProcessId);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !TerminateProcess(v5, 0xFFFFFFFF) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  v7 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                   v4,
                   _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
  {
    v13 = 0x2000000LL;
    LODWORD(v12) = v3;
    v11 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned __int8 *)dword_180526BCC,
      v9,
      v10,
      (const WCHAR **)&v11,
      (__int64)&v12,
      (__int64)&v13);
  }
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
}
