/*
 * XREFs of _FreeImeHotKeys@0 @ 0xD3D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__stdcall FreeImeHotKeys()
{
  int *result; // eax
  int v1; // esi

  result = (int *)gpImeHotKeyListHeader;
  if ( gpImeHotKeyListHeader )
  {
    do
    {
      v1 = *result;
      Win32FreePool(result);
      result = (int *)v1;
      gpImeHotKeyListHeader = v1;
    }
    while ( v1 );
  }
  return result;
}
