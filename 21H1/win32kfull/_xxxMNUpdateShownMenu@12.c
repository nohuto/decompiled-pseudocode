/*
 * XREFs of _xxxMNUpdateShownMenu@12 @ 0x1A72AE
 * Callers:
 *     _xxxSetMenuInfo@8 @ 0x1CE94 (_xxxSetMenuInfo@8.c)
 *     ?xxxRemoveDeleteMenuHelper@@YGHABV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1DF66 (-xxxRemoveDeleteMenuHelper@@YGHABV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _MNGetpItemIndex@8 @ 0x99EF2 (_MNGetpItemIndex@8.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _xxxInvalidateRect@12 @ 0x1965AB (_xxxInvalidateRect@12.c)
 */

_DWORD *__fastcall xxxMNUpdateShownMenu(int *a1, int a2, unsigned int a3)
{
  _DWORD *v4; // edi
  int v5; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // esi
  PKTHREAD v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // edi
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  bool v21; // sf
  int v22; // ecx
  char v23; // al
  int v24; // edi
  int v25; // ebx
  int *v26; // edx
  _DWORD v28[2]; // [esp+10h] [ebp-60h] BYREF
  int v29; // [esp+18h] [ebp-58h]
  unsigned int v30; // [esp+1Ch] [ebp-54h]
  _DWORD *v31; // [esp+20h] [ebp-50h]
  int v32; // [esp+24h] [ebp-4Ch]
  int v33; // [esp+28h] [ebp-48h]
  int v34; // [esp+2Ch] [ebp-44h]
  int v35; // [esp+30h] [ebp-40h]
  _DWORD v36[3]; // [esp+34h] [ebp-3Ch] BYREF
  _DWORD v37[3]; // [esp+40h] [ebp-30h] BYREF
  int v38; // [esp+4Ch] [ebp-24h] BYREF
  int v39; // [esp+50h] [ebp-20h]
  int v40; // [esp+54h] [ebp-1Ch]
  int v41; // [esp+58h] [ebp-18h]
  int v42; // [esp+5Ch] [ebp-14h] BYREF
  int v43; // [esp+60h] [ebp-10h]
  int v44; // [esp+64h] [ebp-Ch]
  int v45; // [esp+68h] [ebp-8h]

  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v5 = *a1;
  v31 = *(_DWORD **)(*(_DWORD *)*a1 + 8);
  v4 = v31;
  SmartObjStackRefBase<tagMENU>::Init(v28, *(_DWORD *)(*(_DWORD *)v5 + 20));
  v29 = 0;
  v36[2] = 0;
  v37[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v36[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v36;
  v36[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  v8 = v29;
  if ( !v29 )
    v8 = *(_DWORD *)v28[0];
  v9 = KeGetCurrentThread();
  v10 = W32GetThreadWin32Thread(v9);
  v37[0] = *(_DWORD *)(v10 + 228);
  *(_DWORD *)(v10 + 228) = v37;
  v37[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  _GetClientRect((int)v4, &v38);
  if ( !*(_DWORD *)(*(_DWORD *)v28[0] + 36) )
  {
    v32 = v40;
    v42 = v38;
    v43 = v39;
    v44 = v40;
    v45 = v41;
    v11 = *(_DWORD *)v28[0];
    v12 = v41;
    v4 = v31;
    v33 = v41;
    v34 = *(_DWORD *)(v11 + 80);
    v30 = a3;
    v13 = xxxSendMessage(v31, a3, 0);
    v14 = v29;
    v35 = v13;
    if ( !v29 )
      v14 = *(_DWORD *)v28[0];
    if ( MNGetpItemIndex(v14, a2) == -1 )
      goto LABEL_45;
    v30 = a3 & 0xFFFFFFFB;
    if ( (((unsigned __int8)v34 ^ *(_BYTE *)(*(_DWORD *)v28[0] + 80)) & 3) != 0 )
      goto LABEL_45;
    v40 = (unsigned __int16)v35;
    if ( a2 )
    {
      if ( (unsigned __int16)v35 != v32 )
        goto LABEL_45;
      v41 = *(_DWORD *)(*(_DWORD *)v28[0] + 40);
      if ( (*(_BYTE *)(*(_DWORD *)v28[0] + 80) & 3) != 0 )
      {
        if ( v41 <= v12 )
        {
          v15 = v29;
          if ( !v29 )
            v15 = *(_DWORD *)v28[0];
          v16 = *(_DWORD *)(*(_DWORD *)a2 + 40);
          v17 = v16 - *(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(v15, *(_DWORD *)(v15 + 72)) + 40);
          v39 = v17;
          goto LABEL_38;
        }
        _GetClientRect((int)v4, &v42);
      }
      v18 = v29;
      v32 = *(_DWORD *)(*(_DWORD *)a2 + 40);
      if ( v29 )
      {
        v19 = v29;
      }
      else
      {
        v18 = 0;
        v19 = *(_DWORD *)v28[0];
      }
      v20 = MNGetpItemFromIndex(v19, *(_DWORD *)(v19 + 72));
      v21 = v32 - *(_DWORD *)(*(_DWORD *)v20 + 40) < 0;
      v43 = v32 - *(_DWORD *)(*(_DWORD *)v20 + 40);
      v39 = v43;
      if ( v21 )
        goto LABEL_29;
      if ( v43 < *(_DWORD *)(*(_DWORD *)v28[0] + 40) )
      {
        xxxScrollWindowEx(v4, 0, (HDC)(v41 - v33), &v42, (int)&v38, 0, 0, 6);
        v18 = v29;
        if ( v29 )
        {
          v22 = v29;
        }
        else
        {
          v18 = 0;
          v22 = *(_DWORD *)v28[0];
        }
        if ( MNGetpItemIndex(v22, a2) != -1 )
          goto LABEL_29;
LABEL_45:
        v26 = 0;
        goto LABEL_41;
      }
    }
    v18 = v29;
LABEL_29:
    v23 = v30;
    goto LABEL_30;
  }
  v23 = a3;
  v18 = v29;
  v30 = a3;
LABEL_30:
  if ( (v23 & 2) != 0 )
    goto LABEL_44;
  if ( !a2 )
    goto LABEL_45;
  v24 = *(_DWORD *)(*(_DWORD *)a2 + 40);
  v25 = *(_DWORD *)a2;
  if ( !v18 )
    v18 = *(_DWORD *)v28[0];
  v17 = v24 - *(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(v18, *(_DWORD *)(v18 + 72)) + 40);
  v39 = v17;
  v41 = v17 + *(_DWORD *)(v25 + 48);
LABEL_38:
  v21 = v17 < 0;
  v4 = v31;
  if ( !v21 && v39 < *(_DWORD *)(*(_DWORD *)v28[0] + 40) )
  {
    v26 = &v38;
LABEL_41:
    xxxInvalidateRect((int)v4, v26, 1);
  }
  if ( (v30 & 4) != 0 )
    xxxSetWindowPos((int)v4, 0, 0, 0, 0, 0, 567);
LABEL_44:
  ThreadUnlock1();
  ThreadUnlock1();
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v28);
}
