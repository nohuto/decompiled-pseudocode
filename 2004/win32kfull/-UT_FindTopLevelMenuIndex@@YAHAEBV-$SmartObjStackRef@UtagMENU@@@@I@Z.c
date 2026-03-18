/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C014E9A4
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014E90C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C024A0E4 (xxxHiliteMenuItem.c)
 * Callees:
 *     MNLookUpItem @ 0x1C00A0700 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C01148F8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C024A028 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v4 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)v9[0];
  if ( !v4 )
    v4 = **(_QWORD **)a1;
  v5 = MNLookUpItem(v4, a2, 0, &v10);
  v9[2] = 0LL;
  v6 = v5;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v10);
  if ( !v6 || v6[2] )
  {
    v7 = -1;
  }
  else
  {
    SmartObjStackRef<tagMENU>::operator==((__int64)v9, a1);
    v7 = ItemContainingSubMenu(a1);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
  return v7;
}
