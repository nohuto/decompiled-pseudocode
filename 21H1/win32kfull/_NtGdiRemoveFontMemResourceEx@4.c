/*
 * XREFs of _NtGdiRemoveFontMemResourceEx@4 @ 0x213CD9
 * Callers:
 *     <none>
 * Callees:
 *     _GreRemoveFontMemResourceEx@4 @ 0x1EBC87 (_GreRemoveFontMemResourceEx@4.c)
 */

int __stdcall NtGdiRemoveFontMemResourceEx(void *a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0;
}
