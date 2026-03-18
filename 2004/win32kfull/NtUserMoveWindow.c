/*
 * XREFs of NtUserMoveWindow @ 0x1C0104840
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     xxxMoveWindow @ 0x1C0104A5C (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // r13
  int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  bool v27; // cf
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-28h]
  int v30; // [rsp+48h] [rbp-20h] BYREF
  int v31; // [rsp+4Ch] [rbp-1Ch]
  int v32; // [rsp+50h] [rbp-18h]
  int v33; // [rsp+54h] [rbp-14h]

  v29 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 40);
    v11 = (*(_WORD *)(v12 + 42) & 0x3FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v28;
      *((_QWORD *)&v28 + 1) = v10;
      HMLockObject(v10);
      if ( a2 > 0x7FFF )
      {
        a2 = 0x7FFF;
      }
      else if ( a2 < -32768 )
      {
        a2 = -32768;
      }
      if ( a3 > 0x7FFF )
      {
        a3 = 0x7FFF;
      }
      else if ( a3 < -32768 )
      {
        a3 = -32768;
      }
      if ( a4 < 0 )
      {
        a4 = 0;
      }
      else if ( a4 > 0x7FFF )
      {
        a4 = 0x7FFF;
      }
      v16 = a5;
      if ( a5 < 0 )
      {
        v16 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v16 = 0x7FFF;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
      {
        v17 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
        if ( (*(_BYTE *)(v17 + 224) & 0x20) == 0 )
        {
          v18 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL);
          if ( (((unsigned __int16)(v18 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v17) >> 8)) & 0x1FF) != 0 )
            goto LABEL_33;
          v19 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL) & 0xF) != 2 || (v20 = 1, (v19 & 0x20000000) == 0) )
            v20 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v19) & 0xF) != 2
            || (v27 = (W32GetCurrentThreadDpiAwarenessContext(v21) & 0x20000000) != 0, v22 = 1, !v27) )
          {
            v22 = 0;
          }
          if ( v20 != v22 )
          {
LABEL_33:
            v30 = a2;
            v32 = a4 + a2;
            v31 = a3;
            v33 = a3 + v16;
            TransformRectBetweenCoordinateSpaces(&v30, &v30, v15, 0LL);
            v16 = v33 - v31;
          }
        }
      }
      v14 = xxxMoveWindow((struct tagWND *)v15, v16, a6);
      ThreadUnlock1(v24, v23, v25);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v14;
}
