/*
 * XREFs of GrepSfmRemoveSurfaces @ 0x1C012A350
 * Callers:
 *     <none>
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C00971F0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00C3C58 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C00C49E4 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0108094 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 */

struct SfmState *GrepSfmRemoveSurfaces()
{
  struct SfmState *result; // rax
  char *v1; // rcx
  char *v2; // rbx
  SFMLOGICALSURFACE *v3; // rdi
  HLSURF v4; // rdx
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  result = gpSfmState;
  v1 = (char *)gpSfmState + 40;
  v2 = (char *)*((_QWORD *)gpSfmState + 5);
  while ( v2 != v1 )
  {
    v7 = 0LL;
    v3 = (SFMLOGICALSURFACE *)(v2 - 32);
    v4 = (HLSURF)*((_QWORD *)v2 - 4);
    v2 = *(char **)v2;
    v8 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v7, v4);
    v5 = v7;
    if ( v7 )
    {
      v6 = *((_DWORD *)v3 + 61);
      if ( (v6 & 0x10) != 0 )
        *((_DWORD *)v3 + 61) = v6 & 0xFFFFFFEF;
      else
        *((_DWORD *)v3 + 62) = 0;
      SFMLOGICALSURFACE::StopSfmStateTracking(v3, 0LL, gpSfmState);
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
      v7 = 0LL;
      bhLSurfDestroyLogicalSurfaceObject((__int64 *)v5, 1, 0);
    }
    SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v7);
    result = gpSfmState;
    v1 = (char *)gpSfmState + 40;
  }
  return result;
}
