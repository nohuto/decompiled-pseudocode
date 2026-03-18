/*
 * XREFs of _GreGetColorAdjustment@8 @ 0x1FD3EF
 * Callers:
 *     _NtGdiGetColorAdjustment@8 @ 0x212C5A (_NtGdiGetColorAdjustment@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreGetColorAdjustment(HDC a1, _WORD *a2)
{
  int v2; // esi
  int v4; // eax
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 0;
  memset(v6, 0, sizeof(v6));
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  v4 = v6[0];
  if ( v6[0] )
  {
    qmemcpy(a2, (const void *)(v6[0] + 112), 0x18u);
    a2[1] &= 3u;
    v2 = 1;
  }
  else
  {
    EngSetLastError(6u);
    v4 = v6[0];
  }
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v2;
}
