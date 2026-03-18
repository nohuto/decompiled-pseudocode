/*
 * XREFs of _EditionPostInertiaMessage@24 @ 0x17C9FA
 * Callers:
 *     <none>
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 */

unsigned int __stdcall EditionPostInertiaMessage(
        int a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        int a6)
{
  if ( a6 )
    return _PostThreadMessage(a6, a2, a3, a4 | (a5 << 16));
  else
    return _PostMessage(*(_DWORD *)(a1 + 80), a2, a3, a4 | (a5 << 16));
}
