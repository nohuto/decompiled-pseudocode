/*
 * XREFs of sub_18007EA31 @ 0x18007EA31
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_18007EA31(
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
  JUMPOUT(0x180005B8ELL);
}
