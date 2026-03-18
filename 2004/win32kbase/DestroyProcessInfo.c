/*
 * XREFs of DestroyProcessInfo @ 0x1C0078F74
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0072150 (xxxUserProcessCallout.c)
 * Callees:
 *     CleanupLogonProcess @ 0x1C0020D00 (CleanupLogonProcess.c)
 *     CloseProtectedHandle @ 0x1C0029104 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C0031440 (ClearAppStarting.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1C003D3A4 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     IsShellProcess @ 0x1C0045050 (IsShellProcess.c)
 *     PostPlaySoundMessage @ 0x1C00533E8 (PostPlaySoundMessage.c)
 *     IsCleanupIAMAccessSupported @ 0x1C005F7B4 (IsCleanupIAMAccessSupported.c)
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0071C74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0071CB4 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0076460 (UnlockObjectAssignment.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     CitProcessCallout @ 0x1C009E2D8 (CitProcessCallout.c)
 *     DelayedDestroyCacheDC @ 0x1C00A5AA8 (DelayedDestroyCacheDC.c)
 *     RIMOnProcessDestroy @ 0x1C00AA6C0 (RIMOnProcessDestroy.c)
 *     GiveForegroundActivateRight @ 0x1C00AE3F0 (GiveForegroundActivateRight.c)
 *     IszzzCalcStartCursorHideSupported @ 0x1C00AE4A4 (IszzzCalcStartCursorHideSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C01289FC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C015B28C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
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
  __int64 n; // rax
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
  __int64 *v40; // [rsp+60h] [rbp+8h] BYREF

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
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v40);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
    {
      if ( qword_1C0251EA0 )
        qword_1C0251EA0(0LL, 0LL);
    }
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v40);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v40, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD **)(j + 256) == a1 )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v40);
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 6LL, 0LL);
  v5 = a1[34];
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    a1[34] = 0LL;
  }
  GetDomainLockRef(15LL);
  v6 = -1073741637;
  if ( a1[104] )
  {
    v32 = qword_1C02522D0 ? qword_1C02522D0() : -1073741637;
    if ( v32 >= 0 && qword_1C02522D8 )
      qword_1C02522D8(a1);
  }
  if ( a1[112] )
  {
    v34 = qword_1C02522E0 ? qword_1C02522E0() : -1073741637;
    if ( v34 >= 0 && qword_1C02522E8 )
      qword_1C02522E8(a1);
  }
  if ( a1[113] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[114] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( qword_1C02522F0 )
    v7 = qword_1C02522F0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C02522F8 )
    qword_1C02522F8(a1);
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v8 = a1[83];
    if ( !v8 || (*(_DWORD *)(v8 + 64) & 2) == 0 )
    {
      v9 = qword_1C0252300 ? qword_1C0252300() : -1073741637;
      if ( v9 >= 0 )
        PostPlaySoundMessage();
    }
  }
  if ( (unsigned int)IsShellProcess((__int64)a1) && a1[42] == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported() >= 0 && qword_1C0252078 )
      qword_1C0252078(a1[42]);
    if ( (*(_DWORD *)(a1[83] + 64LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v36 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v36);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
    {
      v10 = *(_QWORD *)(m + 8);
      if ( *(_QWORD **)(v10 + 176) == a1 )
        *(_QWORD *)(v10 + 176) = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    GiveForegroundActivateRight(ProcessId);
    ClearAppStarting((__int64)a1);
  }
  v14 = &gppiList;
  for ( n = gppiList; n; n = *(_QWORD *)(n + 376) )
  {
    if ( (_QWORD *)n == a1 )
    {
      *v14 = a1[47];
      break;
    }
    v14 = (__int64 *)(n + 376);
  }
  v17 = *((_DWORD *)a1 + 3);
  v18 = v17 & 0x4000;
  if ( (v17 & 0x4000) != 0 && (v17 & 0x200) != 0 )
    DelayedDestroyCacheDC(1LL);
  if ( qword_1C0252310 )
    v19 = qword_1C0252310(v14);
  else
    v19 = -1073741637;
  if ( v19 >= 0 )
  {
    v14 = 0LL;
    v40 = 0LL;
    if ( qword_1C0252318 )
    {
      qword_1C0252318(&v40);
      v14 = v40;
    }
    while ( v14 )
    {
      if ( *((_DWORD *)v14 + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)v14 + 5) = 0;
      v14 = (__int64 *)*v14;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  InputObjectMap::OnProcessTermination((__int64)v14, v10);
  if ( (_QWORD *)gppiUserApiHook == a1 )
  {
    v33 = qword_1C0252320 ? qword_1C0252320(v21, v20, v22) : -1073741637;
    if ( v33 >= 0 && qword_1C0252328 )
      qword_1C0252328(v21, v20, v22);
  }
  if ( (_QWORD *)gppiDManipHook == a1 )
  {
    v37 = qword_1C0252330 ? qword_1C0252330(v21, v20, v22) : -1073741637;
    if ( v37 >= 0 && qword_1C0252338 )
      qword_1C0252338(v21, v20, v22);
  }
  UnlockObjectAssignment((void **)a1 + 83);
  UnlockObjectAssignment((void **)a1 + 42);
  v23 = (void *)a1[49];
  if ( v23 )
  {
    CloseProtectedHandle(v23);
    a1[49] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v24 = a1[45];
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
    a1[45] = 0LL;
  }
  GetDomainLockRef(2LL);
  v27 = (_QWORD *)a1[88];
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
  a1[88] = 0LL;
  if ( qword_1C0252340 )
    v28 = qword_1C0252340(v27, v25, v26);
  else
    v28 = -1073741637;
  if ( v28 >= 0 && qword_1C0252348 )
    qword_1C0252348(a1);
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
      if ( qword_1C0252370 )
        v6 = qword_1C0252370(v27, v25, v26);
      if ( v6 >= 0 )
      {
        if ( qword_1C0252378 )
          qword_1C0252378(2LL);
        *((_DWORD *)a1 + 205) &= ~0x80000u;
      }
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess();
  GreSetDCOwnerEx(qword_1C024EC58, 0LL, 0LL, 1LL);
  if ( qword_1C0252E00 )
    qword_1C0252E00(a1);
  RIMOnProcessDestroy(*a1);
  LOBYTE(v29) = BYTE1(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v29, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v18;
}
