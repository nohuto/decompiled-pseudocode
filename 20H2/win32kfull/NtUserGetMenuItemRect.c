/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01FA570
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00B2D74 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C015AF40 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxGetMenuItemRect @ 0x1C024E648 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int MenuItemRect; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[2]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-A0h]
  __int128 v27; // [rsp+48h] [rbp-90h] BYREF
  __int64 v28; // [rsp+58h] [rbp-80h]
  __int128 v29; // [rsp+60h] [rbp-78h] BYREF
  __int64 v30; // [rsp+70h] [rbp-68h]
  __int128 v31; // [rsp+80h] [rbp-58h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
    {
      MenuItemRect = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v27;
  *((_QWORD *)&v27 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25);
  v12 = ValidateHmenu(a2);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v12);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v13 = v26;
    if ( !v26 )
      v13 = *(_QWORD *)v25[0];
    *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v29;
    *((_QWORD *)&v29 + 1) = v13;
    HMLockObject(v13);
    MenuItemRect = xxxGetMenuItemRect(v10, v25, a3, &v31);
    if ( v10 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v16 + 224) & 0x20) == 0 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v17 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v16) >> 8)) & 0x1FF) != 0 )
            goto LABEL_23;
          v18 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
          v19 = (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) == 2 && (v18 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v18) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v20) & 0x20000000) == 0 )
          {
            v8 = 0;
          }
          if ( v19 != v8 )
LABEL_23:
            TransformRectBetweenCoordinateSpaces(&v31, &v31, 0LL, v10);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v31;
    ThreadUnlock1(MmUserProbeAddress, v14, v15);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v25);
  ThreadUnlock1(v22, v21, v23);
LABEL_28:
  UserSessionSwitchLeaveCrit(v9);
  return MenuItemRect;
}
