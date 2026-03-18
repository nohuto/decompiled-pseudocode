/*
 * XREFs of PspVsmLogBugCheckCallback @ 0x14057EE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PspVsmLogBugCheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( PspIumLogBuffer )
  {
    ReasonSpecificData[4] = PspIumLogBuffer;
    *((_DWORD *)ReasonSpecificData + 10) = 0x2000;
    *((_OWORD *)ReasonSpecificData + 1) = xmmword_140034FB0;
  }
}
