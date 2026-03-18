/*
 * XREFs of wcstolX @ 0x1403D3B54
 * Callers:
 *     _wtol @ 0x1403D1AE0 (_wtol.c)
 * Callees:
 *     wcstoxlX @ 0x1403D390C (wcstoxlX.c)
 */

__int64 __fastcall wcstolX(wint_t *a1, wint_t **a2, unsigned int a3, int a4)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
