/*
 * XREFs of NtSetDefaultUILanguage @ 0x140779A50
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 */

NTSTATUS __cdecl NtSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  if ( DefaultUILanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
