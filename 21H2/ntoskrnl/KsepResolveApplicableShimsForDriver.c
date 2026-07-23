/*
 * XREFs of KsepResolveApplicableShimsForDriver @ 0x1408C0794
 * Callers:
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     KsepLoadShimProvider @ 0x140526F40 (KsepLoadShimProvider.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepIsShimRegistered @ 0x1407BDD80 (KsepIsShimRegistered.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF24 (KsepGetLoadedModulesList.c)
 *     KsepResolveShimHooks @ 0x1408C0204 (KsepResolveShimHooks.c)
 */

__int64 __fastcall KsepResolveApplicableShimsForDriver(_QWORD *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int LoadedModulesList; // esi
  int v4; // r14d
  int v5; // r13d
  __int64 v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  _QWORD *v17; // r12
  struct _KTHREAD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  __int64 v27; // r15
  _QWORD *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  int v43; // [rsp+68h] [rbp+10h]
  int *v44; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  LoadedModulesList = 0;
  v44 = 0LL;
  v4 = 0;
  v5 = 0;
  v43 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50650, 0LL);
  if ( a2 )
  {
    v9 = a1 + 9;
    v10 = a1;
    v11 = a2;
    do
    {
      if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, v10, v8, v10 + 9) == 1 )
      {
        v12 = *(_DWORD *)(*v9 + 24LL);
        if ( !v12 )
          v5 = 1;
        *(_DWORD *)(*v9 + 24LL) = v12 + 1;
      }
      else
      {
        *v9 = 0LL;
        v5 = 1;
        v43 = 1;
      }
      v10 += 10;
      v9 += 10;
      --v11;
    }
    while ( v11 );
    v4 = v43;
    LoadedModulesList = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50650);
  KeAbPostRelease((ULONG_PTR)&qword_140C50650);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( !v4 )
  {
LABEL_25:
    if ( v5 )
    {
      LoadedModulesList = KsepGetLoadedModulesList(&v44);
      if ( LoadedModulesList < 0 )
        goto LABEL_38;
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50650, 0LL);
      v27 = 0LL;
      if ( a2 )
      {
        v28 = a1 + 9;
        while ( 1 )
        {
          LoadedModulesList = KsepResolveShimHooks((__int64)v44, *(int **)(*(_QWORD *)(*v28 + 16LL) + 48LL));
          if ( LoadedModulesList < 0 )
            break;
          v27 = (unsigned int)(v27 + 1);
          v28 += 10;
          if ( (unsigned int)v27 >= a2 )
            goto LABEL_31;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50650);
        KeAbPostRelease((ULONG_PTR)&qword_140C50650);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v39, v40, v41);
        v42 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        dword_140C2AAC4[2 * v42] = LoadedModulesList;
        KsepHistoryErrors[2 * v42] = 459292;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(
            6LL,
            "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
            LODWORD(a1[10 * v27]),
            LoadedModulesList);
        KsepLogError(
          6,
          "KSE: Failed to resolve hooks for shim [0x%08X]. Status 0x%x.\n",
          LODWORD(a1[10 * v27]),
          LoadedModulesList);
      }
      else
      {
LABEL_31:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C50650);
        KeAbPostRelease((ULONG_PTR)&qword_140C50650);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
      }
    }
    goto LABEL_34;
  }
  v16 = 0LL;
  if ( a2 )
  {
    v17 = a1 + 9;
    while ( 1 )
    {
      if ( !*v17 )
      {
        LoadedModulesList = KsepLoadShimProvider((__int64)&a1[10 * v16]);
        if ( LoadedModulesList < 0 )
          break;
      }
      v16 = (unsigned int)(v16 + 1);
      v17 += 10;
      if ( (unsigned int)v16 >= a2 )
        goto LABEL_18;
    }
    v34 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C2AAC4[2 * v34] = LoadedModulesList;
    KsepHistoryErrors[2 * v34] = 459215;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        6LL,
        "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
        LODWORD(a1[10 * v16]),
        LoadedModulesList);
    KsepLogError(
      6,
      "KSE: Failed to load provider for shim [0x%08X]. Status: 0x%x\n",
      LODWORD(a1[10 * v16]),
      LoadedModulesList);
LABEL_34:
    if ( LoadedModulesList >= 0 )
    {
      v32 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v32]) = 0;
      LODWORD(KsepHistoryMessages[v32]) = 459306;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(6LL, "KSE: Successfully resolved %d shim(s).\n", a2);
      KsepLogInfo(6LL, (__int64)"KSE: Successfully resolved %d shim(s).\n", a2);
    }
    goto LABEL_38;
  }
LABEL_18:
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50650, 0LL);
  v20 = 0LL;
  if ( !a2 )
  {
LABEL_22:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C50650);
    KeAbPostRelease((ULONG_PTR)&qword_140C50650);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
    goto LABEL_25;
  }
  v21 = a1 + 9;
  while ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, &a1[10 * v20], v19, &a1[10 * v20 + 9]) )
  {
    v22 = *v21;
    v20 = (unsigned int)(v20 + 1);
    v21 += 10;
    ++*(_DWORD *)(v22 + 24);
    if ( (unsigned int)v20 >= a2 )
      goto LABEL_22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50650);
  KeAbPostRelease((ULONG_PTR)&qword_140C50650);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36, v37);
  LoadedModulesList = -1073740782;
  v38 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_140C2AAC4[2 * v38] = -1073740782;
  KsepHistoryErrors[2 * v38] = 459244;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(6LL, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v20]));
  KsepLogError(6, "KSE: The provider did not register shim [0x%08X] in time\n", LODWORD(a1[10 * v20]));
LABEL_38:
  KsepPoolFreePaged(v44);
  return (unsigned int)LoadedModulesList;
}
