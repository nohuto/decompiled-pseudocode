/*
 * XREFs of NtUserThunkedMenuInfo @ 0x1C0115B60
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v15[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+48h] [rbp-50h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  __int128 v20; // [rsp+70h] [rbp-28h]
  __int64 v21; // [rsp+80h] [rbp-18h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v19 = *(_OWORD *)a2;
  v20 = *(_OWORD *)(a2 + 16);
  v21 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  v16 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v15, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v15)
    && (*(_DWORD *)(*(_QWORD *)(*v15[0] + 40) + 40LL) & 0x40) == 0 )
  {
    v6 = v16;
    if ( !v16 )
      v6 = *v15[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v17 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    if ( v6 )
      HMLockObject(v6);
    v5 = xxxSetMenuInfo(v15, (__int64)&v19);
    ThreadUnlock1(v9, v8, v10);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v15);
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v5;
}
