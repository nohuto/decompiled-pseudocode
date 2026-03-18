/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A5A0 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1227 (-vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ.c)
 */

int __thiscall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // ecx
  DC **v8; // esi
  int v9; // edx
  int v10; // eax

  v3 = 1;
  if ( !a2 )
    goto LABEL_15;
  v5 = *(_DWORD *)a2;
  if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x200) == 0 )
    goto LABEL_15;
  v6 = *(_DWORD *)(v5 + 36);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 48), *(HDC *)v5);
  v7 = *(_DWORD *)(v6 + 880);
  v8 = (DC **)((char *)this + 48);
  v9 = *((_DWORD *)this + 12);
  if ( !v9 || !*((_BYTE *)this + 61) )
  {
LABEL_14:
    v3 = 0;
LABEL_15:
    *((_DWORD *)this + 12) = 0;
    return v3;
  }
  v10 = *(_DWORD *)(*(_DWORD *)a2 + 24);
  if ( (v10 & 1) != 0 && (v10 & 0x4000) == 0 && v7 && !*((_DWORD *)this + 21) )
  {
    *(_DWORD *)(v9 + 24) |= 0x4000u;
    DC::pSurface(*v8, (struct SURFACE *)(v7 - 16));
    *((_DWORD *)this + 10) |= 0x10u;
  }
  if ( !DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    if ( a3 )
    {
      *((_DWORD *)*v8 + 8) |= 1u;
      return 0;
    }
    DEVLOCKBLTOBJ::vUnMapSrc(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 48));
    DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 48));
    goto LABEL_14;
  }
  return v3;
}
