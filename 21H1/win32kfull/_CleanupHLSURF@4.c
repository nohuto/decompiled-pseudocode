/*
 * XREFs of _CleanupHLSURF@4 @ 0xD4BFA
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

int __stdcall CleanupHLSURF(int a1)
{
  int v1; // edx
  int *i; // eax
  int v4; // esi
  int v5; // edx

  GreAcquireHmgrSemaphore();
  LOBYTE(v1) = 18;
  for ( i = (int *)HmgSafeNextObjt(0, v1); i; i = (int *)HmgSafeNextObjt(v4, v5) )
  {
    v4 = *i;
    if ( !*i )
      break;
    bhLSurfDestroyLogicalSurfaceObject(i, 1, a1);
    LOBYTE(v5) = 18;
  }
  return GreReleaseHmgrSemaphore();
}
