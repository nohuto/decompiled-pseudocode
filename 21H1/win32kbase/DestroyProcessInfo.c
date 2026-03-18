/*
 * XREFs of DestroyProcessInfo @ 0x1C006B620
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0066B70 (xxxUserProcessCallout.c)
 * Callees:
 *     CleanupLogonProcess @ 0x1C000BDC0 (CleanupLogonProcess.c)
 *     CloseProtectedHandle @ 0x1C0019454 (CloseProtectedHandle.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C002EB64 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ClearAppStarting @ 0x1C0034D80 (ClearAppStarting.c)
 *     IsShellProcess @ 0x1C0035910 (IsShellProcess.c)
 *     PostPlaySoundMessage @ 0x1C00456DC (PostPlaySoundMessage.c)
 *     IsCleanupIAMAccessSupported @ 0x1C0051CA4 (IsCleanupIAMAccessSupported.c)
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     RIMOnProcessDestroy @ 0x1C006AE90 (RIMOnProcessDestroy.c)
 *     CitProcessCallout @ 0x1C006AF60 (CitProcessCallout.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C006E590 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C006E5D0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C00701F0 (UnlockObjectAssignment.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DelayedDestroyCacheDC @ 0x1C0076CDC (DelayedDestroyCacheDC.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     GiveForegroundActivateRight @ 0x1C00A0700 (GiveForegroundActivateRight.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00A07B4 (IszzzCalcStartCursorHideSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C012E9EC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01615DC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rcx
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 k; // rax
  __int64 j; // rax
  HANDLE ProcessId; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 m; // rcx
  int v17; // eax
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  void *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v31; // rbx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v36; // eax
  int v37; // eax
  __int64 *v38; // rcx
  __int64 *v39; // rdx
  __int128 v40; // [rsp+20h] [rbp-38h]
  __int64 v41; // [rsp+30h] [rbp-28h]
  __int64 *v42; // [rsp+60h] [rbp+8h] BYREF

  CitProcessCallout(a1, 0);
  v2 = *(struct _KEVENT **)(a1 + 16);
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
  }
  *(_QWORD *)(a1 + 16) = 0LL;
LABEL_3:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v42);
  ++gdwDeferWinEvent;
  v3 = *(_DWORD *)(a1 + 12);
  if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 12) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      if ( qword_1C0257E60 )
        qword_1C0257E60(0LL, 0LL);
    }
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v42);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v42, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD *)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v42);
  if ( (*(_DWORD *)(a1 + 12) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*(_QWORD *)a1, 6LL, 0LL);
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  GetDomainLockRef(15LL);
  v6 = -1073741637;
  if ( *(_QWORD *)(a1 + 832) )
  {
    v32 = qword_1C0258290 ? qword_1C0258290() : -1073741637;
    if ( v32 >= 0 && qword_1C0258298 )
      qword_1C0258298(a1);
  }
  if ( *(_QWORD *)(a1 + 896) )
  {
    v34 = qword_1C02582A0 ? qword_1C02582A0() : -1073741637;
    if ( v34 >= 0 && qword_1C02582A8 )
      qword_1C02582A8(a1);
  }
  if ( *(_QWORD *)(a1 + 904) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( *(_QWORD *)(a1 + 912) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( qword_1C02582B0 )
    v7 = qword_1C02582B0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C02582B8 )
    qword_1C02582B8(a1);
  if ( (*(_DWORD *)(a1 + 12) & 0x40001) == 0x40000 )
  {
    v8 = *(_QWORD *)(a1 + 664);
    if ( !v8 || (*(_DWORD *)(v8 + 64) & 2) == 0 )
    {
      v9 = qword_1C02582C0 ? qword_1C02582C0() : -1073741637;
      if ( v9 >= 0 )
        PostPlaySoundMessage();
    }
  }
  if ( (unsigned int)IsShellProcess(a1) && *(_QWORD *)(a1 + 336) == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0258038 )
      qword_1C0258038(*(_QWORD *)(a1 + 336));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 664) + 64LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v36 = PsGetProcessExitStatus(*(PEPROCESS *)a1);
        PostWinlogonMessage(1025LL, v36);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v10 = *(_QWORD *)(m + 8);
      if ( *(_QWORD *)(v10 + 176) == a1 )
        *(_QWORD *)(v10 + 176) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    GiveForegroundActivateRight(ProcessId);
    ClearAppStarting(a1);
  }
  v14 = &gppiList;
  v15 = gppiList;
  v40 = *(_OWORD *)(a1 + 296);
  v41 = *(_QWORD *)(a1 + 312);
  while ( v15 )
  {
    if ( v15 == a1 )
    {
      *v14 = *(_QWORD *)(a1 + 376);
      break;
    }
    v14 = (__int64 *)(v15 + 376);
    v15 = *(_QWORD *)(v15 + 376);
  }
  v17 = *(_DWORD *)(a1 + 12);
  v18 = v17 & 0x4000;
  if ( (v17 & 0x4000) != 0 && (v17 & 0x200) != 0 )
    DelayedDestroyCacheDC(1LL);
  if ( qword_1C02582D0 )
    v19 = qword_1C02582D0(v14);
  else
    v19 = -1073741637;
  if ( v19 >= 0 )
  {
    v14 = 0LL;
    v42 = 0LL;
    if ( qword_1C02582D8 )
    {
      qword_1C02582D8(&v42);
      v14 = v42;
    }
    while ( v14 )
    {
      if ( *((_DWORD *)v14 + 5) == *(_DWORD *)(a1 + 56) )
        *((_DWORD *)v14 + 5) = 0;
      v14 = (__int64 *)*v14;
    }
  }
  if ( gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  InputObjectMap::OnProcessTermination((__int64)v14, v10);
  if ( gppiUserApiHook == a1 )
  {
    v33 = qword_1C02582E0 ? qword_1C02582E0(v21, v20, v22) : -1073741637;
    if ( v33 >= 0 && qword_1C02582E8 )
      qword_1C02582E8(v21, v20, v22);
  }
  if ( gppiDManipHook == a1 )
  {
    v37 = qword_1C02582F0 ? qword_1C02582F0(v21, v20, v22) : -1073741637;
    if ( v37 >= 0 && qword_1C02582F8 )
      qword_1C02582F8(v21, v20, v22);
  }
  UnlockObjectAssignment(a1 + 664);
  UnlockObjectAssignment(a1 + 336);
  v23 = *(void **)(a1 + 392);
  if ( v23 )
  {
    CloseProtectedHandle(v23);
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  *(_DWORD *)(a1 + 12) |= 0x1000u;
  v24 = *(_QWORD *)(a1 + 360);
  if ( v24 )
  {
    ObfDereferenceObject(*(PVOID *)(v24 + 32));
    v38 = (__int64 *)gpwpiFirstWow;
    v39 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v38 != (__int64 *)v24 )
      {
        v39 = v38;
        v38 = (__int64 *)*v38;
        if ( !v38 )
          goto LABEL_143;
      }
      *v39 = *(_QWORD *)v24;
    }
LABEL_143:
    Win32FreePool(v24);
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  GetDomainLockRef(2LL);
  v27 = *(_QWORD **)(a1 + 704);
  if ( v27 )
  {
    do
    {
      v31 = (_QWORD *)*v27;
      Win32FreePool(v27);
      v27 = v31;
    }
    while ( v31 );
  }
  *(_QWORD *)(a1 + 704) = 0LL;
  if ( qword_1C0258300 )
    v28 = qword_1C0258300(v27, v25, v26);
  else
    v28 = -1073741637;
  if ( v28 >= 0 && qword_1C0258308 )
    qword_1C0258308(a1);
  if ( a1 == gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *(_DWORD *)(a1 + 56) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    gbLockScreenActive = 0;
    if ( (*(_DWORD *)(a1 + 820) & 0x80000) != 0 )
    {
      if ( qword_1C0258330 )
        v6 = qword_1C0258330(v27, v25, v26);
      if ( v6 >= 0 )
      {
        if ( qword_1C0258338 )
          qword_1C0258338(2LL);
        *(_DWORD *)(a1 + 820) &= ~0x80000u;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 56) == gpidLogon )
    CleanupLogonProcess();
  GreSetDCOwnerEx(qword_1C0254BE8, 0LL, 0LL, 1LL, v40, *((_QWORD *)&v40 + 1), v41);
  if ( qword_1C0258DC0 )
    qword_1C0258DC0(a1);
  RIMOnProcessDestroy(*(struct _LIST_ENTRY **)a1);
  LOBYTE(v29) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v29, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v18;
}
