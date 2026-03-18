/*
 * XREFs of _MNLookUpItem@16 @ 0x32010
 * Callers:
 *     _xxxSetMenuItemInfo@20 @ 0x1DCEA (_xxxSetMenuItemInfo@20.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _xxxMNCanClose@4 @ 0x31A3A (_xxxMNCanClose@4.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     ?MenuItemState@@YGKABV?$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z @ 0xBA210 (-MenuItemState@@YGKABV-$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z.c)
 *     __GetMenuState@12 @ 0xBFC42 (__GetMenuState@12.c)
 *     ?xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z @ 0xC3566 (-xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YGHABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0xC35C0 (-UT_FindTopLevelMenuIndex@@YGHABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     __SetMenuDefaultItem@12 @ 0xC68A6 (__SetMenuDefaultItem@12.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

_DWORD *__fastcall MNLookUpItem(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  PKTHREAD CurrentThread; // ebx
  int v6; // esi
  int *ThreadWin32Thread; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  int v13; // edx
  int v14; // eax
  PKTHREAD v15; // edi
  int v16; // esi
  int *v17; // eax
  _DWORD *v18; // ecx
  int *v20; // [esp+Ch] [ebp-18h] BYREF
  int v21; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  _DWORD *v24; // [esp+1Ch] [ebp-8h]
  unsigned int v25; // [esp+20h] [ebp-4h]
  int v26; // [esp+2Ch] [ebp+8h]
  int v27; // [esp+30h] [ebp+Ch]

  v25 = a2;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v20 = (int *)gSmartObjNullRef;
  v21 = *(_DWORD *)(v6 + 840);
  *(_DWORD *)(v6 + 840) = &v21;
  v22 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a1 )
    goto LABEL_30;
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
  if ( !v9 )
    goto LABEL_30;
  v10 = v25;
  if ( v25 == -1 )
    goto LABEL_30;
  if ( a3 )
  {
    if ( v25 < v9 )
    {
      v11 = *(_DWORD *)(a1 + 56) + 80 * v25;
      if ( a4 )
        *a4 = a1;
      goto LABEL_31;
    }
LABEL_30:
    v11 = 0;
LABEL_31:
    v12 = (_DWORD *)v11;
    goto LABEL_32;
  }
  v12 = *(_DWORD **)(a1 + 56);
  v13 = 0;
  v26 = 0;
  if ( v9 <= 0 )
  {
LABEL_21:
    if ( SmartObjStackRef<tagMENU>::operator==(&v20, v10) )
    {
      v12 = 0;
    }
    else
    {
      if ( a4 )
      {
        v14 = v22;
        if ( !v22 )
          v14 = *v20;
        *a4 = v14;
      }
      v12 = v24;
    }
    goto LABEL_32;
  }
  while ( 1 )
  {
    v23 = v12[2];
    v27 = *(_DWORD *)(*v12 + 8);
    if ( !v23 )
      break;
    if ( v27 == v10 )
    {
      v22 = 0;
      SmartObjStackRefBase<tagMENU>::operator=(a1);
      v24 = v12;
    }
    v11 = MNLookUpItem(0, a4);
    if ( v11 )
      goto LABEL_31;
    v10 = v25;
    v13 = v26;
LABEL_20:
    ++v13;
    v12 += 20;
    v26 = v13;
    if ( v13 >= *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24) )
      goto LABEL_21;
  }
  if ( v27 != v10 )
    goto LABEL_20;
  if ( a4 )
    *a4 = a1;
LABEL_32:
  v15 = KeGetCurrentThread();
  v16 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    v17 = (int *)PsGetThreadWin32Thread(v15);
    if ( v17 )
      v16 = *v17;
  }
  if ( v20 != (int *)gSmartObjNullRef && !--v20[1] )
  {
    if ( *((_BYTE *)v20 + 8) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v20);
  }
  v18 = *(_DWORD **)(v16 + 840);
  if ( v18 )
    *(_DWORD *)(v16 + 840) = *v18;
  return v12;
}
