/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01FB3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00A75C0 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01580E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxGetMenuItemRect @ 0x1C024FC50 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  unsigned int MenuItemRect; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v27[2]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-A0h]
  __int128 v29; // [rsp+48h] [rbp-90h] BYREF
  __int64 v30; // [rsp+58h] [rbp-80h]
  __int128 v31; // [rsp+60h] [rbp-78h] BYREF
  __int64 v32; // [rsp+70h] [rbp-68h]
  __int128 v33; // [rsp+80h] [rbp-58h] BYREF

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v11 = ValidateHwnd(a1);
    if ( !v11 )
    {
      MenuItemRect = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v29;
  *((_QWORD *)&v29 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27);
  v14 = ValidateHmenu(a2);
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v27, v14);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v15 = v28;
    if ( !v28 )
      v15 = *(_QWORD *)v27[0];
    *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v31;
    *((_QWORD *)&v31 + 1) = v15;
    HMLockObject(v15);
    MenuItemRect = xxxGetMenuItemRect(v11, v27, a3, &v33);
    if ( v11 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
      {
        v18 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v18 + 224) & 0x20) == 0 )
        {
          v19 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
          if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v18) >> 8)) & 0x1FF) != 0 )
            goto LABEL_23;
          v20 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 288LL);
          v21 = (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) & 0xF) == 2 && (v20 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v20) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v22) & 0x20000000) == 0 )
          {
            v8 = 0;
          }
          if ( v21 != v8 )
LABEL_23:
            TransformRectBetweenCoordinateSpaces(&v33, &v33, 0LL, v11);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v33;
    ThreadUnlock1(MmUserProbeAddress, v16, v17);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v27);
  ThreadUnlock1(v24, v23, v25);
LABEL_28:
  UserSessionSwitchLeaveCrit(v10, v9, v12);
  return MenuItemRect;
}
