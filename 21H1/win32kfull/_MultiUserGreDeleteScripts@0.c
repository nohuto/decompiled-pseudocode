/*
 * XREFs of _MultiUserGreDeleteScripts@0 @ 0xD4C74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MultiUserGreDeleteScripts()
{
  int result; // eax

  if ( cchDest[0] )
    return Win32FreePool(cchDest[0] - 2 * gdwOffset);
  return result;
}
