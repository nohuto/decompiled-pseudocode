/*
 * XREFs of NtUserRemoveMenu @ 0x1C0117BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00352B4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserRemoveMenu(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]

  v20 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
  v8 = 0;
  v18 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7);
  }
  else
  {
    v9 = ValidateHmenu(a1);
    SmartObjStackRefBase<tagMENU>::operator=(v17, v9);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v17)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v10 = v18;
      if ( !v18 )
        v10 = *(_QWORD *)v17[0];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
      *((_QWORD *)&v19 + 1) = v10;
      if ( v10 )
        HMLockObject(v10);
      v8 = xxxRemoveDeleteMenuHelper((__int64)v17, a2, a3, 0);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  UserSessionSwitchLeaveCrit(v15);
  return v8;
}
