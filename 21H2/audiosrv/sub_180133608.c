/*
 * XREFs of sub_180133608 @ 0x180133608
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_18013698C @ 0x18013698C (sub_18013698C.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall sub_180133608(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 5u, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
