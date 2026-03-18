/*
 * XREFs of ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2 (-vDestructorNULL@DEVLOCKOBJ@@QAEXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 */

int __thiscall DEVLOCKOBJ::bDisposeTrgDcoWorker(DEVLOCKOBJ *this)
{
  DC **v2; // edi
  int v4; // esi
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 1;
  v2 = (DC **)((char *)this + 20);
  if ( DLODCOBJ::bValid((DEVLOCKOBJ *)((char *)this + 20)) )
  {
    v4 = *((_DWORD *)*v2 + 9);
    if ( (*((_DWORD *)this + 3) & 0x1000) != 0 )
    {
      v5 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_BYTE *)this + 12) & 0x10) != 0 )
      {
        *((_DWORD *)*v2 + 6) &= ~0x4000u;
        DC::pSurface(*v2, *(struct SURFACE **)(v4 + 1820));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    DLODCOBJ::vUnlock((DLODCOBJ *)v2);
    *v2 = 0;
  }
  return v5;
}
