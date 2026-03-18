/*
 * XREFs of ?xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z @ 0xC3566
 * Callers:
 *     _xxxTranslateAccelerator@12 @ 0xA8452 (_xxxTranslateAccelerator@12.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YGHABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0xC35C0 (-UT_FindTopLevelMenuIndex@@YGHABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

int __fastcall xxxTA_AccelerateMenu(void *a1, int **a2, unsigned int a3, unsigned int *a4)
{
  int v5; // ecx
  unsigned int TopLevelMenuIndex; // edi
  int v7; // ebx
  unsigned int *v9; // eax
  unsigned int *v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // esi
  unsigned int v15; // [esp-8h] [ebp-2Ch]
  _DWORD v16[2]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+14h] [ebp-10h]
  _DWORD *v18; // [esp+18h] [ebp-Ch]
  void *v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h] BYREF

  v19 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v16, 0);
  v17 = 0;
  v20 = 0;
  if ( SmartObjStackRef<tagMENU>::operator==(a2, v5) )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex();
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v9 = (unsigned int *)a2[2];
  v7 = 2;
  if ( !v9 )
    v9 = (unsigned int *)**a2;
  xxxSendMessage(v19, *v9, 0);
  if ( TopLevelMenuIndex >= *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) )
    goto LABEL_3;
  v18 = (_DWORD *)(*(_DWORD *)(**a2 + 56) + 80 * TopLevelMenuIndex);
  v10 = (unsigned int *)v18[2];
  if ( v10 )
  {
    v15 = *v10;
    *a4 = *v10;
    xxxSendMessage(v19, v15, TopLevelMenuIndex);
    if ( TopLevelMenuIndex >= *(_DWORD *)(*(_DWORD *)(**a2 + 20) + 24) )
    {
LABEL_3:
      *a4 = 0;
      v7 = 0;
      goto LABEL_4;
    }
    v11 = *(_DWORD *)(*v18 + 4) & 3;
  }
  else
  {
    v11 = 0;
  }
  v12 = v17;
  if ( !v17 )
    v12 = *(_DWORD *)v16[0];
  v13 = (int)a2[2];
  v20 = v12;
  if ( !v13 )
    v13 = **a2;
  v14 = MNLookUpItem(v13, a3, 0, &v20);
  SmartObjStackRefBase<tagMENU>::operator=(v16, v20);
  if ( !v14 )
    goto LABEL_3;
  if ( (*(_BYTE *)(*v14 + 4) & 3) != 0 || v11 )
    v7 = 3;
LABEL_4:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v16);
  return v7;
}
