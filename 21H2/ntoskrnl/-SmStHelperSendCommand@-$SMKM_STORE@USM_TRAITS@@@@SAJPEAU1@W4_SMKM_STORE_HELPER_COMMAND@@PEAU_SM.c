/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1403795D4
 * Callers:
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140379208 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1403794AC (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1403905FC (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14039423C (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     SmKmStoreHelperSendCommand @ 0x140237628 (SmKmStoreHelperSendCommand.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238A40 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140379848 (SmKmStoreHelperWaitForCommand.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, _OWORD *a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v16; // edx
  int v17; // r9d
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF

  v21 = 0LL;
  v6 = 6360LL;
  if ( a2 != 4 )
    v6 = 6232LL;
  v8 = a1 + v6;
  v9 = SmKmStoreHelperSendCommand(v8, a2, a3, a4 & 1);
  if ( v9 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v10 = -1000000LL;
      if ( *(_BYTE *)(a1 + 6022) > 1u )
        v10 = -5000000LL;
      v21 = v10;
      if ( (a4 & 8) != 0 )
        v21 = v10 / 4;
      v11 = &v21;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v12 = a1 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 6024);
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned __int64)(v12 - qword_140C50630) < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      _disable();
      p_Process = (__int64)&CurrentThread[1].Process;
      v16 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v12 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v16;
        p_Process += 96LL;
        if ( v16 >= 6 )
          goto LABEL_31;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( p_Process )
      {
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v17 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v17 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, a1 + 6024, v17);
        goto LABEL_25;
      }
LABEL_31:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 6024, SessionId, 0LL);
      _enable();
LABEL_25:
      v18 = KeGetCurrentThread();
      v19 = v18->SpecialApcDisable++ == -1;
      if ( v19 && ($CEA84C04E3712D858E5667A507841A2A *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
        KiCheckForKernelApcDelivery();
    }
    v9 = SmKmStoreHelperWaitForCommand(v8, a3, v11, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v9;
}
