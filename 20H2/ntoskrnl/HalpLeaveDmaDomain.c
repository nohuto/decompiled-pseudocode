/*
 * XREFs of HalpLeaveDmaDomain @ 0x1404C34DC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036CB90 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x1404C2FF0 (HalLeaveDmaDomain.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C3128 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404C3424 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C7964 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C7FC4 (HalpIommuLeaveDmaDomain.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v3; // rdi
  int v4; // r15d
  struct _KTHREAD *v5; // rbx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r15
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rsi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG_PTR v25; // rdx
  ULONG_PTR v26; // rcx
  int v28; // [rsp+30h] [rbp-18h] BYREF
  __int64 v29; // [rsp+38h] [rbp-10h]
  unsigned __int8 v30; // [rsp+90h] [rbp+48h]
  int v31; // [rsp+A0h] [rbp+58h] BYREF
  int v32; // [rsp+A8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 504);
  v29 = 0LL;
  if ( !*(_DWORD *)(v1 + 64) )
    goto LABEL_50;
  v3 = a1 + 312;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 338) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    v28 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v17 = ++CurrentThread->AbAllocationRegionCount;
    v18 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v19, v18);
      v32 = v19;
      if ( v8 )
        break;
      v20 = (__int64)&CurrentThread->LockEntries[v19];
      v18 &= ~(1 << v19);
      if ( (*(_BYTE *)(v20 + 26) & 1) != 0
        && (*(_DWORD *)(v20 + 32) & 1) == 0
        && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v20 + 40) == SessionId )
      {
        *(_BYTE *)(v20 + 26) &= ~1u;
        if ( *(_QWORD *)(v20 + 32) )
        {
          if ( v20 )
          {
            *(_BYTE *)(v20 + 32) |= 2u;
            if ( *(__int64 *)(v20 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
            v21 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
            v22 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
            *(_BYTE *)(v20 + 25) &= ~1u;
            v28 = v21;
            *(_DWORD *)(v20 + 88) = v22;
            *(_QWORD *)(v20 + 32) = 0LL;
            v23 = (signed __int64)(v20 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v17 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
            goto LABEL_45;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
LABEL_45:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v28);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v24);
  }
  else
  {
    v4 = HalpIommuLeaveDmaDomain(*(_QWORD *)(a1 + 536), *(_QWORD *)(v1 + 40));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    v31 = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v6 = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      v6 = -1;
    --v5->SpecialApcDisable;
    v30 = ++v5->AbAllocationRegionCount;
    v7 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      if ( v8 )
        break;
      v10 = (__int64)&v5->LockEntries[v9];
      v7 &= ~(1 << v9);
      if ( (*(_BYTE *)(v10 + 26) & 1) != 0
        && (*(_DWORD *)(v10 + 32) & 1) == 0
        && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v10 + 40) == v6 )
      {
        *(_BYTE *)(v10 + 26) &= ~1u;
        if ( *(_QWORD *)(v10 + 32) )
        {
          if ( v10 )
          {
            *(_BYTE *)(v10 + 32) |= 2u;
            if ( *(__int64 *)(v10 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
            v11 = *(_DWORD *)(v10 + 88) & 0x1FFFF;
            v12 = *(_DWORD *)(v10 + 88) & 0xFFFE0000;
            *(_BYTE *)(v10 + 25) &= ~1u;
            v31 = v11;
            *(_DWORD *)(v10 + 88) = v12;
            *(_QWORD *)(v10 + 32) = 0LL;
            v13 = (signed __int64)(v10 - (unsigned __int64)v5->LockEntries) / 96;
            if ( v30 == 1 )
              v5->AbEntrySummary |= 1 << v13;
            else
              _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v13);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, v6, 0LL);
LABEL_20:
    --v5->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, &v31);
    v8 = v5->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery(v14);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v25 = *(_QWORD *)(a1 + 552);
  v26 = *(_QWORD *)(v1 + 40);
  v29 = *(unsigned int *)(a1 + 244);
  v4 = HalpIommuDomainUnmapLogicalRange(v26, v25);
  if ( v4 >= 0 )
  {
    v4 = HalpDomainLaDelete(v1, *(_QWORD *)(a1 + 552));
    if ( v4 >= 0 )
    {
LABEL_50:
      HalpDmaDereferenceDomainObject((__int64 *)v1);
      *(_QWORD *)(a1 + 504) = 0LL;
      return 0;
    }
  }
  return (unsigned int)v4;
}
