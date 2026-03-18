/*
 * XREFs of EngDeleteFastMutex @ 0x1C014C330
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __stdcall EngDeleteFastMutex(HFASTMUTEX hfm)
{
  if ( hfm )
    Win32FreePool((__int64)hfm);
}
