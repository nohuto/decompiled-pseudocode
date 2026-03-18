/*
 * XREFs of EngDeleteFastMutex @ 0x1C014E780
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __stdcall EngDeleteFastMutex(HFASTMUTEX hfm)
{
  if ( hfm )
    Win32FreePool((__int64)hfm);
}
