/*
 * XREFs of _xxxMNSetTop@8 @ 0x19A800
 * Callers:
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _xxxInvalidateRect@12 @ 0x1965AB (_xxxInvalidateRect@12.c)
 *     _MNDrawArrow@12 @ 0x1A96CC (_MNDrawArrow@12.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 */

int __fastcall xxxMNSetTop(int a1, signed int a2)
{
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v13; // edi
  PKTHREAD v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v20; // [esp+Ch] [ebp-2Ch] BYREF
  int v21; // [esp+10h] [ebp-28h]
  int v22; // [esp+14h] [ebp-24h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  int v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h]
  _DWORD v26[2]; // [esp+24h] [ebp-14h] BYREF
  int v27; // [esp+2Ch] [ebp-Ch]
  HDC v28; // [esp+30h] [ebp-8h]
  int v29; // [esp+34h] [ebp-4h]

  SmartObjStackRefBase<tagMENU>::Init(v26, *(_DWORD *)(**(_DWORD **)a1 + 20));
  v27 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( SmartObjStackRef<tagMENU>::operator==(v26, v4) )
    goto LABEL_31;
  if ( a2 >= 0 )
  {
    if ( a2 > *(_DWORD *)(*(_DWORD *)v26[0] + 76) )
      a2 = *(_DWORD *)(*(_DWORD *)v26[0] + 76);
  }
  else
  {
    a2 = 0;
  }
  if ( a2 == *(_DWORD *)(*(_DWORD *)v26[0] + 72) )
    goto LABEL_31;
  v5 = v27;
  if ( v27 )
  {
    v6 = v27;
  }
  else
  {
    v5 = 0;
    v6 = *(_DWORD *)v26[0];
  }
  v29 = MNGetpItemFromIndex(v6, *(_DWORD *)(v6 + 72));
  if ( !v5 )
    v5 = *(_DWORD *)v26[0];
  v7 = (int *)MNGetpItemFromIndex(v5, a2);
  if ( !v29 || !v7 )
    goto LABEL_31;
  v8 = *v7;
  v9 = *(_DWORD *)v29;
  v29 = 1;
  v28 = (HDC)(*(_DWORD *)(v9 + 40) - *(_DWORD *)(v8 + 40));
  if ( (*(_DWORD *)(*(_DWORD *)v26[0] + 80) & 3) == 2 )
  {
    *(_DWORD *)(*(_DWORD *)v26[0] + 80) = *(_DWORD *)(*(_DWORD *)v26[0] + 80) & 0xFFFFFFFC | 1;
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 12) )
      MNDrawArrow(0, a1, -3);
  }
  else if ( (*(_BYTE *)(*(_DWORD *)v26[0] + 80) & 3) == 3 )
  {
    *(_DWORD *)(*(_DWORD *)v26[0] + 80) = *(_DWORD *)(*(_DWORD *)v26[0] + 80) & 0xFFFFFFFC | 1;
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 12) )
      MNDrawArrow(0, a1, -4);
  }
  v10 = *(_DWORD *)(**(_DWORD **)a1 + 8);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v23 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v23;
  v24 = v10;
  if ( v10 )
    HMLockObject(v10);
  v13 = v27;
  if ( !v27 )
    v13 = *(_DWORD *)v26[0];
  v14 = KeGetCurrentThread();
  v15 = W32GetThreadWin32Thread(v14);
  v20 = *(_DWORD *)(v15 + 228);
  *(_DWORD *)(v15 + 228) = &v20;
  v21 = v13;
  if ( v13 )
    HMLockObject(v13);
  v16 = *(_DWORD **)(**(_DWORD **)a1 + 8);
  if ( (signed int)abs32((int)v28) <= *(_DWORD *)(*(_DWORD *)v26[0] + 40) )
    xxxScrollWindowEx(v16, 0, v28, 0, 0, 0, 0, 6);
  else
    xxxInvalidateRect((int)v16, 0, 1);
  v17 = ThreadUnlock1();
  v27 = 0;
  SmartObjStackRefBase<tagMENU>::operator=(v26, v17);
  if ( SmartObjStackRef<tagMENU>::operator==(v26, v18) )
  {
    ThreadUnlock1();
LABEL_31:
    v29 = 0;
    goto LABEL_32;
  }
  *(_DWORD *)(*(_DWORD *)v26[0] + 72) = a2;
  if ( a2 )
  {
    if ( a2 == *(_DWORD *)(*(_DWORD *)v26[0] + 76) )
    {
      *(_DWORD *)(*(_DWORD *)v26[0] + 80) |= 3u;
      if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 12) )
        MNDrawArrow(0, a1, -4);
    }
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)v26[0] + 80) = *(_DWORD *)(*(_DWORD *)v26[0] + 80) & 0xFFFFFFFC | 2;
    if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 12) )
      MNDrawArrow(0, a1, -3);
  }
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v26[0] + 20) + 12) && *(_DWORD *)(**(_DWORD **)a1 + 8) )
  {
    ThreadLockExchange(*(_DWORD *)(**(_DWORD **)a1 + 8), (int)&v23);
    xxxMNDrawFullNC(*(_DWORD *)(**(_DWORD **)a1 + 8), 0, a1);
  }
  ThreadUnlock1();
LABEL_32:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v26);
  return v29;
}
