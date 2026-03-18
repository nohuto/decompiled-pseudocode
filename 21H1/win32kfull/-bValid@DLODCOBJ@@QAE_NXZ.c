/*
 * XREFs of ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QAEXXZ @ 0xAAFAA (-vClearRenderState@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QAEXXZ @ 0xAD81A (-vUnMap@DEVLOCKBLTOBJ@@QAEXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ @ 0xADB6A (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ.c)
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QAEHXZ @ 0xF5D67 (-bTightBoundsToRegion@DEVLOCKOBJ@@QAEHXZ.c)
 *     ?vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1227 (-vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ.c)
 *     ?vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1246 (-vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

bool __thiscall DLODCOBJ::bValid(DLODCOBJ *this)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)this )
    return *((_BYTE *)this + 13) != 0;
  return result;
}
