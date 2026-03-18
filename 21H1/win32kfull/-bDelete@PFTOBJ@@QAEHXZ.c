/*
 * XREFs of ?bDelete@PFTOBJ@@QAEHXZ @ 0xCD70C
 * Callers:
 *     ?bCleanupFontTable@@YGHPAPAVPFT@@@Z @ 0xCD626 (-bCleanupFontTable@@YGHPAPAVPFT@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall PFTOBJ::bDelete(PFTOBJ *this)
{
  int v2; // edx

  v2 = *(_DWORD *)this;
  if ( !*(_DWORD *)(*(_DWORD *)this + 16) )
  {
    Win32FreePool(*(_DWORD *)this);
    *(_DWORD *)this = 0;
    v2 = 0;
  }
  return v2 == 0;
}
