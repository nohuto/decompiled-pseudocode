/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1407D5820
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x140522A5C (KiIntSteerLogStatus.c)
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
