/*
 * XREFs of _MNInitUAHMenuItem@12 @ 0xB657C
 * Callers:
 *     ?xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUtagWND@@@Z @ 0xB6372 (-xxxSendMenuDrawItemMessage@@YGXPAUHDC__@@IABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@HHPAUta.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F (-xxxMNGetBitmapSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MNInitUAHMenuItem(_DWORD *a1, int a2, int *a3)
{
  int result; // eax

  *a3 = (a2 - a1[14]) / 80;
  result = a1[5];
  if ( (*(_BYTE *)(result + 20) & 1) != 0 )
    qmemcpy(a3 + 9, a1 + 21, 0x14u);
  qmemcpy(a3 + 1, (const void *)(a2 + 36), 0x20u);
  return result;
}
