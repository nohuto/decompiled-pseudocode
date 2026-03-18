/*
 * XREFs of NtUserSetWindowShowState @ 0x1C0202F50
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0241F5C (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r13
  int v7; // r14d
  BOOL v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int128 *p_left; // rdx
  struct tagMONITOR *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rcx
  __int128 v31; // [rsp+38h] [rbp-90h] BYREF
  __int64 v32; // [rsp+48h] [rbp-80h]
  __int128 v33; // [rsp+58h] [rbp-70h] BYREF
  __int128 v34; // [rsp+68h] [rbp-60h] BYREF
  __int128 v35; // [rsp+78h] [rbp-50h] BYREF
  __int128 v36; // [rsp+88h] [rbp-40h] BYREF

  v5 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v11 = v9;
  if ( v9 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v31;
      *((_QWORD *)&v31 + 1) = v9;
      HMLockObject(v9);
      v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
      if ( v14
        && IAMThreadAccessGranted(gptiCurrent)
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) )
      {
        v20 = *(_QWORD *)(v11 + 16);
        if ( v20 != gptiCurrent )
        {
          if ( *(_QWORD *)(v20 + 672) )
          {
            v15 = 5023LL;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v15 = 1004LL;
            goto LABEL_5;
          }
          if ( (unsigned int)v5 <= 5 )
          {
            p_left = (__int128 *)&a4->left;
            if ( !a4 )
              goto LABEL_34;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              p_left = (__int128 *)MmUserProbeAddress;
            v35 = *p_left;
            a4 = (struct tagRECT *)&v35;
            v22 = _MonitorFromWindowInternal((struct tagWND *)v11, 2LL, 1LL, v19);
            if ( v22 )
            {
              v33 = *GetMonitorWorkRectForWindow(&v34, (__int64)v22, (const struct tagWND *)v14);
              v36 = 0LL;
              if ( (unsigned int)IntersectRect(&v36, (int *)&v35, (int *)&v33) )
              {
                v23 = v36 - v35;
                if ( (_QWORD)v36 == (_QWORD)v35 )
                  v23 = *((_QWORD *)&v36 + 1) - *((_QWORD *)&v35 + 1);
                if ( !v23 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0 )
                    goto LABEL_34;
                  v24 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
                  if ( (*(_BYTE *)(v24 + 224) & 0x20) != 0 )
                    goto LABEL_34;
                  v25 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
                  if ( (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v24) >> 8)) & 0x1FF) == 0 )
                  {
                    v26 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 288LL);
                    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) & 0xF) != 2 || (v27 = 1, (v26 & 0x20000000) == 0) )
                      v27 = 0;
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v26) & 0xF) != 2
                      || (W32GetCurrentThreadDpiAwarenessContext(v28) & 0x20000000) == 0 )
                    {
                      v7 = 0;
                    }
                    if ( v27 == v7 )
                      goto LABEL_34;
                  }
                  if ( (unsigned int)TransformRectBetweenCoordinateSpaces(&v35, &v35, v11, v14) )
                  {
LABEL_34:
                    v8 = xxxSetWindowShowState((struct tagWND *)v11, byte_1C02F4778[v5], a4);
                    goto LABEL_35;
                  }
                }
              }
            }
          }
        }
        v15 = 87LL;
      }
      else
      {
        v15 = 5LL;
      }
LABEL_5:
      UserSetLastError(v15, v12, v13);
LABEL_35:
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
