/*
 * XREFs of _MNInitUAHMenu@12 @ 0xB75C2
 * Callers:
 *     _xxxSendUAHMenuMessage@16 @ 0xB6938 (_xxxSendUAHMenuMessage@16.c)
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxSendUAHInitMenuMessage@12 @ 0xB7560 (_xxxSendUAHInitMenuMessage@12.c)
 *     ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F (-xxxMNGetBitmapSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MNInitUAHMenu(int *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int result; // eax

  if ( a1 )
    v3 = *a1;
  else
    v3 = 0;
  *a3 = v3;
  a3[1] = a2;
  result = *(_DWORD *)(a1[5] + 20);
  a3[2] = result;
  return result;
}
