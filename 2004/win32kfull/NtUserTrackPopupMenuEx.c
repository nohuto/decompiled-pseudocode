/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C0204810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6)
{
  __int128 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v27[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-A8h]
  __int128 v29; // [rsp+60h] [rbp-98h] BYREF
  __int64 v30; // [rsp+70h] [rbp-88h]
  __int128 v31; // [rsp+78h] [rbp-80h] BYREF
  __int64 v32; // [rsp+88h] [rbp-70h]
  __int128 v33; // [rsp+98h] [rbp-60h] BYREF
  int v34; // [rsp+A8h] [rbp-50h]

  v10 = a6;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL, v11, v12);
    v13 = 0;
  }
  else
  {
    v14 = ValidateHmenu(a1);
    v13 = 0;
    v28 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v27, v14);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
    {
      v15 = ValidateHwnd(a5);
      if ( v15 )
      {
        *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v29;
        *((_QWORD *)&v29 + 1) = v15;
        HMLockObject(v15);
        v16 = v28;
        if ( !v28 )
        {
          v16 = *(_QWORD *)v27[0];
          v10 = a6;
        }
        *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v31;
        *((_QWORD *)&v31 + 1) = v16;
        HMLockObject(v16);
        if ( v10 )
        {
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (__int128 *)MmUserProbeAddress;
          v33 = *v10;
          v34 = *((_DWORD *)v10 + 4);
          v10 = &v33;
        }
        v13 = xxxTrackPopupMenuEx(v27, a2, a3, a4, v15, v10);
        ThreadUnlock1(v18, v17, v19);
        ThreadUnlock1(v21, v20, v22);
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v27);
  UserSessionSwitchLeaveCrit(v24, v23, v25);
  return v13;
}
