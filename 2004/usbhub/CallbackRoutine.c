/*
 * XREFs of CallbackRoutine @ 0x1C00416D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

void __fastcall CallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  _DWORD *v5; // rax
  int v6; // edx

  if ( ReasonSpecificDataLength >= 0x30 && stru_1C006B480.Queue.ListEntry.Flink )
  {
    v5 = sub_1C000F050((__int64)stru_1C006B480.Queue.ListEntry.Flink);
    v6 = 2928 * *((unsigned __int8 *)v5 + 2938);
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      ReasonSpecificData[1] = xmmword_1C0062F30;
      *((_QWORD *)ReasonSpecificData + 4) = *((_QWORD *)v5 + 382);
    }
    *((_DWORD *)ReasonSpecificData + 10) = v6;
  }
}
