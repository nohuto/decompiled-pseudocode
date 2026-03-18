/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C00A5910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00A3450 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rdx
  ULONG64 v7; // rcx
  unsigned __int64 *v8; // r8
  __int64 v9; // r13
  unsigned __int64 *v10; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  struct _KTHREAD *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rcx
  int v29; // eax
  struct _KTHREAD *v30; // r15
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 v36; // rcx
  struct _KTHREAD *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // edi
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rcx
  bool v49; // cf
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v52; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v54; // rax
  int v55; // edi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // edi
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // edi
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v67; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v68; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v67 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (unsigned __int64 *)MmUserProbeAddress;
    v68 = *v10;
    v67 = v68;
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(MmUserProbeAddress)
      || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v52),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 472) + 224LL) & 1) == 0 )
    {
      v18 = KeGetCurrentThread();
      v19 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v17)
        || (v54 = PsGetCurrentProcess(v21, v20, v22),
            v55 = PsGetProcessSessionIdEx(v54),
            v57 = PsGetCurrentThreadProcess(v56),
            v55 == (unsigned int)PsGetProcessSessionIdEx(v57)) )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v18);
        if ( v23 )
          v19 = *v23;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v19 + 472) + 224LL) & 0x20) == 0 )
      {
        v25 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
        if ( (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v24) >> 8)) & 0x1FF) != 0 )
          goto LABEL_36;
        v26 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 288LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) != 2 || (v27 = 1, (v26 & 0x20000000) == 0) )
          v27 = 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v26) & 0xF) != 2
          || (v49 = (W32GetCurrentThreadDpiAwarenessContext(v28) & 0x20000000) != 0, v29 = 1, !v49) )
        {
          v29 = 0;
        }
        if ( v27 != v29 )
LABEL_36:
          v5 = v67;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v67, &v67, v9, 0LL);
    if ( DCEPtInRect((_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL), v67) )
    {
      v30 = KeGetCurrentThread();
      v31 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v7)
        || (v58 = PsGetCurrentProcess(v33, v32, v34),
            v59 = PsGetProcessSessionIdEx(v58),
            v61 = PsGetCurrentThreadProcess(v60),
            v59 == (unsigned int)PsGetProcessSessionIdEx(v61)) )
      {
        v35 = (__int64 *)PsGetThreadWin32Thread(v30);
        if ( v35 )
          v31 = *v35;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v31 + 472) + 224LL) & 1) == 0 )
      {
        v37 = KeGetCurrentThread();
        v38 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v36)
          || (v62 = PsGetCurrentProcess(v40, v39, v41),
              v63 = PsGetProcessSessionIdEx(v62),
              v65 = PsGetCurrentThreadProcess(v64),
              v63 == (unsigned int)PsGetProcessSessionIdEx(v65)) )
        {
          v42 = (__int64 *)PsGetThreadWin32Thread(v37);
          if ( v42 )
            v38 = *v42;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v38 + 472) + 224LL) & 0x20) == 0 )
        {
          v44 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
          if ( (((unsigned __int16)(v44 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v43) >> 8)) & 0x1FF) != 0 )
            goto LABEL_37;
          v45 = *(unsigned int *)(*(_QWORD *)(v9 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) != 2 || (v46 = 1, (v45 & 0x20000000) == 0) )
            v46 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v45) & 0xF) == 2
            && (W32GetCurrentThreadDpiAwarenessContext(v47) & 0x20000000) != 0 )
          {
            v4 = 1;
          }
          if ( v46 != v4 )
LABEL_37:
            v67 = v5;
        }
      }
      v7 = MmUserProbeAddress;
      v8 = a2;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_QWORD *)MmUserProbeAddress;
      *v6 = *v6;
      *a2 = v67;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}
