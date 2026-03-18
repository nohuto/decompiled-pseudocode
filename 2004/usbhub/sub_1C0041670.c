/*
 * XREFs of sub_1C0041670 @ 0x1C0041670
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

void __fastcall sub_1C0041670(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  _DWORD *v5; // rax
  ULONG v6; // ecx

  if ( ReasonSpecificDataLength >= 0x30 && stru_1C006B480.Queue.ListEntry.Flink )
  {
    v5 = sub_1C000F050((__int64)stru_1C006B480.Queue.ListEntry.Flink);
    v6 = (stru_1C006B480.Dpc.TargetInfoAsUlong << 12) + 5280;
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      ReasonSpecificData[4] = v5;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_1C0062F50;
    }
    *((_DWORD *)ReasonSpecificData + 10) = v6;
  }
}
