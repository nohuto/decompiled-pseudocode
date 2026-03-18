/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01FF550
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C024E8F4 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD v23[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h]
  __int128 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  __int128 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF

  v29 = a3;
  v28 = 0LL;
  v26 = 0LL;
  v5 = 1;
  v27 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
    {
      v8 = -1;
      goto LABEL_26;
    }
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v25;
  *((_QWORD *)&v25 + 1) = v7;
  if ( v7 )
    HMLockObject(v7);
  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v9 = ValidateHmenu(a2);
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v23, v9);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
  {
    v8 = -1;
  }
  else
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
        {
          v11 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v10) >> 8)) & 0x1FF) != 0 )
            goto LABEL_21;
          v12 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          v13 = (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) == 2 && (v12 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v12) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v14) & 0x20000000) == 0 )
          {
            v5 = 0;
          }
          if ( v13 != v5 )
LABEL_21:
            TransformPointBetweenCoordinateSpaces(&v29, &v29, v7, 0LL);
        }
      }
    }
    v15 = v24;
    if ( !v24 )
      v15 = *(_QWORD *)v23[0];
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v27;
    *((_QWORD *)&v27 + 1) = v15;
    HMLockObject(v15);
    v8 = xxxMenuItemFromPoint(v7, v23, v29);
    ThreadUnlock1(v17, v16, v18);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v23);
  ThreadUnlock1(v20, v19, v21);
LABEL_26:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
