/*
 * XREFs of NtSetDefaultUILanguage @ 0x140779A50
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 */

__int64 __fastcall NtSetDefaultUILanguage(__int16 a1)
{
  if ( a1 )
    return 0LL;
  else
    return ExpSetPendingUILanguage();
}
