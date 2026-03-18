/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1404F73D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlSkBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_140C473E8 )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = qword_140C473E8;
    *((_DWORD *)ReasonSpecificData + 10) = dword_140C473F8 << 12;
  }
}
