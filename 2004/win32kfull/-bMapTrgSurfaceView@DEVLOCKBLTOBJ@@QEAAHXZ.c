/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C001C244
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C001C188 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00EBAA8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029B7CC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rsi
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // ebp

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( !v3 )
    return 1LL;
  if ( !*((_BYTE *)this + 97) )
    return 1LL;
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 496);
  if ( !v4 )
    return 1LL;
  v5 = SURFACE::Map(*(_QWORD *)(v3 + 496), this, v3);
  if ( v5 <= 1 )
  {
    if ( (*(_DWORD *)(v4 + 112) & 0x800) != 0 )
    {
      if ( *(_QWORD *)(v4 + 248) )
      {
        if ( (unsigned int)bHookRedir(v1) )
          *((_DWORD *)this + 18) |= 0x400u;
      }
    }
    if ( (*(_DWORD *)(v4 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
      *((_DWORD *)this + 18) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 18) |= 0x40u;
    return 1LL;
  }
  return v5 != 2;
}
