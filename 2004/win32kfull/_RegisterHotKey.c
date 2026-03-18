/*
 * XREFs of _RegisterHotKey @ 0x1C003D584
 * Callers:
 *     NtUserRegisterHotKey @ 0x1C003D250 (NtUserRegisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00BF690 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     xxxSetShellWindow @ 0x1C00BF934 (xxxSetShellWindow.c)
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C00C824C (-SetPenHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00C8328 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00C837C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     SetDebugHotKeys @ 0x1C00C8644 (SetDebugHotKeys.c)
 * Callees:
 *     IsShellProcess @ 0x1C00288E8 (IsShellProcess.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C003D8F0 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003DA4C (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C012741C (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01EAFE4 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

_BOOL8 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  int v8; // r15d
  __int64 v9; // rcx
  __int16 v10; // si
  unsigned int v11; // ebp
  unsigned __int16 v12; // si
  __int16 v13; // r12
  int v14; // r8d
  struct tagHOTKEY *v15; // rbx
  __int64 v16; // rbx
  __int16 v17; // ax
  __int64 v18; // rcx
  struct tagHOTKEY * near *j; // rbx
  __int16 v21; // ax
  __int64 v22; // rax
  int *i; // rcx
  __int64 v24; // rcx
  struct tagHOTKEY *v25; // [rsp+40h] [rbp-48h] BYREF
  struct tagWND *v26; // [rsp+48h] [rbp-40h]

  v25 = 0LL;
  if ( PsGetCurrentProcess() != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  if ( (a4 & 0x8000) == 0 || (v8 = 1, PsGetCurrentProcess() != gpepCSRSS) )
    v8 = 0;
  v9 = *(_QWORD *)(gptiCurrent + 416LL);
  v10 = a4;
  v11 = a4 & 0xF;
  v12 = v10 & 0x7A00;
  if ( *(int *)(v9 + 12) < 0 )
  {
    v12 |= 0x2000u;
  }
  else if ( (v12 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v9) && !a2 )
  {
    v24 = 5LL;
LABEL_42:
    UserSetLastError(v24);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v24 = 1408LL;
    goto LABEL_42;
  }
  v13 = v12 & 0x200;
  if ( (v12 & 0x200) != 0 && (v8 || a1 == (struct tagWND *)1) )
    return 0LL;
  if ( !(unsigned int)FindHotKey(gptiCurrent, a1, a3, v11, BugCheckParameter2, &v25) )
  {
    v15 = v25;
    if ( v25 )
    {
      if ( *((__int16 *)v25 + 13) < 0 || v8 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v25 + 7) | 0x80000000LL,
          *((unsigned __int16 *)v25 + 12),
          *((unsigned __int16 *)v25 + 13));
      *((_WORD *)v25 + 13) = v12;
      if ( *((_WORD *)v15 + 12) != (_WORD)v11 || *((_DWORD *)v15 + 7) != (_DWORD)BugCheckParameter2 || !v13 )
        HKRemoveMatchingChildHotkeys(v15, 0LL, 0LL, 0LL, 4);
      *((_WORD *)v15 + 12) = v11;
      *((_DWORD *)v15 + 7) = BugCheckParameter2;
      goto LABEL_21;
    }
    v16 = Win32AllocPool(64LL, 1802007381LL);
    if ( v16 )
    {
      if ( v8 )
      {
        v22 = 0LL;
        for ( i = dword_1C0339C4C; *i; i += 2 )
        {
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= 2 )
          {
            Win32FreePool(v16);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v11, v12);
          }
        }
        dword_1C0339C4C[2 * v22] = BugCheckParameter2;
        *((_DWORD *)&gSasKeyList + 2 * v22) = v11;
      }
      *(_QWORD *)v16 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v16 + 16) = a1;
      }
      else
      {
        v26 = a1;
        *(_QWORD *)(v16 + 16) = 0LL;
        v25 = (struct tagHOTKEY *)(v16 + 16);
        HMAssignmentLock(&v25);
      }
      *(_DWORD *)(v16 + 32) = a3;
      if ( v8 )
      {
        v17 = 0x8000;
        *(_WORD *)(v16 + 26) = 0x8000;
      }
      else
      {
        *(_WORD *)(v16 + 26) = 0;
        v17 = 0;
      }
      *(_WORD *)(v16 + 26) = v12 | v17;
      *(_WORD *)(v16 + 24) = v11;
      *(_DWORD *)(v16 + 28) = BugCheckParameter2;
      *(_QWORD *)(v16 + 8) = a2;
      *(_QWORD *)(v16 + 56) = v16 + 48;
      *(_QWORD *)(v16 + 48) = v16 + 48;
      v18 = *(_BYTE *)(v16 + 28) & 0x7F;
      *(_QWORD *)(v16 + 40) = (&gphkHashTable)[v18];
      (&gphkHashTable)[v18] = (struct tagHOTKEY * near *)v16;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)v16, 0LL, 1);
LABEL_21:
      qword_1C033AAA0 = 0LL;
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 || v8 || a1 == (struct tagWND *)1 )
    return 0LL;
  for ( j = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
        j && __PAIR64__(*((_DWORD *)j + 7), *((unsigned __int16 *)j + 12)) != __PAIR64__(BugCheckParameter2, v11);
        j = (struct tagHOTKEY * near *)j[5] )
  {
    ;
  }
  if ( !j || (v21 = *((_WORD *)j + 13), (v21 & 0x200) == 0) )
  {
    v24 = 1409LL;
    goto LABEL_42;
  }
  if ( v13 )
  {
    if ( (v21 & 0x100) != 0 )
    {
      if ( a1 )
      {
        v26 = a1;
        j[2] = 0LL;
        v25 = (struct tagHOTKEY *)(j + 2);
        HMAssignmentLock(&v25);
        v14 = a3;
      }
      else
      {
        j[2] = 0LL;
      }
      *((_WORD *)j + 13) = v12;
      *j = (struct tagHOTKEY *)gptiCurrent;
      j[1] = 0LL;
      *((_DWORD *)j + 8) = v14;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)j, 0LL, 1);
      return 1LL;
    }
    return 0LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)j, a1, v14, v12);
}
