/*
 * XREFs of sub_18007F5C9 @ 0x18007F5C9
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18007F5C9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( a10 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Copy", 930, a10);
  JUMPOUT(0x18000602ELL);
}
