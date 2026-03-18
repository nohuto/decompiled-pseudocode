/*
 * XREFs of _DEVLOCKOBJ_bDisposeTrgDcoWrap@4 @ 0x5A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 */

int __stdcall DEVLOCKOBJ_bDisposeTrgDcoWrap(DEVLOCKOBJ *a1)
{
  int result; // eax
  DC **v2; // edi
  int v3; // esi
  int v4; // esi
  int v5; // [esp+10h] [ebp-4h]

  result = 1;
  v2 = (DC **)((char *)a1 + 20);
  v5 = 1;
  v3 = *((_DWORD *)a1 + 5);
  if ( v3 && *((_BYTE *)a1 + 33) )
  {
    v4 = *(_DWORD *)(v3 + 36);
    if ( (*((_DWORD *)a1 + 3) & 0x1000) != 0 )
    {
      v5 = DEVLOCKOBJ::bUnMapTrgSurfaceView(a1);
      if ( (*((_BYTE *)a1 + 12) & 0x10) != 0 )
      {
        *((_DWORD *)*v2 + 6) &= ~0x4000u;
        DC::pSurface(*v2, *(struct SURFACE **)(v4 + 1820));
      }
      DEVLOCKOBJ::vClearRenderState(a1);
    }
    DLODCOBJ::vUnlock((DLODCOBJ *)v2);
    *v2 = 0;
    return v5;
  }
  return result;
}
