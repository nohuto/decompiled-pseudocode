/*
 * XREFs of _EditionInputExtensibilityCallout@8 @ 0x15AC2A
 * Callers:
 *     <none>
 * Callees:
 *     _xxxClientCallDevCallbackSimple@8 @ 0x193820 (_xxxClientCallDevCallbackSimple@8.c)
 */

int __stdcall EditionInputExtensibilityCallout(int a1, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(a2 + 4) == 1 )
    return xxxClientCallDevCallbackSimple(a1);
  result = *(_DWORD *)(a2 + 4) - 3;
  if ( *(_DWORD *)(a2 + 4) == 3 )
    return xxxClientCallDevCallbackSimple(a1);
  return result;
}
