/*
 * XREFs of PopFxInsertDevice @ 0x1403B9F74
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x14079C6C0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x14079CA3C (PopFxRegisterDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  char v6; // al
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // si
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // r9
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h]

  v23 = a2;
  v22 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v5 = (_QWORD *)qword_140C24758;
  if ( *(ULONG_PTR **)qword_140C24758 != &PopFxDeviceList )
    __fastfail(3u);
  a3[1] = qword_140C24758;
  *a3 = &PopFxDeviceList;
  *v5 = a3;
  qword_140C24758 = (__int64)a3;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  LODWORD(v22) = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = -1;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    LODWORD(v23) = v12;
    if ( v11 )
      break;
    v13 = (__int64)&v7->LockEntries[v12];
    v10 &= ~(1 << v12);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
      {
        if ( v13 )
        {
          *(_BYTE *)(v13 + 32) |= 2u;
          if ( *(__int64 *)(v13 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
          v14 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
          v15 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
          *(_BYTE *)(v13 + 25) &= ~1u;
          LODWORD(v22) = v14;
          *(_DWORD *)(v13 + 88) = v15;
          *(_QWORD *)(v13 + 32) = 0LL;
          v16 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
          if ( v9 == 1 )
            v7->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
LABEL_17:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, (__int64)&PopFxDeviceListLock, &v22);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v18, v17, v19, v20);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v19, (__int64)v20);
}
