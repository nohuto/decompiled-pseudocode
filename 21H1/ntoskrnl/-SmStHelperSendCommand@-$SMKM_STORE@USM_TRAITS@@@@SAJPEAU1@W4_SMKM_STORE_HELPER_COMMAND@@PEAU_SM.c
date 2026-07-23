/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1402C8BCC
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1402C4380 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1402C8A04 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x1402C8AA4 (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402FE2D0 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14023EC48 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     SmKmStoreHelperWaitForCommand @ 0x1402C8EB4 (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperSendCommand @ 0x1402C8F5C (SmKmStoreHelperSendCommand.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r13
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v26; // [rsp+88h] [rbp+10h]

  v25 = 0LL;
  v6 = 6360LL;
  if ( (_DWORD)a2 != 4 )
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
      v25 = v10;
      if ( (a4 & 8) != 0 )
        v25 = v10 / 4;
      v11 = &v25;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 6024);
      v24 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v26 = ++CurrentThread->AbAllocationRegionCount;
      v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v15 = !_BitScanReverse((unsigned int *)&v16, v14);
        if ( v15 )
          break;
        v17 = (__int64)&CurrentThread->LockEntries[v16];
        v14 &= ~(1 << v16);
        if ( (*(_BYTE *)(v17 + 26) & 1) != 0
          && (*(_DWORD *)(v17 + 32) & 1) == 0
          && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v17 + 40) == SessionId )
        {
          *(_BYTE *)(v17 + 26) &= ~1u;
          if ( *(_QWORD *)(v17 + 32) )
          {
            if ( v17 )
            {
              *(_BYTE *)(v17 + 32) |= 2u;
              if ( *(__int64 *)(v17 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
              v24 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
              *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v17 + 25) &= ~1u;
              *(_QWORD *)(v17 + 32) = 0LL;
              v18 = (signed __int64)(v17 - (unsigned __int64)CurrentThread->LockEntries) / 96;
              if ( v26 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v18;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
              goto LABEL_27;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 6024, SessionId, 0LL);
LABEL_27:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 6024, &v24);
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v20);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v19, v21, v22);
    }
    v9 = SmKmStoreHelperWaitForCommand(v8, a3, v11, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v9;
}
