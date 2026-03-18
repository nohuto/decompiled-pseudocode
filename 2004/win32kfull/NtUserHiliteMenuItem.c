/*
 * XREFs of NtUserHiliteMenuItem @ 0x1C01FDB00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C024A0E4 (xxxHiliteMenuItem.c)
 */

__int64 __fastcall NtUserHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
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

  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v27;
    *((_QWORD *)&v27 + 1) = v8;
    HMLockObject(v8);
    SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
    v26 = 0LL;
    if ( (a4 & 0xFFFF0000) != 0 )
    {
      UserSetLastError(1004LL, v14, v15);
    }
    else
    {
      v16 = ValidateHmenu(a2);
      SmartObjStackRefBase<tagMENU>::operator=(v25, v16);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v25)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 40LL) & 0x40) == 0 )
      {
        v17 = v26;
        if ( !v26 )
          v17 = *(_QWORD *)v25[0];
        *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v29;
        *((_QWORD *)&v29 + 1) = v17;
        HMLockObject(v17);
        v12 = xxxHiliteMenuItem(v13, v25, a3, a4);
        ThreadUnlock1(v19, v18, v20);
      }
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
    ThreadUnlock1(v22, v21, v23);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v12;
}
