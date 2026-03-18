/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00A3B70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetMenuBarInfo @ 0x1C00A76D4 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  _BYTE *v11; // rdx
  int MenuBarInfo; // edi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD *v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rcx
  int v31; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int128 v41; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-90h]
  __int128 v43; // [rsp+60h] [rbp-78h] BYREF
  __int128 v44; // [rsp+70h] [rbp-68h]
  __int128 v45; // [rsp+80h] [rbp-58h]

  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    *(_QWORD *)&v41 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v41;
    *((_QWORD *)&v41 + 1) = v10;
    HMLockObject(v10);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[47] = v11[47];
    LODWORD(v43) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v10);
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v15)
      || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 472) + 224LL) & 1) == 0 )
    {
      v23 = KeGetCurrentThread();
      v24 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v21)
        || (v37 = PsGetCurrentProcess(v26, v25, v27),
            v38 = PsGetProcessSessionIdEx(v37),
            v40 = PsGetCurrentThreadProcess(v39),
            v38 == (unsigned int)PsGetProcessSessionIdEx(v40)) )
      {
        v28 = (__int64 *)PsGetThreadWin32Thread(v23);
        if ( v28 )
          v24 = *v28;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v24 + 472) + 224LL) & 0x20) == 0 )
      {
        v29 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
        if ( (((unsigned __int16)(v29 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v21) >> 8)) & 0x1FF) != 0 )
          goto LABEL_24;
        v30 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
        v31 = (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) == 2 && (v30 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v30) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v21) & 0x20000000) == 0 )
        {
          v6 = 0;
        }
        if ( v31 != v6 )
LABEL_24:
          TransformRectBetweenCoordinateSpaces((char *)&v43 + 4, (char *)&v43 + 4, 0LL, v10);
      }
    }
    if ( MenuBarInfo )
    {
      DWORD1(v44) = 0;
      HIDWORD(v45) = 0;
      *(_OWORD *)a4 = v43;
      *(_OWORD *)(a4 + 16) = v44;
      *(_OWORD *)(a4 + 32) = v45;
    }
    ThreadUnlock1(v21, v20, v22);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return MenuBarInfo;
}
