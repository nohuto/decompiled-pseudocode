/*
 * XREFs of _FindCharPosition@8 @ 0x1B7A59
 * Callers:
 *     ?xxxMNItemSize@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPOINT@@@Z @ 0xB7256 (-xxxMNItemSize@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@HPAUHDC__@@PAUtagITEM@@HPAUtagPO.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     ?xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1AB5CD (-xxxMNRecalcTabStrings@@YGKPAUHDC__@@ABV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall FindCharPosition(__int16 *a1, __int16 a2)
{
  __int16 *v2; // esi
  int result; // eax
  __int16 v4; // cx
  __int16 v5; // di

  v2 = a1;
  result = 0;
  v4 = *a1;
  if ( v4 )
  {
    v5 = v4;
    do
    {
      if ( v5 == a2 )
        break;
      ++v2;
      ++result;
      v5 = *v2;
    }
    while ( *v2 );
  }
  return result;
}
