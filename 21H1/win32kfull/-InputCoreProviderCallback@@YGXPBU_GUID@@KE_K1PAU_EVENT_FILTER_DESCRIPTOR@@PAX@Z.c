/*
 * XREFs of ?InputCoreProviderCallback@@YGXPBU_GUID@@KE_K1PAU_EVENT_FILTER_DESCRIPTOR@@PAX@Z @ 0x1564C2
 * Callers:
 *     <none>
 * Callees:
 *     ?CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x156472 (-CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 */

void __stdcall InputCoreProviderCallback(
        const struct _GUID *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _EVENT_FILTER_DESCRIPTOR *a6,
        void *a7)
{
  if ( !UserIsDisconnectConnection() )
    InputTraceLogging::Cursor::CursorSuppressionState();
}
