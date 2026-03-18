/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FACFC
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00795B8 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00FADA0 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FAE08 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  DC **v10; // rsi
  DC *v11; // rdx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // r9

  v7 = 1;
  if ( !a2 )
    goto LABEL_3;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_3;
  v10 = (DC **)((char *)this + 104);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), *(HDC *)v8);
  v11 = *v10;
  if ( !*v10 || !*((_BYTE *)v10 + 17) )
  {
LABEL_6:
    v7 = 0;
LABEL_3:
    *((_QWORD *)this + 13) = 0LL;
    return v7;
  }
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v12 & 1) != 0 && (v12 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
  {
    *((_DWORD *)v11 + 9) |= 0x4000u;
    DC::pSurface(*v10, *((struct SURFACE **)this + 16));
    *((_DWORD *)this + 18) |= 0x20u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, (int)v11) )
  {
    if ( a4 )
    {
      *((_DWORD *)*v10 + 11) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v10, v13, v14);
    DLODCOBJ::vUnlock((DLODCOBJ *)v10);
    goto LABEL_6;
  }
  return v7;
}
