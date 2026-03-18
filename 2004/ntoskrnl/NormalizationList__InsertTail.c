/*
 * XREFs of NormalizationList__InsertTail @ 0x14058EE58
 * Callers:
 *     RtlpGetNormalization @ 0x140918410 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_140C0EEE0;
  if ( *off_140C0EEE0 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_140C0EEE0 = (_UNKNOWN **)a1;
  return result;
}
