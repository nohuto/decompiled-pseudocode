/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0xABAC4
 * Callers:
 *     _DEVLOCKOBJ_bDisposeTrgDcoWrap@4 @ 0x5A8B0 (_DEVLOCKOBJ_bDisposeTrgDcoWrap@4.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 * Callees:
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z.c)
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 */

int __thiscall DEVLOCKOBJ::bUnMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  int v2; // eax
  struct XDCOBJ *v4; // [esp+0h] [ebp-8h]

  if ( DLODCOBJ::bValid((DEVLOCKOBJ *)((char *)this + 20)) )
  {
    v2 = *((_DWORD *)this + 3);
    if ( (v2 & 0x400) != 0 )
    {
      bUnHookRedir(v4);
      *((_DWORD *)this + 3) &= ~0x400u;
      v2 = *((_DWORD *)this + 3);
    }
    if ( (v2 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v4);
      *((_DWORD *)this + 3) &= ~0x2000u;
    }
    DEVLOCKOBJ::vFlushSpriteUpdates(this, 1);
  }
  return 1;
}
