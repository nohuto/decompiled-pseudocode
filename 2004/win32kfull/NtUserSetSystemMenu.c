/*
 * XREFs of NtUserSetSystemMenu @ 0x1C01485D0
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetSystemMenu @ 0x1C0148738 (xxxSetSystemMenu.c)
 */

__int64 __fastcall NtUserSetSystemMenu(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
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
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    *((_QWORD *)&v21 + 1) = v4;
    HMLockObject(v4);
    SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
    v10 = ValidateHmenu(a2);
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, v10);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v19) )
    {
      v11 = v20;
      if ( !v20 )
        v11 = *(_QWORD *)v19[0];
      *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      *((_QWORD *)&v23 + 1) = v11;
      HMLockObject(v11);
      v8 = xxxSetSystemMenu(v9, v19);
      ThreadUnlock1(v13, v12, v14);
    }
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
    ThreadUnlock1(v16, v15, v17);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
