/*
 * XREFs of DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E7F70
 * Callers:
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A4BE4 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E8040 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ_bPrepareTrgDcoWrap(DEVLOCKOBJ *this, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx

  v4 = 1;
  if ( !a2 )
    goto LABEL_2;
  v6 = *a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v7 = *(_QWORD *)(v6 + 48);
  XDCOBJ::vLock((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)v6);
  v8 = *((_QWORD *)this + 4);
  v9 = *(_QWORD *)(v7 + 1408);
  if ( !v8 || !*((_BYTE *)this + 49) )
  {
LABEL_14:
    v4 = 0;
LABEL_2:
    *((_QWORD *)this + 4) = 0LL;
    return v4;
  }
  v10 = *(_DWORD *)(*a2 + 36);
  if ( (v10 & 1) != 0 && (v10 & 0x4000) == 0 && v9 && !*((_QWORD *)this + 7) )
  {
    *(_DWORD *)(v8 + 36) |= 0x4000u;
    DC::pSurface(*((DC **)this + 4), (struct SURFACE *)(v9 - 24));
    *((_DWORD *)this + 6) |= 0x10u;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && !(unsigned int)DEVLOCKOBJ::bMapTrgSurfaceView(this) )
  {
    DEVLOCKOBJ::vClearRenderState(this);
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    goto LABEL_14;
  }
  return v4;
}
