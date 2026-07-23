/*
 * XREFs of PspUnlockThreadSecurityExclusive @ 0x14030CF04
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  char v4; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r14
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1 + 1280;
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1280), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
    ExfTryToWakePushLock(a1 + 1280);
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v7 = ++CurrentThread->AbAllocationRegionCount;
  v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    if ( v9 )
      break;
    v11 = (__int64)&CurrentThread->LockEntries[v10];
    v8 &= ~(1 << v10);
    if ( (*(_BYTE *)(v11 + 26) & 1) != 0
      && (*(_DWORD *)(v11 + 32) & 1) == 0
      && (*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v11 + 40) == SessionId )
    {
      *(_BYTE *)(v11 + 26) &= ~1u;
      if ( *(_QWORD *)(v11 + 32) )
      {
        if ( v11 )
        {
          *(_BYTE *)(v11 + 32) |= 2u;
          if ( *(__int64 *)(v11 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
          v12 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
          v13 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
          *(_BYTE *)(v11 + 25) &= ~1u;
          v20 = v12;
          *(_DWORD *)(v11 + 88) = v13;
          *(_QWORD *)(v11 + 32) = 0LL;
          v14 = (signed __int64)(v11 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v7 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v14;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
          goto LABEL_16;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
LABEL_16:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v20);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v16);
  return KeLeaveCriticalRegionThread(a2, v15, v17, v18);
}
