/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C01170B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C00341B4 (xxxSetMenuInfo.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C015AF40 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v13[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int128 v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  __int128 v17; // [rsp+60h] [rbp-38h] BYREF
  __int128 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+80h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v13);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v17 = *(_OWORD *)a2;
  v18 = *(_OWORD *)(a2 + 16);
  v19 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  v14 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v13, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v13)
    && (*(_DWORD *)(*(_QWORD *)(*v13[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v14;
    if ( !v14 )
      v6 = *v13[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v15 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
    *((_QWORD *)&v15 + 1) = v6;
    if ( v6 )
      HMLockObject(v6);
    v5 = xxxSetMenuInfo(v13, (__int64)&v17);
    ThreadUnlock1(v9, v8, v10);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v5;
}
