/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C009D130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     IsGetDesktopViewSupported @ 0x1C009D568 (IsGetDesktopViewSupported.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C009D594 (WPP_RECORDER_SF_qqq.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C009FF74 (EtwTraceUIPIHandleValidationError.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     HMIsHandleEntrySecureWorker @ 0x1C0121E50 (HMIsHandleEntrySecureWorker.c)
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
  __int64 v12; // rcx
  char *v13; // rsi
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned int v25; // r8d
  int v26; // r9d
  int v27; // r10d
  struct _KTHREAD *v28; // r15
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v37; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v39; // rax
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
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
      (__int64)&WPP_29a97ae58616326ad9c6a2e4c691af40_Traceguids);
  }
  *(_QWORD *)this = 0LL;
  LODWORD(v10) = (unsigned __int16)v8;
  if ( (unsigned __int64)(unsigned __int16)v8 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_18;
  v11 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)v8 * dword_1C0250D50;
  v12 = 3 * ((__int64)((unsigned int)(unsigned __int16)v8 * dword_1C0250D50) >> 5);
  v13 = (char *)gpKernelHandleTable + 24 * ((__int64)((unsigned int)(unsigned __int16)v8 * dword_1C0250D50) >> 5);
  if ( WORD1(v8) != *((_WORD *)v11 + 13) )
  {
    v12 = 0xFFFFLL;
    if ( WORD1(v8) != 0xFFFF && (WORD1(v8) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
      goto LABEL_18;
  }
  if ( v11[24] != 1 || (v11[25] & 1) != 0 )
    goto LABEL_18;
  v14 = *(_QWORD *)v13;
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v13 + 8LL));
  *(_QWORD *)this = v14;
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (CurrentProcess = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v37),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
  }
  v21 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v22 = *(_QWORD *)(v21 + 416);
  v47 = *(_QWORD *)(v22 + 312);
  v46 = *(_OWORD *)(v22 + 296);
  if ( a3 )
  {
    if ( v21 != v16 )
    {
      v20 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)this + 24LL) != *(_QWORD *)(v16 + 448) && (*(_DWORD *)(v16 + 480) & 4) == 0 )
      {
        if ( (int)IsGetDesktopViewSupported() < 0
          || (v10 = *(_QWORD *)(*(_QWORD *)this + 24LL), !qword_1C0257C28)
          || !qword_1C0257C28(*(_QWORD *)(v16 + 416), v10) )
        {
LABEL_17:
          *((_QWORD *)this + 1) = *(_QWORD *)this;
          *(_QWORD *)this = 0LL;
          goto LABEL_18;
        }
      }
    }
  }
  if ( a4 && *(_DWORD *)(*(_QWORD *)(v21 + 416) + 888LL) != 1 )
    a4 = 0;
  if ( !a6
    || (v24 = *(_QWORD *)(v21 + 416), v20 = *(_QWORD *)(v16 + 416), !UIPrivelegeIsolation::fEnforce)
    || (LODWORD(v10) = *(_DWORD *)(v20 + 880), v25 = *(_DWORD *)(v24 + 880), (unsigned int)v10 > v25)
    || (_DWORD)v10 == v25
    && ((v26 = *(_DWORD *)(v20 + 884), v27 = *(_DWORD *)(v24 + 884), v26 == v27) || v26 == -1 || v27 == -1)
    || a4
    && (_DWORD)v10 == v25
    && (unsigned __int8)SeIsParentOfChildAppContainer(
                          (unsigned int)gSessionId,
                          *(unsigned int *)(v20 + 884),
                          *(unsigned int *)(v24 + 884))
    || (v10 = *(_QWORD *)(v21 + 416), *(PVOID *)v10 == gpepCSRSS) )
  {
    if ( a5 )
    {
      v28 = KeGetCurrentThread();
      v29 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v20)
        || (v39 = PsGetCurrentProcess(v31, v30),
            v40 = PsGetProcessSessionIdEx(v39),
            v42 = PsGetCurrentThreadProcess(v41),
            v40 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
      {
        v32 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v32 )
          v29 = *v32;
      }
      v10 = *(_QWORD *)this;
      v33 = *(_QWORD *)(*(_QWORD *)(v29 + 448) + 8LL);
      if ( *(_QWORD *)(v33 + 24) != *(_QWORD *)this )
      {
        if ( !UIPrivelegeIsolation::fEnforce
          || (v33 = *(unsigned int *)(*(_QWORD *)(v10 + 16) + 480LL), (v33 & 0xC) != 0) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
          v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL);
          v10 = *(unsigned int *)(v44 + 780);
          if ( *(_DWORD *)(CurrentProcessWin32Process + 780) != (_DWORD)v10
            || (v45 = PsGetCurrentProcessWin32Process(v44),
                v10 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 416LL) + 784LL),
                *(_DWORD *)(v45 + 784) != (_DWORD)v10) )
          {
            UserSetLastError(5LL, v10);
            goto LABEL_18;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v16 + 480) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 416) + 768LL) + 24LL) & 1) != 0 )
    {
      GetDomainLockRef(14LL);
      GetDomainLockRef(17LL);
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
          (__int64)&WPP_29a97ae58616326ad9c6a2e4c691af40_Traceguids,
          (char)v8);
        goto LABEL_18;
      }
    }
    goto LABEL_17;
  }
  EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v16 + 416));
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return this;
  LOBYTE(v34) = 2;
  WPP_RECORDER_SF_qqq(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    v34,
    20,
    11,
    (__int64)&WPP_29a97ae58616326ad9c6a2e4c691af40_Traceguids,
    (char)v8,
    *(_QWORD *)(v21 + 416),
    *(_QWORD *)(v16 + 416),
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
      (__int64)&WPP_29a97ae58616326ad9c6a2e4c691af40_Traceguids);
  }
  return this;
}
