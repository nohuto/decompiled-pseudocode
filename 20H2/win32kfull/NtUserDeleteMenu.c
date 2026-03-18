/*
 * XREFs of NtUserDeleteMenu @ 0x1C00348E0
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

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int128 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]

  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v6 = 0;
  v15 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    ValidateHmenu(a1);
    SmartObjStackRefBase<tagMENU>::operator=(v14);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v14)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v7 = v15;
      if ( !v15 )
        v7 = *(_QWORD *)v14[0];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v16 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v16;
      *((_QWORD *)&v16 + 1) = v7;
      if ( v7 )
        HMLockObject(v7);
      v6 = xxxRemoveDeleteMenuHelper(v14, a2, a3, 1LL);
      ThreadUnlock1(v10, v9, v11);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v14);
  UserSessionSwitchLeaveCrit(v12);
  return v6;
}
