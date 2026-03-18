/*
 * XREFs of ?_SetCloseDefault@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xBA25A
 * Callers:
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     ?SetupFakeMDIAppStuff@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x19E522 (-SetupFakeMDIAppStuff@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 * Callees:
 *     __SetMenuDefaultItem@12 @ 0xC68A6 (__SetMenuDefaultItem@12.c)
 */

int _SetCloseDefault()
{
  int result; // eax

  result = _SetMenuDefaultItem(0);
  if ( !result )
  {
    result = _SetMenuDefaultItem(0);
    if ( !result )
      return _SetMenuDefaultItem(0);
  }
  return result;
}
