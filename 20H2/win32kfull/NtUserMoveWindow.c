/*
 * XREFs of NtUserMoveWindow @ 0x1C01054A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxMoveWindow @ 0x1C01056BC (xxxMoveWindow.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserMoveWindow(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r13
  int v14; // esi
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v25; // cf
  __int128 v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]
  int v28; // [rsp+48h] [rbp-20h] BYREF
  int v29; // [rsp+4Ch] [rbp-1Ch]
  int v30; // [rsp+50h] [rbp-18h]
  int v31; // [rsp+54h] [rbp-14h]

  v27 = 0LL;
  v26 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v12 = 0;
  v13 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    if ( (((*(_WORD *)(v11 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v26;
      *((_QWORD *)&v26 + 1) = v10;
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
      v14 = a5;
      if ( a5 < 0 )
      {
        v14 = 0;
      }
      else if ( a5 > 0x7FFF )
      {
        v14 = 0x7FFF;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v15) >> 8)) & 0x1FF) != 0 )
            goto LABEL_33;
          v17 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v18 = 1, (v17 & 0x20000000) == 0) )
            v18 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) != 2
            || (v25 = (W32GetCurrentThreadDpiAwarenessContext(v19) & 0x20000000) != 0, v20 = 1, !v25) )
          {
            v20 = 0;
          }
          if ( v18 != v20 )
          {
LABEL_33:
            v28 = a2;
            v30 = a4 + a2;
            v29 = a3;
            v31 = a3 + v14;
            TransformRectBetweenCoordinateSpaces(&v28, &v28, v13, 0LL);
            v14 = v31 - v29;
          }
        }
      }
      v12 = xxxMoveWindow((struct tagWND *)v13, v14, a6);
      ThreadUnlock1(v22, v21, v23);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
