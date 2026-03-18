/*
 * XREFs of _xxxMNChar@12 @ 0x197DEE
 * Callers:
 *     _xxxHandleMenuMessages@12 @ 0x195390 (_xxxHandleMenuMessages@12.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNKeyFilter@12 @ 0x1ACE4B (_xxxMNKeyFilter@12.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNSwitchToAlternateMenu@8 @ 0x19AA93 (_xxxMNSwitchToAlternateMenu@8.c)
 *     _xxxMNFindChar@16 @ 0x1ACD4F (_xxxMNFindChar@16.c)
 */

_DWORD *__fastcall xxxMNChar(int a1, int *a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // esi
  PKTHREAD v8; // eax
  int v9; // eax
  int v10; // esi
  unsigned int v11; // eax
  void (*v12)(void); // edi
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // esi
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // esi
  _BYTE **v23; // eax
  int v24; // ecx
  int v25; // esi
  PKTHREAD v26; // eax
  int v27; // eax
  int v28; // edx
  int v30; // [esp-4h] [ebp-64h]
  int v31; // [esp+Ch] [ebp-54h] BYREF
  int v32; // [esp+10h] [ebp-50h]
  int *v33; // [esp+14h] [ebp-4Ch]
  int v34; // [esp+18h] [ebp-48h]
  int v35; // [esp+1Ch] [ebp-44h]
  unsigned int v36; // [esp+20h] [ebp-40h]
  _DWORD v37[2]; // [esp+24h] [ebp-3Ch] BYREF
  int v38; // [esp+2Ch] [ebp-34h]
  int v39; // [esp+30h] [ebp-30h] BYREF
  int v40; // [esp+34h] [ebp-2Ch]
  int v41; // [esp+38h] [ebp-28h]
  int v42; // [esp+3Ch] [ebp-24h] BYREF
  int v43; // [esp+40h] [ebp-20h]
  int v44; // [esp+44h] [ebp-1Ch]
  _DWORD v45[3]; // [esp+48h] [ebp-18h] BYREF
  int v46; // [esp+54h] [ebp-Ch] BYREF
  int v47; // [esp+58h] [ebp-8h]
  int v48; // [esp+5Ch] [ebp-4h]

  v3 = a1;
  v33 = a2;
  v35 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v37, 0);
  v36 = 0;
  v31 = 0;
  v46 = 0;
  v32 = 0;
  v47 = 0;
  v48 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v30 = *(_DWORD *)(**(_DWORD **)v3 + 20);
  v38 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v37, v30);
  if ( (***(_DWORD ***)v3 & 0x8000) != 0 )
    return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v37);
  v4 = v38;
  if ( !v38 )
    v4 = *(_DWORD *)v37[0];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v42 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v42;
  v43 = v4;
  if ( v4 )
    HMLockObject(v4);
  v7 = *(_DWORD *)(**(_DWORD **)v3 + 24);
  v8 = KeGetCurrentThread();
  v9 = W32GetThreadWin32Thread(v8);
  v39 = *(_DWORD *)(v9 + 228);
  *(_DWORD *)(v9 + 228) = &v39;
  v40 = v7;
  if ( v7 )
    HMLockObject(v7);
  v10 = a3;
  v11 = xxxMNFindChar(*(_DWORD *)(**(_DWORD **)v3 + 40), &v31);
  v12 = (void (*)(void))ThreadUnlock1;
  v13 = v11;
  if ( v11 != -1 )
  {
    v34 = v11;
    while ( 1 )
    {
      v14 = v38;
      if ( !v38 )
        v14 = *(_DWORD *)v37[0];
      v15 = MNGetpItemFromIndex(v14, v13);
      if ( !v15 || (*(_BYTE *)(*(_DWORD *)v15 + 4) & 3) == 0 )
        break;
      v13 = xxxMNFindChar(v16, &v31);
      if ( v13 == v34 )
      {
        xxxMNCancel(v33, 0, 0, 0);
        goto LABEL_38;
      }
    }
    v17 = v16;
    v18 = v34;
    do
    {
      v19 = xxxMNFindChar(v16, &v31);
      v20 = v38;
      if ( !v38 )
        v20 = *(_DWORD *)v37[0];
      v21 = MNGetpItemFromIndex(v20, v19);
    }
    while ( v21 && (*(_BYTE *)(*(_DWORD *)v21 + 4) & 3) != 0 && v16 != v18 );
    v3 = v35;
    v12 = (void (*)(void))ThreadUnlock1;
    if ( v34 == v16 || v16 == v17 )
      v32 = 1;
    if ( v17 != -1 )
      goto LABEL_55;
    v10 = a3;
  }
  if ( (***(_BYTE ***)v3 & 1) == 0 || v10 != 32 )
    goto LABEL_66;
  if ( (***(_BYTE ***)v3 & 4) != 0 )
  {
    v17 = 0;
    v32 = 1;
    goto LABEL_55;
  }
  if ( !*(_DWORD *)(**(_DWORD **)v3 + 24) )
  {
LABEL_66:
    if ( (***(_BYTE ***)v3 & 1) != 0 )
    {
      if ( *(_DWORD *)(**(_DWORD **)v3 + 24) )
      {
        ThreadLockExchange(*(_DWORD *)(**(_DWORD **)v3 + 24), (int)&v39);
        SmartObjStackRefBase<tagMENU>::Init(v45, *(_DWORD *)(**(_DWORD **)v3 + 24));
        v45[2] = 0;
        v22 = xxxMNFindChar(0, &v31);
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v45);
        if ( v22 != -1 )
        {
          v10 = a3;
          goto LABEL_36;
        }
      }
    }
    v23 = *(_BYTE ***)v3;
    v24 = (***(_DWORD ***)v3 & 4) << 11;
    v34 = v24;
    if ( (**v23 & 1) == 0 )
      v34 = v24 | 0x10;
    if ( *(_DWORD *)(**(_DWORD **)v3 + 4) )
    {
      v25 = *(_DWORD *)(**(_DWORD **)v3 + 4);
      v26 = KeGetCurrentThread();
      v27 = W32GetThreadWin32Thread(v26);
      v46 = *(_DWORD *)(v27 + 228);
      *(_DWORD *)(v27 + 228) = &v46;
      v47 = v25;
      HMLockObject(v25);
      if ( *(_DWORD *)(**(_DWORD **)v3 + 20) )
        v28 = **(_DWORD **)(**(_DWORD **)v3 + 20);
      else
        v28 = 0;
      v17 = xxxSendMessage(*(void **)(**(_DWORD **)v3 + 4), (unsigned __int16)a3 | (v34 << 16), v28);
      v12();
    }
    else
    {
      v17 = v36;
    }
    if ( HIWORD(v17) )
    {
      if ( HIWORD(v17) != 1 )
      {
        if ( HIWORD(v17) == 2 )
        {
          v32 = 1;
        }
        else if ( HIWORD(v17) != 3 )
        {
          goto LABEL_62;
        }
        v17 = (__int16)v17;
        if ( (unsigned int)(unsigned __int16)v17 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**(_DWORD **)v3 + 20) + 20) + 24)
          && (__int16)v17 != -1 )
        {
LABEL_55:
          xxxMNSelectItem(v17);
          if ( v32 )
            xxxMNKeyDown(13);
        }
LABEL_62:
        v12();
        v12();
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v37);
      }
    }
    else
    {
      if ( !*(_DWORD *)(**(_DWORD **)v3 + 4) || *(_DWORD *)(_gptiCurrent + 796) != *(_DWORD *)(**(_DWORD **)v3 + 4) )
        xxxMessageBeep(0);
      if ( (v34 & 0x10) != 0 )
        goto LABEL_62;
    }
    xxxMNCancel(v33, 0, 0, 0);
    goto LABEL_62;
  }
LABEL_36:
  if ( xxxMNSwitchToAlternateMenu(v3, v33) )
    xxxMNChar(v10);
LABEL_38:
  ThreadUnlock1();
  ThreadUnlock1();
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v37);
}
