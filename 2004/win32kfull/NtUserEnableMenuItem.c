/*
 * XREFs of NtUserEnableMenuItem @ 0x1C011F9C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableMenuItem @ 0x1C005C848 (xxxEnableMenuItem.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]

  v22 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
  v20 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL, v6, v7);
LABEL_8:
    v11 = -1;
    goto LABEL_7;
  }
  v8 = ValidateHmenu(a1);
  SmartObjStackRefBase<tagMENU>::operator=(v19, v8);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v19)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_8;
  }
  v9 = v20;
  if ( !v20 )
    v9 = *(_QWORD *)v19[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v21 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
  *((_QWORD *)&v21 + 1) = v9;
  HMLockObject(v9);
  v11 = xxxEnableMenuItem((__int64)v19, a2, a3);
  ThreadUnlock1(v13, v12, v14);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
  UserSessionSwitchLeaveCrit(v16, v15, v17);
  return v11;
}
