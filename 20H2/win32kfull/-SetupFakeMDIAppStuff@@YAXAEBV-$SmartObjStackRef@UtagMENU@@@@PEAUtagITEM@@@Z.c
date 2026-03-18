/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023F06C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0109260 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C023F014 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025DBBC (_GetMenuDefaultItem.c)
 */

_QWORD *__fastcall SetupFakeMDIAppStuff(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  struct tagWND *FakeMDIChild; // rax
  _QWORD *v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = a2[2];
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v4);
  if ( (v10 || *v9[0]) && *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
  {
    v5 = *(_QWORD *)(**(_QWORD **)a1 + 80LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 21LL) & 2) == 0 )
    {
      v6 = v10;
      if ( !v10 )
        v6 = *v9[0];
      if ( (unsigned int)GetMenuDefaultItem(v6, 1LL, 1LL) == -1 )
        _SetCloseDefault(v9);
    }
    FakeMDIChild = FindFakeMDIChild((struct tagWND *)v5);
    if ( FakeMDIChild )
      *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)FakeMDIChild;
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
}
