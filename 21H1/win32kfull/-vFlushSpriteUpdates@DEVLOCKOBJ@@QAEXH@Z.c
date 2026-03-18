/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 * Callees:
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10 (-GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z.c)
 */

void __thiscall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct DC **v3; // esi
  struct DC *v4; // ecx
  SURFACE *v5; // edx
  struct DC *v6; // eax
  struct DC *v7; // eax
  int v8; // ecx
  int v9; // esi

  v3 = (struct DC **)((char *)this + 20);
  if ( DLODCOBJ::bValid((DEVLOCKOBJ *)((char *)this + 20)) )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 3) & 0x1000) != 0 )
      {
        v4 = *v3;
        if ( (*((_BYTE *)*v3 + 32) & 1) == 0 )
        {
          v5 = (SURFACE *)*((_DWORD *)*v3 + 126);
          if ( v5 )
          {
            SURFACE::bUnMap(v5, this, *v3);
            v4 = (struct DC *)*((_DWORD *)this + 5);
          }
        }
        *((_DWORD *)v4 + 8) &= ~1u;
        v6 = *v3;
        if ( (*((_DWORD *)*v3 + 6) & 0x4000) != 0 && *((_DWORD *)v6 + 122) )
        {
          if ( *((_DWORD *)v6 + 124) )
            GreUpdateSpriteDevLockEnd(
              (struct tagPOINT ***)v3,
              (struct tagMINIWINDOWINFO *)(*((_DWORD *)this + 3) & 0x400000));
        }
      }
    }
    else
    {
      v7 = *v3;
      v8 = *((_DWORD *)*v3 + 6);
      if ( (v8 & 0x4000) != 0 && (v8 & 0x40) != 0 )
      {
        if ( *((_DWORD *)v7 + 122) )
        {
          if ( *((_DWORD *)v7 + 124) )
          {
            v9 = *((_DWORD *)v7 + 126);
            if ( v9 )
            {
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v9 + 168));
              W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v9 + 168));
            }
          }
        }
      }
    }
  }
}
