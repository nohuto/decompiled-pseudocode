/*
 * XREFs of NtUserSetWindowShowState @ 0x1C0203DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C02431FC (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r13
  int v7; // r14d
  BOOL v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int128 *p_left; // rdx
  struct tagMONITOR *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rcx
  __int128 v32; // [rsp+38h] [rbp-90h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h]
  __int128 v34; // [rsp+58h] [rbp-70h] BYREF
  __int128 v35; // [rsp+68h] [rbp-60h] BYREF
  __int128 v36; // [rsp+78h] [rbp-50h] BYREF
  __int128 v37; // [rsp+88h] [rbp-40h] BYREF

  v5 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v13 = v9;
  if ( v9 )
  {
    v11 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v32;
      *((_QWORD *)&v32 + 1) = v9;
      HMLockObject(v9);
      v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
      if ( v16
        && IAMThreadAccessGranted(gptiCurrent)
        && *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL) )
      {
        v21 = *(_QWORD *)(v13 + 16);
        if ( v21 != gptiCurrent )
        {
          if ( *(_QWORD *)(v21 + 664) )
          {
            v17 = 5023LL;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v17 = 1004LL;
            goto LABEL_5;
          }
          if ( (unsigned int)v5 <= 5 )
          {
            p_left = (__int128 *)&a4->left;
            if ( !a4 )
              goto LABEL_34;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              p_left = (__int128 *)MmUserProbeAddress;
            v36 = *p_left;
            a4 = (struct tagRECT *)&v36;
            v23 = _MonitorFromWindowInternal((struct tagWND *)v13, 2LL, 1);
            if ( v23 )
            {
              v34 = *GetMonitorWorkRectForWindow(&v35, (__int64)v23, (const struct tagWND *)v16);
              v37 = 0LL;
              if ( (unsigned int)IntersectRect(&v37, (int *)&v36, (int *)&v34) )
              {
                v24 = v37 - v36;
                if ( (_QWORD)v37 == (_QWORD)v36 )
                  v24 = *((_QWORD *)&v37 + 1) - *((_QWORD *)&v36 + 1);
                if ( !v24 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) != 0 )
                    goto LABEL_34;
                  v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
                  if ( (*(_BYTE *)(v25 + 224) & 0x20) != 0 )
                    goto LABEL_34;
                  v26 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
                  if ( (((unsigned __int16)(v26 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v25) >> 8)) & 0x1FF) == 0 )
                  {
                    v27 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
                    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v28 = 1, (v27 & 0x20000000) == 0) )
                      v28 = 0;
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v27) & 0xF) != 2
                      || (W32GetCurrentThreadDpiAwarenessContext(v29) & 0x20000000) == 0 )
                    {
                      v7 = 0;
                    }
                    if ( v28 == v7 )
                      goto LABEL_34;
                  }
                  if ( (unsigned int)TransformRectBetweenCoordinateSpaces(&v36, &v36, v13, v16) )
                  {
LABEL_34:
                    v8 = xxxSetWindowShowState((struct tagWND *)v13, byte_1C02F50B8[v5], a4);
                    goto LABEL_35;
                  }
                }
              }
            }
          }
        }
        v17 = 87LL;
      }
      else
      {
        v17 = 5LL;
      }
LABEL_5:
      UserSetLastError(v17, v14, v15);
LABEL_35:
      ThreadUnlock1(v19, v18, v20);
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return v8;
}
