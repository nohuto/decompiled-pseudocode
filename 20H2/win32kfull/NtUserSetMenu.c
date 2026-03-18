/*
 * XREFs of NtUserSetMenu @ 0x1C014BD50
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetMenu @ 0x1C014BF24 (xxxSetMenu.c)
 */

__int64 __fastcall NtUserSetMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]

  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v21;
      *((_QWORD *)&v21 + 1) = v4;
      HMLockObject(v4);
      SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
      if ( a2 )
      {
        v8 = ValidateHmenu(a2);
        v20 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v19, v8);
        if ( SmartObjStackRef<tagMENU>::operator==((__int64)v19) )
        {
LABEL_12:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
          ThreadUnlock1(v16, v15, v17);
          goto LABEL_13;
        }
      }
      else
      {
        v20 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v19, 0LL);
      }
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v19)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL) & 1) != 0 )
      {
        UserSetLastError(87LL, v9, v10);
      }
      else
      {
        v11 = v20;
        if ( !v20 )
          v11 = *(_QWORD *)v19[0];
        *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v23;
        *((_QWORD *)&v23 + 1) = v11;
        if ( v11 )
          HMLockObject(v11);
        v6 = xxxSetMenu(v7);
        ThreadUnlock1(v13, v12, v14);
      }
      goto LABEL_12;
    }
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
