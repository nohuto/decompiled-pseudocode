/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x975C2
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QAEXXZ @ 0xAD81A (-vUnMap@DEVLOCKBLTOBJ@@QAEXXZ.c)
 *     ?vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1227 (-vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  int v2; // edx
  int v3; // eax
  SURFACE *v4; // ecx

  v2 = 1;
  v3 = *((_DWORD *)this + 16);
  if ( v3 && *((_BYTE *)this + 77) && (*((_DWORD *)this + 10) & 0x1000) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 32) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v3 + 504);
      if ( v4 )
      {
        v2 = SURFACE::bUnMap(v4, this, 0);
        v3 = *((_DWORD *)this + 16);
      }
    }
    *(_DWORD *)(v3 + 32) &= ~1u;
  }
  return v2;
}
