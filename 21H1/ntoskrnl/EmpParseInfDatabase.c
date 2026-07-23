/*
 * XREFs of EmpParseInfDatabase @ 0x140A47468
 * Callers:
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x140A476CC (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x140A479FC (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A47B74 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A48400 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140A4871C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140A4895C (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x140A5A64C (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rbx
  int v6; // edi
  char v7; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v10; // bp
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r9
  _DWORD v23[14]; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+88h] [rbp+20h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v23[0] = 0;
  v4 = CmpParseInfBuffer(a1, a2, v23);
  v5 = (PVOID *)v4;
  if ( v4 )
  {
    v6 = EmpParseEntryTypes(v4);
    if ( v6 >= 0 )
    {
      v6 = EmpParseCallbacks(v5);
      if ( v6 >= 0 )
      {
        v6 = EmpParseRules(v5);
        if ( v6 >= 0 )
        {
          v6 = EmpParseStrings(v5);
          if ( v6 >= 0 )
            v6 = EmpParseTargetRules(v5);
        }
      }
    }
    CmpFreeSectionList(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741816;
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(&EmpParseLock);
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpParseLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v10 = ++CurrentThread->AbAllocationRegionCount;
  v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    if ( v12 )
      break;
    v14 = (__int64)&CurrentThread->LockEntries[v13];
    v11 &= ~(1 << v13);
    if ( (*(_BYTE *)(v14 + 26) & 1) != 0
      && (*(_DWORD *)(v14 + 32) & 1) == 0
      && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&EmpParseLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v14 + 40) == SessionId )
    {
      *(_BYTE *)(v14 + 26) &= ~1u;
      if ( *(_QWORD *)(v14 + 32) )
      {
        if ( v14 )
        {
          *(_BYTE *)(v14 + 32) |= 2u;
          if ( *(__int64 *)(v14 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
          v15 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
          v16 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
          *(_BYTE *)(v14 + 25) &= ~1u;
          v24 = v15;
          *(_DWORD *)(v14 + 88) = v16;
          *(_QWORD *)(v14 + 32) = 0LL;
          v17 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v10 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v17;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
          goto LABEL_23;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpParseLock, SessionId, 0LL);
LABEL_23:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpParseLock, &v24);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19, v18, v20, v21);
  return (unsigned int)v6;
}
