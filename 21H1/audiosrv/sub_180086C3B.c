/*
 * XREFs of sub_180086C3B @ 0x180086C3B
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_180086C3B(
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
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 1059, a10);
  JUMPOUT(0x18001BD7ALL);
}
