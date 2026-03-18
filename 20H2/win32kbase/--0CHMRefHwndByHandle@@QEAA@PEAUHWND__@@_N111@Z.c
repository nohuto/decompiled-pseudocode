/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0075900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     IsGetDesktopViewSupported @ 0x1C0075D38 (IsGetDesktopViewSupported.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0075D64 (WPP_RECORDER_SF_qqq.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0077624 (EtwTraceUIPIHandleValidationError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     HMIsHandleEntrySecureWorker @ 0x1C0119680 (HMIsHandleEntrySecureWorker.c)
 */

CHMRefHwndByHandle *__fastcall CHMRefHwndByHandle::CHMRefHwndByHandle(
        CHMRefHwndByHandle *this,
        HWND a2,
        char a3,
        char a4,
        bool a5,
        bool a6)
{
  HWND v8; // r14
  __int64 v10; // rdx
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r10d
  struct _KTHREAD *v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v37; // rax
  int v38; // edi
  __int64 v39; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int128 v46; // [rsp+40h] [rbp-48h]
  __int64 v47; // [rsp+50h] [rbp-38h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      20,
      10,
      (__int64)&WPP_aad262c765e8369396b81b2929ec690f_Traceguids);
  }
  *(_QWORD *)this = 0LL;
  LODWORD(v10) = (unsigned __int16)v8;
  if ( (unsigned __int64)(unsigned __int16)v8 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_18;
  v11 = (char *)qword_1C0248D48 + (unsigned int)(unsigned __int16)v8 * dword_1C0248D50;
  v12 = (char *)gpKernelHandleTable + 24 * ((__int64)((unsigned int)(unsigned __int16)v8 * dword_1C0248D50) >> 5);
  if ( WORD1(v8) != *((_WORD *)v11 + 13)
    && WORD1(v8) != 0xFFFF
    && (WORD1(v8) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    goto LABEL_18;
  }
  if ( v11[24] != 1 || (v11[25] & 1) != 0 )
    goto LABEL_18;
  v13 = *(_QWORD *)v12;
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v12 + 8LL));
  *(_QWORD *)this = v13;
  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v17, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  v21 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v22 = *(_QWORD *)(v21 + 424);
  v47 = *(_QWORD *)(v22 + 312);
  v46 = *(_OWORD *)(v22 + 296);
  if ( a3 )
  {
    if ( v21 != v15
      && *(_QWORD *)(*(_QWORD *)this + 24LL) != *(_QWORD *)(v15 + 456)
      && (*(_DWORD *)(v15 + 488) & 4) == 0 )
    {
      if ( (int)IsGetDesktopViewSupported() < 0
        || (v10 = *(_QWORD *)(*(_QWORD *)this + 24LL), !qword_1C024FC68)
        || !qword_1C024FC68(*(_QWORD *)(v15 + 424), v10) )
      {
LABEL_17:
        *((_QWORD *)this + 1) = *(_QWORD *)this;
        *(_QWORD *)this = 0LL;
        goto LABEL_18;
      }
    }
  }
  if ( a4 && *(_DWORD *)(*(_QWORD *)(v21 + 424) + 888LL) != 1 )
    a4 = 0;
  if ( !a6
    || (v24 = *(_QWORD *)(v21 + 424), v25 = *(_QWORD *)(v15 + 424), !UIPrivelegeIsolation::fEnforce)
    || (v10 = *(unsigned int *)(v25 + 880), v19 = *(unsigned int *)(v24 + 880), (unsigned int)v10 > (unsigned int)v19)
    || (_DWORD)v10 == (_DWORD)v19
    && ((v20 = *(unsigned int *)(v25 + 884), v26 = *(_DWORD *)(v24 + 884), (_DWORD)v20 == v26)
     || (_DWORD)v20 == -1
     || v26 == -1)
    || a4
    && (_DWORD)v10 == (_DWORD)v19
    && (unsigned __int8)SeIsParentOfChildAppContainer(
                          (unsigned int)gSessionId,
                          *(unsigned int *)(v25 + 884),
                          *(unsigned int *)(v24 + 884))
    || (v10 = *(_QWORD *)(v21 + 424), *(PVOID *)v10 == gpepCSRSS) )
  {
    if ( a5 )
    {
      v27 = KeGetCurrentThread();
      v28 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v37 = PsGetCurrentProcess(v30, v29),
            v38 = PsGetProcessSessionIdEx(v37),
            v39 = PsGetCurrentThreadProcess(),
            v38 == (unsigned int)PsGetProcessSessionIdEx(v39)) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(v27);
        if ( v31 )
          v28 = *v31;
      }
      v10 = *(_QWORD *)this;
      v32 = *(_QWORD *)(*(_QWORD *)(v28 + 456) + 8LL);
      if ( *(_QWORD *)(v32 + 24) != *(_QWORD *)this )
      {
        if ( !UIPrivelegeIsolation::fEnforce
          || (v32 = *(unsigned int *)(*(_QWORD *)(v10 + 16) + 488LL), (v32 & 0xC) != 0) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
          v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL);
          v10 = *(unsigned int *)(v41 + 780);
          if ( *(_DWORD *)(CurrentProcessWin32Process + 780) != (_DWORD)v10
            || (v42 = PsGetCurrentProcessWin32Process(v41),
                v10 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL) + 784LL),
                *(_DWORD *)(v42 + 784) != (_DWORD)v10) )
          {
            UserSetLastError(5LL, v10);
            goto LABEL_18;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v15 + 488) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 424) + 768LL) + 24LL) & 1) != 0 )
    {
      GetDomainLockRef(14LL, v10, v19, v20);
      GetDomainLockRef(17LL, v43, v44, v45);
      if ( !(unsigned int)HMIsHandleEntrySecureWorker(v8) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return this;
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v10,
          20,
          12,
          (__int64)&WPP_aad262c765e8369396b81b2929ec690f_Traceguids,
          (char)v8);
        goto LABEL_18;
      }
    }
    goto LABEL_17;
  }
  EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v15 + 424));
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return this;
  LOBYTE(v33) = 2;
  WPP_RECORDER_SF_qqq(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    v33,
    20,
    11,
    (__int64)&WPP_aad262c765e8369396b81b2929ec690f_Traceguids,
    (char)v8,
    *(_QWORD *)(v21 + 424),
    *(_QWORD *)(v15 + 424),
    v46,
    v47);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      20,
      13,
      (__int64)&WPP_aad262c765e8369396b81b2929ec690f_Traceguids);
  }
  return this;
}
