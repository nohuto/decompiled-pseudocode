/*
 * XREFs of NtUserSetMenu @ 0x1C0149760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C0149934 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  struct tagWND *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int128 v23; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]

  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = (struct tagWND *)v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      *((_QWORD *)&v23 + 1) = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
      if ( a2 )
      {
        v10 = ValidateHmenu(a2);
        v22 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v21, v10);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
        {
LABEL_12:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v21);
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_13;
        }
      }
      else
      {
        v22 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v21, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v21)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v11, v12);
      }
      else
      {
        v13 = v22;
        if ( !v22 )
          v13 = *(_QWORD *)v21[0];
        *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v25;
        *((_QWORD *)&v25 + 1) = v13;
        if ( v13 )
          HMLockObject(v13);
        v8 = xxxSetMenu(v9);
        ThreadUnlock1(v15, v14, v16);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
