/*
 * XREFs of _tlgKeywordOn @ 0x1800B2024
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18004B7F8 (_anonymous_namespace_--SendFramesReport.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x18004EA2C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800DB494 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
