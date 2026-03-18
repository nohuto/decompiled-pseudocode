/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00579C8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01ADE50 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C005652C (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0057E78 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00587F0 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C00593E0 (HKLtoPKL.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C005ADEC (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0073400 (HMAssignmentUnlock.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, signed int a3)
{
  struct tagTHREADINFO *v5; // rdi
  struct tagKL *v7; // rax
  struct tagKL *v8; // rdx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  _BYTE v13[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+78h] [rbp-20h] BYREF

  v16[2] = 0LL;
  v5 = gptiCurrent;
  if ( a2 == (struct tagKL *)gspklBaseLayout && a3 >= 0 )
    return 0LL;
  v16[0] = *((_QWORD *)gptiCurrent + 51);
  *((_QWORD *)gptiCurrent + 51) = v16;
  v16[1] = a2;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v13);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  if ( a2 == (struct tagKL *)gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v14);
  HMMarkObjectDestroyWorker(a2);
  *((_DWORD *)a2 + 8) |= 0x20000000u;
  if ( a3 >= 0 && *((struct tagKL **)v5 + 54) == a2 )
  {
    v10 = HKLtoPKL((__int64)v5, 1LL);
    if ( v10 )
    {
      v11 = *((_QWORD *)v5 + 51);
      v17[2] = 0LL;
      v17[0] = v11;
      *((_QWORD *)v5 + 51) = v17;
      v17[1] = v10;
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v15);
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      xxxInternalActivateKeyboardLayout((__int64)a1, v10, a3, 0LL);
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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  }
  ThreadUnlock1();
  if ( qword_1C0257FE8 )
    qword_1C0257FE8(0x80000000LL, 0LL, 0LL, 0LL, 0);
  ApiSetEditionNotifyShellLanguageHook((__int64)v5, 0LL, 0);
  return 1LL;
}
