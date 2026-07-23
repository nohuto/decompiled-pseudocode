/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x1403F3E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}
