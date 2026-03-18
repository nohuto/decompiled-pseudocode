/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z @ 0x8EDE4
 * Callers:
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     __SetMenuDefaultItem@12 @ 0xC68A6 (__SetMenuDefaultItem@12.c)
 *     ?UnlockPopupMenuWindow@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z @ 0x196A86 (-UnlockPopupMenuWindow@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z.c)
 *     ?SetupFakeMDIAppStuff@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x19E522 (-SetupFakeMDIAppStuff@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall SmartObjStackRef<tagMENU>::operator==(int **this, int *a2)
{
  int *v2; // eax

  v2 = this[2];
  if ( !v2 )
    v2 = (int *)**this;
  return v2 == a2;
}
