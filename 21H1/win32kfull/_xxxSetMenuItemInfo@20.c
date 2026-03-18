/*
 * XREFs of _xxxSetMenuItemInfo@20 @ 0x1DCEA
 * Callers:
 *     _xxxLoadSysMenu@4 @ 0x1D24C (_xxxLoadSysMenu@4.c)
 *     _NtUserThunkedMenuItemInfo@24 @ 0x1D426 (_NtUserThunkedMenuItemInfo@24.c)
 * Callees:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EB04 (-xxxRedrawForSetLPITEMInfo@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z @ 0x94D5C (--4-$SmartObjStackRefBase@UtagMENU@@@@IAEAAV0@QAUtagMENU@@@Z.c)
 *     _MakeMenuRtoL@8 @ 0x1AB8A6 (_MakeMenuRtoL@8.c)
 */

int __fastcall xxxSetMenuItemInfo(_DWORD **a1, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v10; // esi
  int v12; // edx
  _DWORD *v13; // ecx
  int v14; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h]
  _DWORD v17[3]; // [esp+18h] [ebp-1Ch] BYREF
  int v18; // [esp+24h] [ebp-10h]
  int v19; // [esp+28h] [ebp-Ch]
  int v20; // [esp+2Ch] [ebp-8h] BYREF
  int v21; // [esp+30h] [ebp-4h] BYREF

  v14 = 0;
  v19 = a2;
  v15 = 0;
  v16 = 0;
  v6 = 0;
  SmartObjStackRefBase<tagMENU>::Init(0);
  v21 = *(_DWORD *)v17[0];
  v17[2] = 0;
  v18 = MNLookUpItem(a3, &v21);
  SmartObjStackRefBase<tagMENU>::operator=(v21);
  if ( !v18 )
  {
    if ( v19 != 61744 || a3 )
      UserSetLastError(1456);
    else
      v6 = 1;
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(a4 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v12 = 0;
      if ( (*(_BYTE *)(*(_DWORD *)(**a1 + 20) + 20) & 0x20) == 0 )
        goto LABEL_3;
    }
    v13 = a1[2];
    if ( !v13 )
      v13 = (_DWORD *)**a1;
    MakeMenuRtoL(v13, v12);
  }
LABEL_3:
  v7 = *(_DWORD *)v17[0];
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v14 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v14;
  v15 = v7;
  if ( v7 )
    HMLockObject(v7);
  v10 = v18;
  v20 = 0;
  v6 = SetLPITEMInfoNoRedraw(a4, a5, &v20);
  if ( v20 )
    xxxRedrawForSetLPITEMInfo(v17, v10);
  ThreadUnlock1();
LABEL_8:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v17);
  return v6;
}
