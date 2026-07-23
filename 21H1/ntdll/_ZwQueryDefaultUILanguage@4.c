/*
 * XREFs of _ZwQueryDefaultUILanguage@4 @ 0x4B2F2DC0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return Wow64SystemServiceCall();
}
