/*
 * XREFs of KseRegisterShimEx @ 0x1407BDBD0
 * Callers:
 *     KseRegisterShim @ 0x1407BDBB0 (KseRegisterShim.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140371274 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepIsShimRegistered @ 0x1407BDD80 (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x1407BDDF4 (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF24 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v24; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140C50624 != 2 )
    return 3221225473LL;
  v24 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v24);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v24, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50650, 0LL);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v10, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C50650);
          KeAbPostRelease((ULONG_PTR)&qword_140C50650);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
          LoadedModulesList = -1073741771;
          v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_140C2AAC4[2 * v22] = -1073741771;
          KsepHistoryErrors[2 * v22] = 131310;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(2LL, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepLogError(2, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepPoolFreePaged(Paged);
        }
        else
        {
          *((_DWORD *)Paged + 6) = 0;
          Paged[2] = a1;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v11 = (_QWORD *)qword_140C50638;
          if ( *(_UNKNOWN **)qword_140C50638 != &unk_140C50630 )
            __fastfail(3u);
          *Paged = &unk_140C50630;
          Paged[1] = v11;
          *v11 = Paged;
          qword_140C50638 = (__int64)Paged;
          v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50650, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
            ExfTryToWakePushLock(&qword_140C50650);
          KeAbPostRelease((ULONG_PTR)&qword_140C50650);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140C50658;
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v16]) = 0;
          LODWORD(KsepHistoryMessages[v16]) = 131353;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(2LL, "KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
          KsepLogInfo(2LL, (__int64)"KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
        }
      }
      else
      {
        LoadedModulesList = -1073741670;
      }
    }
    else
    {
      LoadedModulesList = -1073741823;
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140C2AAC4[2 * v18] = -1073741823;
      KsepHistoryErrors[2 * v18] = 131277;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v24 )
    KsepPoolFreePaged(v24);
  return (unsigned int)LoadedModulesList;
}
