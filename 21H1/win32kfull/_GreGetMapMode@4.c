/*
 * XREFs of _GreGetMapMode@4 @ 0x21D568
 * Callers:
 *     _IsSysFontAndDefaultMode@4 @ 0x1B847A (_IsSysFontAndDefaultMode@4.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall GreGetMapMode(HDC this)
{
  int v1; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  v3[1] = 0;
  v3[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_DWORD *)(v3[0] + 1020) + 144);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
