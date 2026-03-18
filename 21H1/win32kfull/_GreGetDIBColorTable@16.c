/*
 * XREFs of _GreGetDIBColorTable@16 @ 0x7B6B4
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0x7B830 (-vFill_rgbquads@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z.c)
 */

unsigned int __stdcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v4; // ebx
  DEVLOCKOBJ *v5; // ecx
  struct SURFACE *v6; // eax
  unsigned int v7; // ecx
  bool v8; // zf
  int v10; // eax
  unsigned int v11; // edx
  int v12; // ebx
  int v13; // [esp+8h] [ebp-40h] BYREF
  _DWORD v14[3]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v15[20]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v16[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  __int16 v17; // [esp+38h] [ebp-10h]

  v4 = 0;
  memset(v14, 0, sizeof(v14));
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( !a4 )
  {
    EngSetLastError(0x57u);
    goto LABEL_11;
  }
  if ( !v14[0] )
  {
    EngSetLastError(6u);
    goto LABEL_11;
  }
  memset(v16, 0, sizeof(v16));
  v17 = 256;
  DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v15);
  DEVLOCKOBJ::vLockNoDrawing(v5, (struct XDCOBJ *)v14);
  v6 = XDCOBJ::pSurfaceEff((XDCOBJ *)v14);
  v7 = *((_DWORD *)v6 + 15);
  if ( (*((_WORD *)v6 + 32) || !*((_DWORD *)v6 + 31)) && !*((_DWORD *)v6 + 22) || v7 > 3 || !v7 )
  {
    EngSetLastError(6u);
LABEL_8:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    v8 = v16[0] == 0;
    goto LABEL_9;
  }
  v10 = *((_DWORD *)v6 + 22);
  v13 = v10;
  v11 = *(_DWORD *)(v10 + 20);
  if ( a2 < v11 )
  {
    v12 = a2 + a3;
    if ( a2 + a3 > v11 )
      v12 = *(_DWORD *)(v10 + 20);
    v4 = v12 - a2;
    XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v13, a4, a2, v4);
    goto LABEL_8;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
  v8 = v16[0] == 0;
LABEL_9:
  if ( !v8 )
    DLODCOBJ::vUnlock((DLODCOBJ *)v16);
LABEL_11:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v4;
}
