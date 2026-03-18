/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00F6024
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00F5FCC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A5C40 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  HDC **v2; // rdi
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  HDC *v8; // rdx

  v2 = (HDC **)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_BYTE *)this + 49) )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        v7 = *((_QWORD *)this + 4);
        if ( (*(_DWORD *)(v4 + 44) & 1) == 0 && *(_QWORD *)(v4 + 496) )
        {
          SURFACE::bUnMap(*(SURFACE **)(v4 + 496), this, (struct DC *)v4);
          v7 = *((_QWORD *)this + 4);
        }
        *(_DWORD *)(v7 + 44) &= ~1u;
        v8 = *v2;
        if ( (*((_DWORD *)*v2 + 9) & 0x4000) != 0 && v8[59] && *((_DWORD *)v8 + 122) )
          GreUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x400000);
      }
    }
    else
    {
      v5 = *(_DWORD *)(v4 + 36);
      if ( (v5 & 0x4000) != 0 && (v5 & 0x40) != 0 && *(_QWORD *)(v4 + 472) && *(_DWORD *)(v4 + 488) )
      {
        v6 = *(_QWORD *)(v4 + 496);
        if ( v6 )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v6 + 272));
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v6 + 272));
        }
      }
    }
  }
}
