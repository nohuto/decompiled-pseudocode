/*
 * XREFs of _GreMoveTo@16 @ 0x1FFBFA
 * Callers:
 *     _NtGdiMoveTo@16 @ 0x213A4F (_NtGdiMoveTo@16.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 */

int __fastcall GreMoveTo(HDC a1, int a2, int a3, _DWORD *a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  _DWORD v8[3]; // [esp+8h] [ebp-1Ch] BYREF
  _DWORD v9[3]; // [esp+14h] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  v4 = 0;
  v10 = a2;
  v9[1] = 0;
  v9[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  v5 = v9[0];
  if ( !v9[0] )
    goto LABEL_14;
  if ( (*(_DWORD *)(v9[0] + 24) & 0x10000) != 0 )
  {
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
LABEL_14:
    EngSetLastError(6u);
    return v4;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(v9[0] + 1020) + 184) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v8, (struct XDCOBJ *)v9, 1026);
      if ( !v8[0] )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v9);
        return v4;
      }
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)v8,
        (struct _POINTFIX *)(*(_DWORD *)(v9[0] + 1020) + 8),
        (struct _POINTL *)(*(_DWORD *)(v9[0] + 1020) + 236),
        1u);
      v5 = v9[0];
    }
    v6 = *(_DWORD *)(v5 + 1020);
    *a4 = *(_DWORD *)(v6 + 236);
    a4[1] = *(_DWORD *)(v6 + 240);
  }
  *(_DWORD *)(*(_DWORD *)(v5 + 1020) + 236) = v10;
  *(_DWORD *)(*(_DWORD *)(v9[0] + 1020) + 240) = a3;
  *(_DWORD *)(*(_DWORD *)(v9[0] + 1020) + 184) |= 0x200u;
  *(_DWORD *)(*(_DWORD *)(v9[0] + 1020) + 184) &= ~0x100u;
  if ( (*(_BYTE *)(v9[0] + 172) & 1) == 0 )
    *(_DWORD *)(v9[0] + 168) = 0;
  XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return 1;
}
