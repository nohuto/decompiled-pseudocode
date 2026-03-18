/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x1408652C0
 * Callers:
 *     <none>
 * Callees:
 *     SeEtwEnableCallback @ 0x1403DF4EC (SeEtwEnableCallback.c)
 */

void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
}
