/*
 * XREFs of _GreSetDIBColorTable@16 @ 0xC11D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0xF98E0 (-vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z.c)
 */

unsigned int __stdcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v4; // ebx
  DEVLOCKOBJ *v5; // ecx
  struct SURFACE *v6; // ecx
  int v7; // eax
  unsigned int v8; // edx
  int v9; // ebx
  int v11; // [esp+8h] [ebp-40h] BYREF
  _DWORD v12[3]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v13[20]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v14[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  __int16 v15; // [esp+38h] [ebp-10h]

  v4 = 0;
  memset(v12, 0, sizeof(v12));
  XDCOBJ::vLock((XDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    memset(v14, 0, sizeof(v14));
    v15 = 256;
    DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v13);
    DEVLOCKOBJ::vLockNoDrawing(v5, (struct XDCOBJ *)v12);
    v6 = XDCOBJ::pSurfaceEff((XDCOBJ *)v12);
    if ( *((_WORD *)v6 + 32) || !*((_DWORD *)v6 + 31) || (unsigned int)(*((_DWORD *)v6 + 15) - 1) > 2 )
    {
      EngSetLastError(6u);
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(v12[0] + 1020) + 184) |= 0xFu;
      v7 = *((_DWORD *)v6 + 22);
      v11 = v7;
      v8 = *(_DWORD *)(v7 + 20);
      if ( a2 < v8 )
      {
        v9 = a2 + a3;
        if ( a2 + a3 > v8 )
          v9 = *(_DWORD *)(v7 + 20);
        v4 = v9 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v11, a4, a2, v4);
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
    if ( v14[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v14);
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v4;
}
