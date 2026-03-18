/*
 * XREFs of _GreSetColorAdjustment@8 @ 0x1FD788
 * Callers:
 *     _NtGdiSetColorAdjustment@8 @ 0x214225 (_NtGdiSetColorAdjustment@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreSetColorAdjustment(HDC a1, const void *a2)
{
  int v2; // esi
  _DWORD v5[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = 0;
  memset(v5, 0, sizeof(v5));
  XDCOBJ::vLock((XDCOBJ *)v5, a1);
  if ( v5[0] )
  {
    qmemcpy((void *)(v5[0] + 112), a2, 0x18u);
    *(_WORD *)(v5[0] + 114) &= 3u;
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v5[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v5);
  return v2;
}
