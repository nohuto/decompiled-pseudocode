/*
 * XREFs of NtSetDefaultUILanguage @ 0x14078BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x14078C230 (ExpSetPendingUILanguage.c)
 */

NTSTATUS __cdecl NtSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  if ( DefaultUILanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
