/*
 * XREFs of NtUserSetWindowPos @ 0x1C0092AC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0092D78 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ConstrainWindowSize @ 0x1C0092DD8 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C0092E10 (ConstrainWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F6604 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // edi
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagWND *v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rcx
  struct tagWND *v29; // [rsp+40h] [rbp-40h] BYREF
  __int128 v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+D0h] [rbp+50h] BYREF
  int v35; // [rsp+D8h] [rbp+58h] BYREF

  v35 = a4;
  v34 = a3;
  v7 = 0;
  v29 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v10 = 1;
  v32 = 0LL;
  v30 = 0LL;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  v13 = v11;
  if ( v11 )
  {
    v12 = (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v12 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v30 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v30;
      *((_QWORD *)&v30 + 1) = v11;
      HMLockObject(v11);
      v14 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v28 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v29) )
        {
LABEL_23:
          ThreadUnlock1(v16, v15, v17);
          goto LABEL_24;
        }
        if ( *(char *)(*(_QWORD *)(v13 + 40) + 20LL) >= 0 )
        {
          if ( (v14 & 2) == 0 )
            ConstrainWindowPos(&v34, &v35);
          if ( (v14 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v18 = v29;
          if ( (unsigned __int64)v29 <= 1 || (unsigned __int64)v29 > 0xFFFFFFFFFFFFFFFDuLL )
            v18 = 0LL;
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
          {
            v19 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480);
            if ( (*(_BYTE *)(v19 + 224) & 0x20) == 0 )
            {
              v20 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v19) >> 8)) & 0x1FF) != 0 )
                goto LABEL_34;
              v21 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v22 = 1, (v21 & 0x20000000) == 0) )
                v22 = 0;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v21) & 0xF) != 2
                || (W32GetCurrentThreadDpiAwarenessContext(v23) & 0x20000000) == 0 )
              {
                v10 = 0;
              }
              if ( v22 != v10 )
LABEL_34:
                TransformSWPCoords((struct tagWND *)v13, &v34, &v35, &a5, &a6, v14);
            }
          }
          *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v32;
          *((_QWORD *)&v32 + 1) = v18;
          if ( v18 )
            HMLockObject(v18);
          v7 = xxxSetWindowPos((struct tagWND *)v13, (__int64)v29, (unsigned int)v34, (unsigned int)v35, a5, a6, v14);
          ThreadUnlock1(v25, v24, v26);
          goto LABEL_23;
        }
        v28 = 87LL;
      }
      UserSetLastError(v28);
      goto LABEL_23;
    }
  }
LABEL_24:
  UserSessionSwitchLeaveCrit(v12);
  return v7;
}
