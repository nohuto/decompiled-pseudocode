/*
 * XREFs of CleanupHLSURF @ 0x1C012B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0020138 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall CleanupHLSURF(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 *Objt; // rax
  __int64 v6; // rbx

  GreAcquireHmgrSemaphore();
  for ( i = 0LL; ; i = v6 )
  {
    LOBYTE(v2) = 18;
    Objt = (__int64 *)HmgSafeNextObjt(i, v2);
    if ( !Objt )
      break;
    v6 = *Objt;
    if ( !*Objt )
      break;
    bhLSurfDestroyLogicalSurfaceObject(Objt, 1, a1);
  }
  return GreReleaseHmgrSemaphore();
}
