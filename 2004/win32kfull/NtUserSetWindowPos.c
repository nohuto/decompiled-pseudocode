/*
 * XREFs of NtUserSetWindowPos @ 0x1C0069EC0
 * Callers:
 *     <none>
 * Callees:
 *     ConstrainWindowSize @ 0x1C00680B8 (ConstrainWindowSize.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A178 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ConstrainWindowPos @ 0x1C0103F90 (ConstrainWindowPos.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F7474 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // edi
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagWND *v20; // rsi
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  struct tagWND *v31; // [rsp+40h] [rbp-40h] BYREF
  __int128 v32; // [rsp+48h] [rbp-38h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+70h] [rbp-10h]
  int v36; // [rsp+D0h] [rbp+50h] BYREF
  int v37; // [rsp+D8h] [rbp+58h] BYREF

  v37 = a4;
  v36 = a3;
  v7 = 0;
  v31 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v10 = 1;
  v34 = 0LL;
  v32 = 0LL;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  v15 = v11;
  if ( v11 )
  {
    v13 = (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v13 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v32;
      *((_QWORD *)&v32 + 1) = v11;
      HMLockObject(v11);
      v16 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v30 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v31) )
        {
LABEL_23:
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_24;
        }
        if ( *(char *)(*(_QWORD *)(v15 + 40) + 20LL) >= 0 )
        {
          if ( (v16 & 2) == 0 )
            ConstrainWindowPos(&v36, &v37);
          if ( (v16 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v20 = v31;
          if ( (unsigned __int64)v31 <= 1 || (unsigned __int64)v31 > 0xFFFFFFFFFFFFFFFDuLL )
            v20 = 0LL;
          if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
          {
            v21 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472);
            if ( (*(_BYTE *)(v21 + 224) & 0x20) == 0 )
            {
              v22 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL);
              if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v21) >> 8)) & 0x1FF) != 0 )
                goto LABEL_34;
              v23 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL);
              if ( (*(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL) & 0xF) != 2 || (v24 = 1, (v23 & 0x20000000) == 0) )
                v24 = 0;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v23) & 0xF) != 2
                || (W32GetCurrentThreadDpiAwarenessContext(v25) & 0x20000000) == 0 )
              {
                v10 = 0;
              }
              if ( v24 != v10 )
LABEL_34:
                TransformSWPCoords((struct tagWND *)v15, &v36, &v37, &a5, &a6, v16);
            }
          }
          *(_QWORD *)&v34 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v34;
          *((_QWORD *)&v34 + 1) = v20;
          if ( v20 )
            HMLockObject(v20);
          v7 = xxxSetWindowPos((struct tagWND *)v15, a5, a6, v16);
          ThreadUnlock1(v27, v26, v28);
          goto LABEL_23;
        }
        v30 = 87LL;
      }
      UserSetLastError(v30);
      goto LABEL_23;
    }
  }
LABEL_24:
  UserSessionSwitchLeaveCrit(v13, v12, v14);
  return v7;
}
