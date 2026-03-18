/*
 * XREFs of _DEVLOCKOBJ_bPrepareTrgDcoWrap@8 @ 0x838D0
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0x83990 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 */

int __stdcall DEVLOCKOBJ_bPrepareTrgDcoWrap(DEVLOCKOBJ *a1, int *a2)
{
  int result; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // eax

  result = 1;
  if ( !a2 )
    goto LABEL_14;
  v3 = *a2;
  if ( (*(_DWORD *)(*a2 + 24) & 0x200) == 0 )
    goto LABEL_14;
  v4 = *(_DWORD *)(v3 + 36);
  XDCOBJ::vLock((DEVLOCKOBJ *)((char *)a1 + 20), *(HDC *)v3);
  v5 = *((_DWORD *)a1 + 5);
  v6 = *(_DWORD *)(v4 + 880);
  if ( !v5 || !*((_BYTE *)a1 + 33) )
  {
LABEL_13:
    result = 0;
LABEL_14:
    *((_DWORD *)a1 + 5) = 0;
    return result;
  }
  v7 = *(_DWORD *)(*a2 + 24);
  if ( (v7 & 1) != 0 && (v7 & 0x4000) == 0 && v6 && !*((_DWORD *)a1 + 9) )
  {
    *(_DWORD *)(v5 + 24) |= 0x4000u;
    DC::pSurface(*((DC **)a1 + 5), (struct SURFACE *)(v6 - 16));
    *((_DWORD *)a1 + 3) |= 0x10u;
  }
  if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 && !DEVLOCKOBJ::bMapTrgSurfaceView(a1) )
  {
    DEVLOCKOBJ::vClearRenderState(a1);
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)a1 + 20));
    goto LABEL_13;
  }
  return 1;
}
