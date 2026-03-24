/*
 * XREFs of NtSetDefaultUILanguage @ 0x14078BE30
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x14078C070 (ExpSetPendingUILanguage.c)
 */

__int64 __fastcall NtSetDefaultUILanguage(__int16 a1)
{
  if ( a1 )
    return 0LL;
  else
    return ExpSetPendingUILanguage();
}
