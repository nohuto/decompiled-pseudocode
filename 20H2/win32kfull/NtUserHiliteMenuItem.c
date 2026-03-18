/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C01FCC90
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0248B34 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
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

  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v25 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v25;
    *((_QWORD *)&v25 + 1) = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
    v24 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL, v12, v13);
    }
    else
    {
      v14 = ValidateHmenu(a2);
      SmartObjStackRefBase<tagMENU>::operator=(v23, v14);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v23)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v23[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v15 = v24;
        if ( !v24 )
          v15 = *(_QWORD *)v23[0];
        *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v27;
        *((_QWORD *)&v27 + 1) = v15;
        HMLockObject(v15);
        v10 = xxxHiliteMenuItem(v11, v23, a3, a4);
        ThreadUnlock1(v17, v16, v18);
      }
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v23);
    ThreadUnlock1(v20, v19, v21);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
