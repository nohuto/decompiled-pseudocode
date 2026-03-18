/*
 * XREFs of NtUserEnableMenuItem @ 0x1C0120ED0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableMenuItem @ 0x1C0034648 (xxxEnableMenuItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall NtUserEnableMenuItem(__int64 a1, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 *v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]

  v20 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v17, 0LL);
  v18 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7);
LABEL_8:
    v11 = -1;
    goto LABEL_7;
  }
  v8 = ValidateHmenu(a1);
  SmartObjStackRefBase<tagMENU>::operator=(v17, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v17)
    || (*(_DWORD *)(*(_QWORD *)(*v17[0] + 40) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v9 = v18;
  if ( !v18 )
    v9 = *v17[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v19 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v19;
  *((_QWORD *)&v19 + 1) = v9;
  HMLockObject(v9);
  v11 = xxxEnableMenuItem(v17, a2, a3);
  ThreadUnlock1(v13, v12, v14);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  UserSessionSwitchLeaveCrit(v15);
  return v11;
}
