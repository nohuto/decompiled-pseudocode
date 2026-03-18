/*
 * XREFs of EngDeleteFastMutex @ 0x1C0154AD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __stdcall EngDeleteFastMutex(HFASTMUTEX hfm)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  if ( hfm )
    Win32FreePool((__int64)hfm, v1, v2);
}
