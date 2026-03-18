/*
 * XREFs of _GrepSfmRemoveSurfaces@0 @ 0xD3F28
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA (-StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

char *__stdcall GrepSfmRemoveSurfaces()
{
  char *result; // eax
  struct SfmState *v1; // esi
  SFMLOGICALSURFACE *v2; // edi
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  int v6[2]; // [esp+10h] [ebp-8h] BYREF

  result = (char *)gpSfmState + 24;
  v1 = (struct SfmState *)*((_DWORD *)gpSfmState + 6);
  if ( v1 != (struct SfmState *)((char *)gpSfmState + 24) )
  {
    v6[1] = 0;
    do
    {
      v6[0] = 0;
      v2 = (struct SfmState *)((char *)v1 - 20);
      v3 = *((_DWORD *)v1 - 5);
      v1 = *(struct SfmState **)v1;
      if ( v3 )
      {
        v4 = HmgLock(v3, 18);
        v6[0] = v4;
        if ( v4 )
        {
          v5 = *((_DWORD *)v2 + 39);
          if ( (v5 & 0x10) != 0 )
            *((_DWORD *)v2 + 39) = v5 & 0xFFFFFFEF;
          else
            *((_DWORD *)v2 + 40) = 0;
          SFMLOGICALSURFACE::StopSfmStateTracking(v2, 0, gpSfmState);
          _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
          v6[0] = 0;
          bhLSurfDestroyLogicalSurfaceObject((int *)v4, 1, 0);
        }
      }
      SFMLOGICALSURFACEREF_vDestructor(v6);
      result = (char *)gpSfmState + 24;
    }
    while ( v1 != (struct SfmState *)((char *)gpSfmState + 24) );
  }
  return result;
}
