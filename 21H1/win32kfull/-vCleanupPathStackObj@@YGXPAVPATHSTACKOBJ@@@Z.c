/*
 * XREFs of ?vCleanupPathStackObj@@YGXPAVPATHSTACKOBJ@@@Z @ 0x1E57B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vCleanupPathStackObj(struct PATHSTACKOBJ *a1)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(*((_DWORD *)a1 + 2) + 16) )
      EPATHOBJ::vFreeBlocks(a1);
  }
}
