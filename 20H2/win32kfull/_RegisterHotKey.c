/*
 * XREFs of _RegisterHotKey @ 0x1C002ED74
 * Callers:
 *     SetDebugHotKeys @ 0x1C000907C (SetDebugHotKeys.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C0009118 (-SetPenHotKeys@@YAXXZ.c)
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C002B044 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C002D20C (-SetWinlogonHotKeys@@YAXXZ.c)
 *     NtUserRegisterHotKey @ 0x1C002EA40 (NtUserRegisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C007FA20 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     xxxSetShellWindow @ 0x1C007FB34 (xxxSetShellWindow.c)
 * Callees:
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C002F0E0 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C002F23C (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C002F4F0 (CheckWinstaAttributeAccess.c)
 *     IsShellProcess @ 0x1C003BB28 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01292BC (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01EA374 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

_BOOL8 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, __int64 a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r15d
  __int16 v12; // si
  unsigned int v13; // ebp
  unsigned __int16 v14; // si
  __int16 v15; // r12
  int v16; // r8d
  struct tagHOTKEY *v17; // rbx
  __int64 v18; // rbx
  __int16 v19; // ax
  __int64 v20; // rcx
  struct tagHOTKEY * near *j; // rbx
  __int16 v23; // ax
  __int64 v24; // rax
  int *i; // rcx
  __int64 v26; // rcx
  struct tagHOTKEY *v27; // [rsp+40h] [rbp-48h] BYREF
  struct tagWND *v28; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v27 = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  if ( (a4 & 0x8000) == 0 || (v11 = 1, PsGetCurrentProcess(v9, v8, v10) != gpepCSRSS) )
    v11 = 0;
  v12 = a4;
  v13 = a4 & 0xF;
  v14 = v12 & 0x7A00;
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) < 0 )
  {
    v14 |= 0x2000u;
  }
  else if ( (v14 & 0x2000) != 0 && !(unsigned int)IsShellProcess() && !a2 )
  {
    v26 = 5LL;
LABEL_42:
    UserSetLastError(v26);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v26 = 1408LL;
    goto LABEL_42;
  }
  v15 = v14 & 0x200;
  if ( (v14 & 0x200) != 0 && (v11 || a1 == (struct tagWND *)1) )
    return 0LL;
  if ( !(unsigned int)FindHotKey(gptiCurrent, a1, v30, v13, BugCheckParameter2, &v27) )
  {
    v17 = v27;
    if ( v27 )
    {
      if ( *((__int16 *)v27 + 13) < 0 || v11 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v27 + 7) | 0x80000000LL,
          *((unsigned __int16 *)v27 + 12),
          *((unsigned __int16 *)v27 + 13));
      *((_WORD *)v27 + 13) = v14;
      if ( *((_WORD *)v17 + 12) != (_WORD)v13 || *((_DWORD *)v17 + 7) != (_DWORD)BugCheckParameter2 || !v15 )
        HKRemoveMatchingChildHotkeys(v17, 0LL, 0LL, 0LL, 4);
      *((_WORD *)v17 + 12) = v13;
      *((_DWORD *)v17 + 7) = BugCheckParameter2;
      goto LABEL_21;
    }
    v18 = Win32AllocPool(64LL, 1802007381LL);
    if ( v18 )
    {
      if ( v11 )
      {
        v24 = 0LL;
        for ( i = dword_1C0338C6C; *i; i += 2 )
        {
          v24 = (unsigned int)(v24 + 1);
          if ( (unsigned int)v24 >= 2 )
          {
            Win32FreePool(v18);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v13, v14);
          }
        }
        dword_1C0338C6C[2 * v24] = BugCheckParameter2;
        *((_DWORD *)&gSasKeyList + 2 * v24) = v13;
      }
      *(_QWORD *)v18 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v18 + 16) = a1;
      }
      else
      {
        v28 = a1;
        *(_QWORD *)(v18 + 16) = 0LL;
        v27 = (struct tagHOTKEY *)(v18 + 16);
        HMAssignmentLock(&v27);
      }
      *(_DWORD *)(v18 + 32) = v30;
      if ( v11 )
      {
        v19 = 0x8000;
        *(_WORD *)(v18 + 26) = 0x8000;
      }
      else
      {
        *(_WORD *)(v18 + 26) = 0;
        v19 = 0;
      }
      *(_WORD *)(v18 + 26) = v14 | v19;
      *(_WORD *)(v18 + 24) = v13;
      *(_DWORD *)(v18 + 28) = BugCheckParameter2;
      *(_QWORD *)(v18 + 8) = a2;
      *(_QWORD *)(v18 + 56) = v18 + 48;
      *(_QWORD *)(v18 + 48) = v18 + 48;
      v20 = *(_BYTE *)(v18 + 28) & 0x7F;
      *(_QWORD *)(v18 + 40) = (&gphkHashTable)[v20];
      (&gphkHashTable)[v20] = (struct tagHOTKEY * near *)v18;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)v18, 0LL, 1);
LABEL_21:
      qword_1C0339AD8 = 0LL;
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 || v11 || a1 == (struct tagWND *)1 )
    return 0LL;
  for ( j = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
        j && __PAIR64__(*((_DWORD *)j + 7), *((unsigned __int16 *)j + 12)) != __PAIR64__(BugCheckParameter2, v13);
        j = (struct tagHOTKEY * near *)j[5] )
  {
    ;
  }
  if ( !j || (v23 = *((_WORD *)j + 13), (v23 & 0x200) == 0) )
  {
    v26 = 1409LL;
    goto LABEL_42;
  }
  if ( v15 )
  {
    if ( (v23 & 0x100) != 0 )
    {
      if ( a1 )
      {
        v28 = a1;
        j[2] = 0LL;
        v27 = (struct tagHOTKEY *)(j + 2);
        HMAssignmentLock(&v27);
        v16 = v30;
      }
      else
      {
        j[2] = 0LL;
      }
      *((_WORD *)j + 13) = v14;
      *j = (struct tagHOTKEY *)gptiCurrent;
      j[1] = 0LL;
      *((_DWORD *)j + 8) = v16;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)j, 0LL, 1);
      return 1LL;
    }
    return 0LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)j, a1, v16, v14);
}
