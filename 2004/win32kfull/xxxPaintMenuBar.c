/*
 * XREFs of xxxPaintMenuBar @ 0x1C005D020
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C005CEF0 (NtUserPaintMenuBar.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C005D4CC (xxxSendUAHMenuMessage.c)
 *     ThreadLockMenuNoModify @ 0x1C005E1E4 (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00608DC (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00609B8 (xxxMenuDraw.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MNIsUAHMenu @ 0x1C00AF118 (MNIsUAHMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, int a5, char a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  _QWORD v30[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h]
  __int128 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v35 = 0LL;
  v10 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v30);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v30) )
  {
    v11 = v31;
    if ( !v31 )
      v11 = *(_QWORD *)v30[0];
    ThreadLockMenuNoModify(v11, &v34);
    v12 = *(_QWORD *)(*(_QWORD *)v30[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v12 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v12 + 40) |= 0x10u;
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v14 = *(_QWORD *)(*(_QWORD *)v30[0] + 80LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v32 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
    *((_QWORD *)&v32 + 1) = v14;
    if ( v14 )
      HMLockObject(v14);
    if ( a1 != *(_QWORD *)(*(_QWORD *)v30[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v30[0] + 64LL)
      || (v18 = *(_QWORD *)v30[0], !*(_DWORD *)(*(_QWORD *)v30[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v30, a1, a5, a3, v13);
    }
    if ( gihmodUserApiHook >= 0 && v14 && (unsigned int)xxxSendUAHInitMenuMessage(v14, v30, a2) )
    {
      v19 = v31;
      if ( !v31 )
        v19 = *(_QWORD *)v30[0];
      xxxSendUAHMenuMessage(v14, 145LL, v19, a2);
    }
    ThreadUnlock1(v18, v16, v17);
    v22 = v31;
    if ( v31 )
    {
      v23 = v31;
    }
    else
    {
      v22 = 0LL;
      v23 = *(_QWORD *)v30[0];
    }
    if ( (unsigned int)MNIsUAHMenu(v23, v20, v21, v22) )
    {
      xxxMenuDraw(a2);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL) )
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 24LL);
      else
        v28 = *(_QWORD *)(gpsi + 4936LL);
      v29 = GreSelectBrush(a2, v28);
      NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v30[0] + 64LL), *(_DWORD *)(*(_QWORD *)v30[0] + 68LL), 15728673);
      xxxMenuDraw(a2);
      GreSelectBrush(a2, v29);
    }
    v10 = *(_DWORD *)(*(_QWORD *)v30[0] + 68LL);
    v26 = *(_QWORD *)(*((_QWORD *)&v34 + 1) + 40LL);
    *(_DWORD *)(v26 + 40) &= ~0x200u;
    ThreadUnlock1(v26, v24, v25);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v30);
  return v10;
}
