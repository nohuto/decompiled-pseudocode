/*
 * XREFs of sub_180086D87 @ 0x180086D87
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall sub_180086D87(
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
    AudSrvTraceLoggingErrorHelper("CAudioEndpointId::ToString", 188, a10);
  JUMPOUT(0x18001BEF9LL);
}
