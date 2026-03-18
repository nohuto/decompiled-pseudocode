/*
 * XREFs of _EditionEdgyResetCurrentFrame@0 @ 0x16F120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionEdgyResetCurrentFrame()
{
  int result; // eax

  result = *(_DWORD *)(_grpdeskRitInput + 140);
  if ( result )
    *(_DWORD *)(result + 204) = 0;
  return result;
}
