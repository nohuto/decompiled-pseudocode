/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1246 (-vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ.c)
 */

int __thiscall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, HDC **a2, int a3, int a4)
{
  int result; // eax
  int v6; // edi
  DC **v7; // ebx
  HDC v8; // eax
  int v9; // ecx
  int v10; // eax

  result = 1;
  v6 = 0;
  if ( a2 && ((unsigned int)(*a2)[6] & 0x200) != 0 )
  {
    v7 = (DC **)((char *)this + 64);
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 64), **a2);
    if ( *((_DWORD *)this + 16) && *((_BYTE *)this + 77) )
    {
      v8 = (*a2)[6];
      if ( ((unsigned __int8)v8 & 1) != 0
        && ((unsigned __int16)v8 & 0x4000) == 0
        && *((_DWORD *)this + 20)
        && !*((_DWORD *)this + 24) )
      {
        *(_DWORD *)(*((_DWORD *)this + 16) + 24) |= 0x4000u;
        DC::pSurface(*v7, *((struct SURFACE **)this + 20));
        *((_DWORD *)this + 10) |= 0x20u;
      }
      if ( !*v7 )
        return 1;
      if ( !*((_BYTE *)this + 77) )
        return 1;
      if ( (*((_DWORD *)this + 10) & 0x1000) == 0 )
        return 1;
      v9 = *((_DWORD *)*v7 + 126);
      if ( !v9 )
        return 1;
      v10 = SURFACE::Map(v9, this, 0);
      if ( v10 != 2 )
      {
        if ( v10 == 1 )
          *((_DWORD *)this + 10) |= 0x80u;
        return 1;
      }
      if ( a4 )
      {
        *((_DWORD *)*v7 + 8) |= 1u;
        return v6;
      }
      DEVLOCKBLTOBJ::vUnMapTrg(this);
      DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 64));
      DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 64));
    }
    result = 0;
  }
  *((_DWORD *)this + 16) = 0;
  return result;
}
