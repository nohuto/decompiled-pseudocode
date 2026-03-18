/*
 * XREFs of _NtGdiPtVisible@12 @ 0x1FEEF2
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 */

int __stdcall NtGdiPtVisible(HDC a1, LONG a2, LONG a3)
{
  int v3; // ebx
  DC *v4; // ecx
  struct REGION *v5; // eax
  int v6; // ecx
  struct REGION *v8; // [esp+8h] [ebp-54h] BYREF
  struct _POINTL v9; // [esp+Ch] [ebp-50h] BYREF
  DC *v10[3]; // [esp+14h] [ebp-48h] BYREF
  _BYTE v11[12]; // [esp+20h] [ebp-3Ch] BYREF
  _BYTE v12[20]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD v13[3]; // [esp+40h] [ebp-1Ch] BYREF
  char v14; // [esp+4Ch] [ebp-10h]
  char v15; // [esp+4Dh] [ebp-Fh]

  memset(v10, 0, sizeof(v10));
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    memset(v13, 0, sizeof(v13));
    v14 = 0;
    v3 = 1;
    v15 = 1;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v12, (struct XDCOBJ *)v10, 1);
    if ( (v12[12] & 1) != 0 )
    {
      if ( DC::prgnRao(v10[0]) )
        v5 = DC::prgnRao(v4);
      else
        v5 = DC::prgnVisSnap(v4);
      v8 = v5;
      v9.x = a2;
      v9.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, -2147483132);
      EXFORMOBJ::bXform((EXFORMOBJ *)v11, &v9, 1u);
      v6 = *((_DWORD *)v10[0] + 7) & 1;
      v9.x += *((_DWORD *)v10[0] + 2 * v6 + 262);
      v9.y += *((_DWORD *)v10[0] + 2 * v6 + 263);
      v3 = RGNOBJ::bInside((RGNOBJ *)&v8, &v9) == 2;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
    if ( v13[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v13);
  }
  else
  {
    EngSetLastError(6u);
    v3 = -1;
  }
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v3;
}
