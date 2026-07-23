/*
 * XREFs of _ZwSetDefaultUILanguage@4 @ 0x4B2F4270
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  return Wow64SystemServiceCall();
}
