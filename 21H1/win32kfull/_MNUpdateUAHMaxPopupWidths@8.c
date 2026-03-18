/*
 * XREFs of _MNUpdateUAHMaxPopupWidths@8 @ 0x1AB879
 * Callers:
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     ?xxxMNGetBitmapSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z @ 0x1AB44F (-xxxMNGetBitmapSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagWND@@HPAUHDC__@@@Z.c)
 *     _MNRefreshUAHCachedSizes@4 @ 0x1AB841 (_MNRefreshUAHCachedSizes@4.c)
 * Callees:
 *     <none>
 */

int __fastcall MNUpdateUAHMaxPopupWidths(int a1, int a2)
{
  int v2; // esi
  unsigned int i; // eax
  int v5; // ecx

  v2 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v5 = *(_DWORD *)(a1 + 4 * i + 84);
    if ( v5 <= *(_DWORD *)(a2 + 8 * i + 36) )
      v5 = *(_DWORD *)(a2 + 8 * i + 36);
    v2 += v5;
    *(_DWORD *)(a1 + 4 * i + 84) = v5;
  }
  return v2;
}
