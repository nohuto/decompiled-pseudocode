/*
 * XREFs of DestroyProcessInfo @ 0x1C00620F8
 * Callers:
 *     xxxUserProcessCallout @ 0x1C004E310 (xxxUserProcessCallout.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     UnlockObjectAssignment @ 0x1C0052170 (UnlockObjectAssignment.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DelayedDestroyCacheDC @ 0x1C005E8A8 (DelayedDestroyCacheDC.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00626AC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00626E0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     CitProcessCallout @ 0x1C0062720 (CitProcessCallout.c)
 *     RIMOnProcessDestroy @ 0x1C0062DE0 (RIMOnProcessDestroy.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C00631FC (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     IsShellProcess @ 0x1C00632FC (IsShellProcess.c)
 *     CloseProtectedHandle @ 0x1C0063328 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C0063520 (ClearAppStarting.c)
 *     GiveForegroundActivateRight @ 0x1C00637B0 (GiveForegroundActivateRight.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C0063864 (IszzzCalcStartCursorHideSupported.c)
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     CleanupLogonProcess @ 0x1C00843F0 (CleanupLogonProcess.c)
 *     PostPlaySoundMessage @ 0x1C00B381C (PostPlaySoundMessage.c)
 *     IsCleanupIAMAccessSupported @ 0x1C00BFAD4 (IsCleanupIAMAccessSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C01266AC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C0158D2C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 k; // rax
  __int64 j; // rax
  HANDLE ProcessId; // rax
  __int64 *v16; // rcx
  __int64 n; // rax
  __int64 m; // rcx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // r14d
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  void *v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  _QWORD *v38; // rbx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v43; // eax
  int v44; // eax
  __int64 *v45; // rcx
  __int64 *v46; // rdx
  __int64 *v47; // [rsp+60h] [rbp+8h] BYREF

  CitProcessCallout(a1, 0LL);
  v2 = (struct _KEVENT *)a1[2];
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject((PVOID)a1[2]);
  }
  a1[2] = 0LL;
LABEL_3:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v47);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      if ( qword_1C024FEA0 )
        qword_1C024FEA0(0LL, 0LL);
    }
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v47);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v47, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD **)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v47);
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 6LL);
  v8 = a1[34];
  if ( v8 )
  {
    PsReleaseProcessWakeCounter(v8, 1LL);
    a1[34] = 0LL;
  }
  GetDomainLockRef(15LL, v5, v6, v7);
  v9 = -1073741637;
  if ( a1[104] )
  {
    v39 = qword_1C02502D0 ? qword_1C02502D0() : -1073741637;
    if ( v39 >= 0 && qword_1C02502D8 )
      qword_1C02502D8(a1);
  }
  if ( a1[112] )
  {
    v41 = qword_1C02502E0 ? qword_1C02502E0() : -1073741637;
    if ( v41 >= 0 && qword_1C02502E8 )
      qword_1C02502E8(a1);
  }
  if ( a1[113] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[114] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( qword_1C02502F0 )
    v10 = qword_1C02502F0();
  else
    v10 = -1073741637;
  if ( v10 >= 0 && qword_1C02502F8 )
    qword_1C02502F8(a1);
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v11 = a1[83];
    if ( !v11 || (*(_DWORD *)(v11 + 64) & 2) == 0 )
    {
      v12 = qword_1C0250300 ? qword_1C0250300() : -1073741637;
      if ( v12 >= 0 )
        PostPlaySoundMessage(8LL);
    }
  }
  if ( (unsigned int)IsShellProcess(a1) && a1[42] == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0250078 )
      qword_1C0250078(a1[42]);
    if ( (*(_DWORD *)(a1[83] + 64LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v43 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v43);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v19 = *(_QWORD *)(m + 8);
      if ( *(_QWORD **)(v19 + 176) == a1 )
        *(_QWORD *)(v19 + 176) = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    GiveForegroundActivateRight(ProcessId);
    ClearAppStarting(a1);
  }
  v16 = &gppiList;
  for ( n = gppiList; n; n = *(_QWORD *)(n + 376) )
  {
    if ( (_QWORD *)n == a1 )
    {
      *v16 = a1[47];
      break;
    }
    v16 = (__int64 *)(n + 376);
  }
  v20 = *((_DWORD *)a1 + 3);
  v21 = v20 & 0x4000;
  if ( (v20 & 0x4000) != 0 && (v20 & 0x200) != 0 )
    DelayedDestroyCacheDC(1);
  if ( qword_1C0250310 )
    v22 = qword_1C0250310(v16);
  else
    v22 = -1073741637;
  if ( v22 >= 0 )
  {
    v23 = 0LL;
    v47 = 0LL;
    if ( qword_1C0250318 )
    {
      qword_1C0250318(&v47);
      v23 = v47;
    }
    while ( v23 )
    {
      if ( *((_DWORD *)v23 + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)v23 + 5) = 0;
      v23 = (__int64 *)*v23;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  InputObjectMap::OnProcessTermination();
  if ( (_QWORD *)gppiUserApiHook == a1 )
  {
    v40 = qword_1C0250320 ? qword_1C0250320(v25, v24, v26) : -1073741637;
    if ( v40 >= 0 && qword_1C0250328 )
      qword_1C0250328(v25, v24, v26);
  }
  if ( (_QWORD *)gppiDManipHook == a1 )
  {
    v44 = qword_1C0250330 ? qword_1C0250330(v25, v24, v26) : -1073741637;
    if ( v44 >= 0 && qword_1C0250338 )
      qword_1C0250338(v25, v24, v26);
  }
  UnlockObjectAssignment((void **)a1 + 83);
  UnlockObjectAssignment((void **)a1 + 42);
  v30 = (void *)a1[49];
  if ( v30 )
  {
    CloseProtectedHandle(v30);
    a1[49] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v31 = a1[45];
  if ( v31 )
  {
    ObfDereferenceObject(*(PVOID *)(v31 + 32));
    v45 = (__int64 *)gpwpiFirstWow;
    v46 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( v45 != (__int64 *)v31 )
      {
        v46 = v45;
        v45 = (__int64 *)*v45;
        if ( !v45 )
          goto LABEL_143;
      }
      *v46 = *(_QWORD *)v31;
    }
LABEL_143:
    Win32FreePool(v31);
    a1[45] = 0LL;
  }
  GetDomainLockRef(2LL, v27, v28, v29);
  v34 = (_QWORD *)a1[88];
  if ( v34 )
  {
    do
    {
      v38 = (_QWORD *)*v34;
      Win32FreePool((__int64)v34);
      v34 = v38;
    }
    while ( v38 );
  }
  a1[88] = 0LL;
  if ( qword_1C0250340 )
    v35 = qword_1C0250340(v34, v32, v33);
  else
    v35 = -1073741637;
  if ( v35 >= 0 && qword_1C0250348 )
    qword_1C0250348(a1);
  if ( a1 == (_QWORD *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (_QWORD *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    gbLockScreenActive = 0;
    if ( (*((_DWORD *)a1 + 205) & 0x80000) != 0 )
    {
      if ( qword_1C0250370 )
        v9 = qword_1C0250370(v34, v32, v33);
      if ( v9 >= 0 )
      {
        if ( qword_1C0250378 )
          qword_1C0250378(2LL);
        *((_DWORD *)a1 + 205) &= ~0x80000u;
      }
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess(v34, v32, v33);
  GreSetDCOwnerEx((unsigned int)qword_1C024CC58, 0, 0, 1u);
  if ( qword_1C0250E00 )
    qword_1C0250E00(a1);
  RIMOnProcessDestroy(*a1);
  LOBYTE(v36) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v36, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v21;
}
