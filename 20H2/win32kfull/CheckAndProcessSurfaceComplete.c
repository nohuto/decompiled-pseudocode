/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x1C026E760
 * Callers:
 *     <none>
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0097118 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C00971F0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0108094 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D08C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

SFMLOGICALSURFACE *__fastcall CheckAndProcessSurfaceComplete(HLSURF a1)
{
  HSPRITE v1; // rdx
  __int64 v2; // r9
  volatile signed __int32 *v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  struct DWMSPRITE *v7; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v5, a1);
  if ( v5 )
  {
    v1 = *(HSPRITE *)(v5 + 296);
    v7 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v7, v1);
    v3 = (volatile signed __int32 *)v7;
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 29) == 3 )
        *((_DWORD *)v7 + 29) = 1;
      CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v3, 0, 0LL, v2);
      _InterlockedDecrement(v3 + 3);
    }
  }
  return SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v5);
}
