/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z @ 0x1D48D3 (-vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 */

int __thiscall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  DC **v2; // esi
  int v3; // eax

  v2 = (DC **)((char *)this + 48);
  if ( DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 48)) )
  {
    v3 = *((_DWORD *)*v2 + 9);
    if ( (*((_BYTE *)this + 40) & 0x10) != 0 )
    {
      *((_DWORD *)*v2 + 6) &= ~0x4000u;
      DC::pSurface(*v2, *(struct SURFACE **)(v3 + 1820));
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v2);
    DLODCOBJ::vUnlock((DLODCOBJ *)v2);
    *v2 = 0;
  }
  return 1;
}
