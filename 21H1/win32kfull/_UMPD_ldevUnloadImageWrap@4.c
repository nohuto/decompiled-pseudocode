/*
 * XREFs of _UMPD_ldevUnloadImageWrap@4 @ 0x2111D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall UMPD_ldevUnloadImageWrap(void *a1)
{
  if ( a1 )
    EngFreeMem(a1);
}
