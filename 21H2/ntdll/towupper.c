/*
 * XREFs of towupper @ 0x1800923E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
