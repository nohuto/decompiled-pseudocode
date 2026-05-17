/*
 * XREFs of _AlpcGetMessageAttribute@8 @ 0x4B2E9EA0
 * Callers:
 *     <none>
 * Callees:
 *     _AlpcGetHeaderSize@4 @ 0x4B2E9EE0 (_AlpcGetHeaderSize@4.c)
 */

char *__stdcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (a2 & *a1) == 0 || ((a2 - 1) & a2) != 0 )
    return 0;
  else
    return (char *)a1 + AlpcGetHeaderSize(*a1 & (-2 * a2));
}
