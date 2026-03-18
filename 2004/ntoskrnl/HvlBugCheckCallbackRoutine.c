/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x1404F3710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140C47388 )
  {
    if ( (*((_DWORD *)qword_140C47388 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_140C47388;
      *((_DWORD *)ReasonSpecificData + 10) = dword_140C47398 << 12;
    }
  }
}
