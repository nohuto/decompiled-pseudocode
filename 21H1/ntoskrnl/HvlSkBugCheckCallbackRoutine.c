/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1404F3510
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
  if ( qword_140C47528 )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = qword_140C47528;
    *((_DWORD *)ReasonSpecificData + 10) = dword_140C47538 << 12;
  }
}
