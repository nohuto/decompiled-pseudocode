/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FAE08
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FACFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0274540 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029BA9C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029E3D4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax
  SURFACE **v4; // r8
  SURFACE **v5; // rcx

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
  {
    v3 = *((_DWORD *)this + 18);
    if ( (v3 & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80));
      *((_DWORD *)this + 18) &= ~0x400u;
      v3 = *((_DWORD *)this + 18);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 18) &= ~0x2000u;
      v3 = *((_DWORD *)this + 18);
    }
    if ( (v3 & 0x1000) != 0 )
    {
      v4 = *(SURFACE ***)v1;
      v5 = *(SURFACE ***)v1;
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 1) == 0 && v4[62] )
      {
        SURFACE::bUnMap(v4[62], this, (struct DC *)v4);
        v5 = *(SURFACE ***)v1;
      }
      *((_DWORD *)v5 + 11) &= ~1u;
    }
  }
  return 1LL;
}
