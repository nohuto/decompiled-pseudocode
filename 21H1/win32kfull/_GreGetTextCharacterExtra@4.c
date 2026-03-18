/*
 * XREFs of _GreGetTextCharacterExtra@4 @ 0x22267D
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall GreGetTextCharacterExtra(HDC this)
{
  int v1; // esi
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  v3[1] = 0;
  v3[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v3, this);
  if ( v3[0] )
  {
    v1 = *(_DWORD *)(*(_DWORD *)(v3[0] + 1020) + 288);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  return v1;
}
