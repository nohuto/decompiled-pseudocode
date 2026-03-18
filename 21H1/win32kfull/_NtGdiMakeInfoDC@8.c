/*
 * XREFs of _NtGdiMakeInfoDC@8 @ 0x220E50
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiMakeInfoDC(HDC a1, int a2)
{
  int InfoDC; // esi
  DC *v4[3]; // [esp+4h] [ebp-Ch] BYREF

  InfoDC = 0;
  v4[1] = 0;
  v4[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    InfoDC = DC::bMakeInfoDC(v4[0], a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  }
  return InfoDC;
}
