/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YGHABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0xC35C0
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z @ 0xC3566 (-xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z.c)
 *     _xxxHiliteMenuItem@16 @ 0x1A6B5B (_xxxHiliteMenuItem@16.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z @ 0x1C032 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?ItemContainingSubMenu@@YGHABV?$SmartObjStackRef@UtagMENU@@@@K@Z @ 0x1A6ADA (-ItemContainingSubMenu@@YGHABV-$SmartObjStackRef@UtagMENU@@@@K@Z.c)
 */

int __fastcall UT_FindTopLevelMenuIndex(int a1, unsigned int a2)
{
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // esi
  _DWORD v9[3]; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v9, 0);
  v4 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)v9[0];
  if ( !v4 )
    v4 = **(_DWORD **)a1;
  v5 = MNLookUpItem(v4, a2, 0, &v10);
  v9[2] = 0;
  v6 = v5;
  SmartObjStackRefBase<tagMENU>::operator=(v9, v10);
  if ( !v6 || v6[2] )
  {
    v7 = -1;
  }
  else
  {
    SmartObjStackRef<tagMENU>::operator==(v9, a1);
    v7 = ItemContainingSubMenu(a1);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v9);
  return v7;
}
