/*
 * XREFs of PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x14057C794
 * Callers:
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimits @ 0x1409056B4 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char PspUnlockWorkingSetChangeExclusiveUnsafe()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v2; // si
  unsigned int v3; // r8d
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rdx
  $C774EFD68449142D8271B1EC1EB7FB26 *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+58h] [rbp+10h] BYREF

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C130B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C130B0);
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_140C130B0) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v2 = ++CurrentThread->AbAllocationRegionCount;
  v3 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v5 = !_BitScanReverse((unsigned int *)&v6, v3);
    if ( v5 )
      goto LABEL_13;
    v4 = (__int64)&CurrentThread->LockEntries[v6];
    v3 &= ~(1 << v6);
    if ( (*(_BYTE *)(v4 + 26) & 1) != 0
      && (*(_DWORD *)(v4 + 32) & 1) == 0
      && (*(_QWORD *)(v4 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_140C130B0 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v4 + 40) == SessionId )
    {
      *(_BYTE *)(v4 + 26) &= ~1u;
      if ( *(_QWORD *)(v4 + 32) )
        break;
    }
  }
  if ( !v4 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C130B0, SessionId, 0LL);
    goto LABEL_20;
  }
  *(_BYTE *)(v4 + 32) |= 2u;
  if ( *(__int64 *)(v4 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v4);
  v11 = *(_DWORD *)(v4 + 88) & 0x1FFFF;
  *(_DWORD *)(v4 + 88) &= 0xFFFE0000;
  *(_BYTE *)(v4 + 25) &= ~1u;
  *(_QWORD *)(v4 + 32) = 0LL;
  v7 = (signed __int64)(v4 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v2 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v7;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v7);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v8) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&qword_140C130B0, &v11);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 )
  {
    v8 = &CurrentThread->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery(v9);
  }
  return (char)v8;
}
