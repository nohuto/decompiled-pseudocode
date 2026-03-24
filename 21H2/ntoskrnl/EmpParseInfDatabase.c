/*
 * XREFs of EmpParseInfDatabase @ 0x140A455E8
 * Callers:
 *     EmInitSystem @ 0x140A4528C (EmInitSystem.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     CmpFreeSectionList @ 0x140A4584C (CmpFreeSectionList.c)
 *     EmpParseEntryTypes @ 0x140A45B7C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140A45CF4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140A46580 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140A4689C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140A46ADC (EmpParseTargetRules.c)
 *     CmpParseInfBuffer @ 0x140A6206C (CmpParseInfBuffer.c)
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
  _DWORD *v11; // r9
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD v21[14]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v21[0] = 0;
  v4 = CmpParseInfBuffer(a1, a2, v21);
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
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&EmpParseLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v10 = ++CurrentThread->AbAllocationRegionCount;
  v11 = (_DWORD *)((unsigned __int64)&EmpParseLock & 0x7FFFFFFFFFFFFFFCLL);
  v12 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      break;
    v15 = (__int64)&CurrentThread->LockEntries[v14];
    v12 &= ~(1 << v14);
    if ( (*(_BYTE *)(v15 + 26) & 1) != 0
      && (*(_DWORD *)(v15 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v11
      && *(_DWORD *)(v15 + 40) == SessionId )
    {
      *(_BYTE *)(v15 + 26) &= ~1u;
      if ( *(_QWORD *)(v15 + 32) )
      {
        if ( v15 )
        {
          *(_BYTE *)(v15 + 32) |= 2u;
          if ( *(__int64 *)(v15 + 32) < 0 )
            KiAbEntryRemoveFromTree(v15);
          v16 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
          v17 = *(_DWORD *)(v15 + 88) & 0xFFFE0000;
          *(_BYTE *)(v15 + 25) &= ~1u;
          v22 = v16;
          *(_DWORD *)(v15 + 88) = v17;
          *(_QWORD *)(v15 + 32) = 0LL;
          v18 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v10 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&EmpParseLock, (__int64)&v22, v11);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19);
  return (unsigned int)v6;
}
