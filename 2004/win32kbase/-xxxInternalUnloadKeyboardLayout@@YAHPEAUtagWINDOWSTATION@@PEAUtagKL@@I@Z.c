/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0017B30
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01A80F0 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0017334 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C00181F8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0018B70 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0019760 (HKLtoPKL.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C005F564 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0076340 (HMAssignmentUnlock.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, int a3)
{
  struct tagTHREADINFO *v5; // rdi
  struct tagKL *v7; // rax
  struct tagKL *v8; // rdx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v16[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-20h] BYREF

  v19[2] = 0LL;
  v5 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v19[0] = *((_QWORD *)gptiCurrent + 51);
  *((_QWORD *)gptiCurrent + 51) = v19;
  v19[1] = a2;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v16);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v17);
  HMMarkObjectDestroyWorker(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v5 + 54) == a2 )
  {
    v10 = HKLtoPKL(v5, 1LL);
    if ( v10 )
    {
      v11 = *((_QWORD *)v5 + 51);
      v20[2] = 0LL;
      v20[0] = v11;
      *((_QWORD *)v5 + 51) = v20;
      v20[1] = v10;
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v18);
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      xxxInternalActivateKeyboardLayout(a1, v10, (unsigned int)a3, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1 )
    v7 = (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    v7 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v7 == a2 )
  {
    v8 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v8 && !LockKbdLayoutListHead(a1, v8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  }
  ThreadUnlock1();
  if ( qword_1C0252028 )
    qword_1C0252028(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v5, 0LL, 0LL);
  return 1LL;
}
