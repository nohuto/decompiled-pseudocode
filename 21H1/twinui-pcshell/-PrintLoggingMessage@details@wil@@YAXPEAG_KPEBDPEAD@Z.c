/*
 * XREFs of ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x18011C708
 * Callers:
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18011CE2C (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180184384 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x18032EDC8 (-SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800331A8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180034980 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800CA410 (_alloca_probe.c)
 */

void __fastcall wil::details::PrintLoggingMessage(wchar_t *this, unsigned __int16 *a2, __int64 a3, va_list a4)
{
  wchar_t Buffer[2048]; // [rsp+20h] [rbp-1018h] BYREF

  if ( a3 )
  {
    if ( a4 )
    {
      StringCchPrintfW(Buffer, 2048LL, L"%hs", a3);
      StringCchVPrintfW(this, 2048LL, Buffer, a4);
    }
    else
    {
      StringCchPrintfW(this, 2048LL, L"%hs", a3);
    }
  }
  else
  {
    *this = 0;
  }
}
