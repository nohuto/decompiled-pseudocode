/*
 * XREFs of xxxPaintMenuBar @ 0x1C00FAF50
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C00FAE20 (NtUserPaintMenuBar.c)
 * Callees:
 *     xxxSendUAHInitMenuMessage @ 0x1C00334D0 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C003354C (xxxMenuDraw.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     xxxMenuBarCompute @ 0x1C003812C (xxxMenuBarCompute.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00FB170 (xxxSendUAHMenuMessage.c)
 *     ThreadLockMenuNoModify @ 0x1C00FB424 (ThreadLockMenuNoModify.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, unsigned int a3, int a4, unsigned int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 **v30[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h]
  __int128 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v10 = *(_QWORD *)(a1 + 168);
  v35 = 0LL;
  v11 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v30, v10);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
  {
    v12 = v31;
    if ( !v31 )
      v12 = (__int64)*v30[0];
    ThreadLockMenuNoModify(v12, &v34);
    v13 = (*v30[0])[5];
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v13 + 40) |= 0x10u;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v15 = (*v30[0])[10];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v32;
    *((_QWORD *)&v32 + 1) = v15;
    if ( v15 )
      HMLockObject(v15);
    if ( a1 != (*v30[0])[10] || !*((_DWORD *)*v30[0] + 16) || (v19 = (__int64)*v30[0], !*((_DWORD *)*v30[0] + 17)) )
      xxxMenuBarCompute(v30, a1, a5, a3, v14);
    if ( gihmodUserApiHook >= 0 && v15 && (unsigned int)xxxSendUAHInitMenuMessage(v15, v30, (__int64)a2) )
    {
      v20 = v31;
      if ( !v31 )
        v20 = (__int64)*v30[0];
      xxxSendUAHMenuMessage(v15, 145LL, v20, a2);
    }
    ThreadUnlock1(v19, v17, v18);
    if ( v31 )
      v21 = v31;
    else
      v21 = (__int64)*v30[0];
    if ( (unsigned int)MNIsUAHMenu(v21) )
    {
      if ( !v22 )
        v22 = (__int64)*v30[0];
      xxxMenuDraw(a2, v22, 0LL);
    }
    else
    {
      if ( *(_QWORD *)((*v30[0])[5] + 24) )
        v27 = *(_QWORD *)((*v30[0])[5] + 24);
      else
        v27 = *(_QWORD *)(gpsi + 4936LL);
      v28 = GreSelectBrush(a2, v27);
      NtGdiPatBlt(a2, a3, a5, *((_DWORD *)*v30[0] + 16), *((_DWORD *)*v30[0] + 17), 15728673);
      v29 = v31;
      if ( !v31 )
        v29 = (__int64)*v30[0];
      xxxMenuDraw(a2, v29, 0LL);
      GreSelectBrush(a2, v28);
    }
    v11 = *((_DWORD *)*v30[0] + 17);
    v25 = *(_QWORD *)(*((_QWORD *)&v34 + 1) + 40LL);
    *(_DWORD *)(v25 + 40) &= ~0x200u;
    ThreadUnlock1(v25, v23, v24);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v30);
  return v11;
}
