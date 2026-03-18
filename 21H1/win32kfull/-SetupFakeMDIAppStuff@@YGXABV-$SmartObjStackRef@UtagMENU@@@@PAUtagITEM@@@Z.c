/*
 * XREFs of ?SetupFakeMDIAppStuff@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x19E522
 * Callers:
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z @ 0x8EDE4 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?_SetCloseDefault@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xBA25A (-_SetCloseDefault@@YGXABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z @ 0x19E4EA (-FindFakeMDIChild@@YGPAUtagWND@@PAU1@@Z.c)
 *     __GetMenuDefaultItem@12 @ 0x1B79A5 (__GetMenuDefaultItem@12.c)
 */

_DWORD *__fastcall SetupFakeMDIAppStuff(int a1, _DWORD *a2)
{
  _DWORD *v4; // esi
  struct tagWND *FakeMDIChild; // eax
  int v7; // [esp-4h] [ebp-1Ch]
  int *v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v8, 0);
  v7 = a2[2];
  v8[2] = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v8, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==(v8, 0) && *(_DWORD *)(**(_DWORD **)a1 + 52) )
  {
    v4 = *(_DWORD **)(**(_DWORD **)a1 + 52);
    if ( (*(_BYTE *)(v4[5] + 13) & 2) == 0 && _GetMenuDefaultItem(1) == -1 )
      _SetCloseDefault();
    FakeMDIChild = FindFakeMDIChild(v4);
    if ( FakeMDIChild )
      *(_DWORD *)(*a2 + 32) = *(_DWORD *)FakeMDIChild;
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v8);
}
