/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A96A
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QAEXXZ @ 0xAD81A (-vUnMap@DEVLOCKBLTOBJ@@QAEXXZ.c)
 *     ?vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1246 (-vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 */

int __thiscall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct DC **v2; // edi
  int v3; // eax
  struct DC *v4; // ecx
  SURFACE *v5; // edx
  struct XDCOBJ *v7; // [esp+0h] [ebp-8h]

  v2 = (struct DC **)((char *)this + 48);
  if ( *((_DWORD *)this + 12) && *((_BYTE *)this + 61) )
  {
    v3 = *((_DWORD *)this + 10);
    if ( (v3 & 0x400) != 0 )
    {
      bUnHookRedir(v7);
      *((_DWORD *)this + 10) &= ~0x400u;
      v3 = *((_DWORD *)this + 10);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v7);
      *((_DWORD *)this + 10) &= ~0x2000u;
      v3 = *((_DWORD *)this + 10);
    }
    if ( (v3 & 0x1000) != 0 )
    {
      v4 = *v2;
      if ( (*((_BYTE *)*v2 + 32) & 1) == 0 )
      {
        v5 = (SURFACE *)*((_DWORD *)*v2 + 126);
        if ( v5 )
        {
          SURFACE::bUnMap(v5, this, *v2);
          v4 = *v2;
        }
      }
      *((_DWORD *)v4 + 8) &= ~1u;
    }
  }
  return 1;
}
