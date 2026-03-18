/*
 * XREFs of __GetMenuDefaultItem@12 @ 0x1B79A5
 * Callers:
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     ?SetupFakeMDIAppStuff@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x19E522 (-SetupFakeMDIAppStuff@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     __GetMenuDefaultItem@12 @ 0x1B79A5 (__GetMenuDefaultItem@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     __GetMenuDefaultItem@12 @ 0x1B79A5 (__GetMenuDefaultItem@12.c)
 */

int __fastcall _GetMenuDefaultItem(int a1, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int *v6; // ebx
  int v7; // edx
  int v8; // eax
  int MenuDefaultItem; // esi
  _DWORD v11[3]; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v13 = a2;
  v4 = 0;
  SmartObjStackRefBase<tagMENU>::Init(v11, 0);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(int **)(a1 + 56);
  v11[2] = 0;
  v7 = *(_DWORD *)(v5 + 24);
  v12 = v7;
  if ( v7 <= 0 )
    goto LABEL_14;
  while ( 1 )
  {
    v8 = *(_DWORD *)(*v6 + 4);
    if ( (v8 & 0x1000) != 0 && ((v8 & 3) == 0 || (a3 & 1) != 0) )
      break;
    ++v4;
    v6 += 20;
    if ( v4 >= v7 )
      goto LABEL_10;
  }
  if ( (a3 & 2) != 0 && v6[2] )
  {
    SmartObjStackRefBase<tagMENU>::operator=(v11, v6[2]);
    MenuDefaultItem = _GetMenuDefaultItem(a3);
    if ( MenuDefaultItem != -1 )
      goto LABEL_15;
    v7 = v12;
  }
LABEL_10:
  if ( v4 >= v7 )
  {
LABEL_14:
    MenuDefaultItem = -1;
  }
  else if ( v13 )
  {
    MenuDefaultItem = v4;
  }
  else
  {
    MenuDefaultItem = *(_DWORD *)(*v6 + 8);
  }
LABEL_15:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v11);
  return MenuDefaultItem;
}
