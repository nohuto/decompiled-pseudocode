/*
 * XREFs of ?FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z @ 0x19E4EA
 * Callers:
 *     ?FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z @ 0x19E4EA (-FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?SetupFakeMDIAppStuff@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x19E522 (-SetupFakeMDIAppStuff@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 * Callees:
 *     ?FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z @ 0x19E4EA (-FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z.c)
 */

struct tagWND *__thiscall FindFakeMDIChild(_DWORD *this)
{
  char v1; // al
  struct tagWND *result; // eax
  int i; // esi
  struct tagWND *v4; // [esp+0h] [ebp-4h]

  v1 = *(_BYTE *)(this[5] + 23);
  if ( (v1 & 0x10) != 0 )
  {
    if ( (v1 & 0x40) != 0 && ((v1 & 1) != 0 || this[22]) )
      return (struct tagWND *)this;
    for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
    {
      result = FindFakeMDIChild(v4);
      if ( result )
        return result;
    }
  }
  return 0;
}
