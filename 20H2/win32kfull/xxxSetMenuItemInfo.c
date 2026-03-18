/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C0033E40
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0035870 (NtUserThunkedMenuItemInfo.c)
 *     xxxLoadSysMenu @ 0x1C0078CB0 (xxxLoadSysMenu.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C003621C (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     MNLookUpItem @ 0x1C005C3E0 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MakeMenuRtoL @ 0x1C024E59C (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(_QWORD **a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int v19; // ebx
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+90h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v9 = a1[2];
  v21 = *(_QWORD *)v22[0];
  if ( !v9 )
    v9 = (_QWORD *)**a1;
  v10 = MNLookUpItem(v9, a2, a3, &v21);
  v23 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=(v22);
  if ( !v11 )
  {
    if ( !a3 && a2 == 61744 )
    {
      v16 = 1;
    }
    else
    {
      UserSetLastError(1456LL);
      v16 = 0;
    }
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) == 0 )
        goto LABEL_5;
    }
    v20 = a1[2];
    if ( !v20 )
      v20 = (_QWORD *)**a1;
    MakeMenuRtoL(v20, v19);
  }
LABEL_5:
  v12 = v23;
  if ( !v23 )
    v12 = *(_QWORD *)v22[0];
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v24 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v24;
  *((_QWORD *)&v24 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  v26 = 0;
  v16 = SetLPITEMInfoNoRedraw((unsigned int)v22, v11, a4, a5, (__int64)&v26);
  if ( v26 )
    xxxRedrawForSetLPITEMInfo(v22, v11);
  ThreadUnlock1(v15, v14, v17);
LABEL_12:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
  return v16;
}
