/*
 * XREFs of KseUnregisterShim @ 0x1408BFF80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepIsShimRegistered @ 0x1407BDD80 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  __int64 v5; // r8
  unsigned int v6; // ebp
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  void **v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C50624 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50650, 0LL);
  if ( (unsigned int)KsepIsShimRegistered((__int64)&KseEngine, *(_QWORD **)(a1 + 8), v5, &v16) )
  {
    if ( *((_DWORD *)v16 + 6) )
    {
      v6 = -1073741790;
      v7 = v16;
      v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140C2AAC4[2 * v8] = -1073741790;
      KsepHistoryErrors[2 * v8] = 131453;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          3LL,
          "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(_DWORD **)(a1 + 8),
          (_DWORD)v7);
      KsepLogError(
        3,
        "KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v7);
      *((_DWORD *)v7 + 7) |= 4u;
    }
    else
    {
      v9 = (_QWORD *)*v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v10 = (void **)v16[1], *v10 != v16) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      v4 = 1;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v11]) = 0;
      LODWORD(KsepHistoryMessages[v11]) = 131470;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(3LL, "KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v6 = 0;
    }
  }
  else
  {
    v6 = -1073741772;
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140C2AAC4[2 * v12] = -1073741772;
    KsepHistoryErrors[2 * v12] = 131482;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(3LL, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
    KsepLogError(3, "KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50650);
  KeAbPostRelease((ULONG_PTR)&qword_140C50650);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v4 )
    KsepPoolFreePaged(v16);
  return v6;
}
