/*
 * XREFs of KseDriverUnloadImage @ 0x1406EAFE4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KsepPoolFreePaged @ 0x1402D8494 (KsepPoolFreePaged.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KsepLogInfo @ 0x1403C09C8 (KsepLogInfo.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x14057D738 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405E6EA0 (RtlAssert.c)
 *     KsepDbFreeDriverShims @ 0x14075C424 (KsepDbFreeDriverShims.c)
 *     KsepIsModuleShimmed @ 0x14075CE94 (KsepIsModuleShimmed.c)
 */

__int64 __fastcall KseDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  int *v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  void (__fastcall *v10)(_QWORD); // rax
  __int64 v11; // rbp
  __int64 *v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rcx
  __int64 v24; // rax
  void *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C54EF4 != 2 )
    return 3221225659LL;
  if ( (KseEngine & 1) != 0 )
    return 3221225659LL;
  v2 = *(_QWORD *)(a1 + 48);
  if ( MmIsSessionAddress(v2) )
    return 3221225659LL;
  if ( (unsigned int)KsepIsModuleShimmed(&KseEngine, v2, &v27) && v27 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C54F20, 0LL);
    v5 = (_QWORD *)v27;
    v6 = 0LL;
    v7 = (int *)(v27 + 24);
    v8 = *(_DWORD *)(v27 + 24);
    if ( v8 )
    {
      do
      {
        v9 = *(_QWORD *)(v5[4] + 80 * v6 + 72);
        if ( (*(_DWORD *)(v9 + 28) & 4) == 0 )
        {
          v10 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(v9 + 16) + 32LL);
          if ( v10 )
            v10(*(_QWORD *)(a1 + 48));
        }
        v8 = *v7;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *v7 );
    }
    v11 = 0LL;
    if ( v8 )
    {
      do
      {
        v12 = *(__int64 **)(v5[4] + 80 * v11 + 72);
        if ( !*((_DWORD *)v12 + 6) )
        {
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2A224[2 * v13] = -1073740768;
          KsepHistoryErrors[2 * v13] = 460173;
          if ( (KsepDebugFlag & 4) != 0 )
            RtlAssert("RegisteredShim->RefCount > 0", "minkernel\\ntos\\kshim\\kseloader.c", 0x58Du, 0LL);
        }
        v14 = *((_DWORD *)v12 + 7);
        v15 = *((_DWORD *)v12 + 6) - 1;
        *((_DWORD *)v12 + 6) = v15;
        if ( (v14 & 4) != 0 && !v15 )
        {
          v16 = (__int64 *)*v12;
          if ( *(__int64 **)(*v12 + 8) != v12 )
            goto LABEL_43;
          v17 = (__int64 **)v12[1];
          if ( *v17 != v12 )
            goto LABEL_43;
          *v17 = v16;
          v16[1] = (__int64)v17;
        }
        v11 = (unsigned int)(v11 + 1);
      }
      while ( (unsigned int)v11 < *v7 );
      v5 = (_QWORD *)v27;
    }
    v18 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v19 = (_QWORD *)v5[1], (_QWORD *)*v19 != v5) )
LABEL_43:
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C54F20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C54F20);
    KeAbPostRelease((ULONG_PTR)&qword_140C54F20);
    KeLeaveCriticalRegion();
    v20 = 0LL;
    if ( *v7 )
    {
      v21 = v27;
      do
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 80 * v20 + 72);
        v23 = *(void **)(v22 + 32);
        if ( v23 )
          ObfDereferenceObject(v23);
        if ( (*(_DWORD *)(v22 + 28) & 4) != 0 && !*(_DWORD *)(v22 + 24) )
        {
          KsepPoolFreePaged((void *)v22);
          v24 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v24]) = 0;
          LODWORD(KsepHistoryMessages[v24]) = 460230;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(5LL, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v22);
          KsepLogInfo(5, "KSE: Cleaned up dangling shim object [0x%08X] (unregistered while refcount >0)\n", v22);
        }
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < *v7 );
    }
    v25 = (void *)v27;
    KsepDbFreeDriverShims(*(_QWORD *)(v27 + 32));
    KsepPoolFreePaged(v25);
    v26 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v26]) = 0;
    LODWORD(KsepHistoryMessages[v26]) = 460238;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(5LL, "KSE: Shimmed driver unload notification processed\n");
    KsepLogInfo(5, "KSE: Shimmed driver unload notification processed\n");
  }
  return 0LL;
}
