/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0088548 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01A5D70 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0021884 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ThreadUnlock1 @ 0x1C0044210 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C00889F8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0089370 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0089F60 (HKLtoPKL.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C008A550 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(
        struct tagWINDOWSTATION *a1,
        struct tagKL *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  struct tagTHREADINFO *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagKL *v11; // rax
  struct tagKL *v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE v23[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v26[3]; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v27[3]; // [rsp+78h] [rbp-20h] BYREF

  v26[2] = 0LL;
  v4 = a3;
  v6 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && (int)a3 >= 0 )
    return 0LL;
  v26[0] = *((_QWORD *)gptiCurrent + 52);
  *((_QWORD *)gptiCurrent + 52) = v26;
  v26[1] = a2;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v23,
    (__int64)a2,
    a3,
    a4);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive, v8, v9, v10);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v24,
    v8,
    v9,
    v10);
  HMMarkObjectDestroyWorker(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( v4 >= 0 && *((struct tagKL **)v6 + 55) == a2 )
  {
    v15 = HKLtoPKL(v6, 1LL);
    if ( v15 )
    {
      v18 = *((_QWORD *)v6 + 52);
      v27[2] = 0LL;
      v27[0] = v18;
      *((_QWORD *)v6 + 52) = v27;
      v27[1] = v15;
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v25,
        v14,
        v16,
        v17);
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
      xxxInternalActivateKeyboardLayout(a1, v15, (unsigned int)v4, 0LL);
      ThreadUnlock1();
    }
  }
  if ( a1 )
    v11 = (struct tagKL *)*((_QWORD *)a1 + 9);
  else
    v11 = (struct tagKL *)gspklWinstaLessSessionLayouts;
  if ( v11 == a2 )
  {
    v12 = (struct tagKL *)*((_QWORD *)a2 + 2);
    if ( a2 != v12 && !LockKbdLayoutListHead(a1, v12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  }
  ThreadUnlock1();
  if ( qword_1C0250028 )
    qword_1C0250028(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook(v6, 0LL, 0LL);
  return 1LL;
}
