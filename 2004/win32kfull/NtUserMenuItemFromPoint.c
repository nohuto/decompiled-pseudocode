/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C02003C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C024FEFC (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h]
  __int128 v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h]
  __int128 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]
  __int64 v31; // [rsp+A0h] [rbp+30h] BYREF

  v31 = a3;
  v30 = 0LL;
  v28 = 0LL;
  v5 = 1;
  v29 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
    {
      v10 = -1;
      goto LABEL_26;
    }
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v27;
  *((_QWORD *)&v27 + 1) = v8;
  if ( v8 )
    HMLockObject(v8);
  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v11 = ValidateHmenu(a2);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v11);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
  {
    v10 = -1;
  }
  else
  {
    if ( v8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
        {
          v13 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
          if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v12) >> 8)) & 0x1FF) != 0 )
            goto LABEL_21;
          v14 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
          v15 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v14 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v14) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v16) & 0x20000000) == 0 )
          {
            v5 = 0;
          }
          if ( v15 != v5 )
LABEL_21:
            TransformPointBetweenCoordinateSpaces(&v31, &v31, v8, 0LL);
        }
      }
    }
    v17 = v26;
    if ( !v26 )
      v17 = *(_QWORD *)v25[0];
    *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    *((_QWORD *)&v29 + 1) = v17;
    HMLockObject(v17);
    v10 = xxxMenuItemFromPoint(v8, v25, v31);
    ThreadUnlock1(v19, v18, v20);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
  ThreadUnlock1(v22, v21, v23);
LABEL_26:
  UserSessionSwitchLeaveCrit(v7, v6, v9);
  return v10;
}
