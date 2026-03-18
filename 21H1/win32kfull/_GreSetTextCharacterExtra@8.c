/*
 * XREFs of _GreSetTextCharacterExtra@8 @ 0x2226B7
 * Callers:
 *     _xxxDrawMenuItem@24 @ 0xB61DA (_xxxDrawMenuItem@24.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxDrawState@32 @ 0x1AD06D (_xxxDrawState@32.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

unsigned int __fastcall GreSetTextCharacterExtra(HDC a1, int a2)
{
  unsigned int v3; // esi
  int v4; // ecx
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v6[1] = 0;
  v6[2] = 0;
  v3 = 0x80000000;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  if ( v6[0] )
  {
    v4 = *(_DWORD *)(v6[0] + 1020);
    v3 = *(_DWORD *)(v4 + 288);
    *(_DWORD *)(v4 + 288) = a2;
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v3;
}
