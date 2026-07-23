/*
 * XREFs of HalpLeaveDmaDomain @ 0x1404BF8DC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x1404BF3F0 (HalLeaveDmaDomain.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404BF528 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404BF824 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C3FCC (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C45E8 (HalpIommuLeaveDmaDomain.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v20; // r15
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _DWORD *v30; // r9
  ULONG_PTR v31; // rdx
  ULONG_PTR v32; // rcx
  int v34; // [rsp+30h] [rbp-18h] BYREF
  __int64 v35; // [rsp+38h] [rbp-10h]
  unsigned __int8 v36; // [rsp+90h] [rbp+48h]
  int v37; // [rsp+A0h] [rbp+58h] BYREF
  int v38; // [rsp+A8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 504);
  v35 = 0LL;
  if ( !*(_DWORD *)(v1 + 64) )
    goto LABEL_50;
  v3 = a1 + 312;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 338) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v34 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v20 = ++CurrentThread->AbAllocationRegionCount;
    v21 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v22, v21);
      v38 = v22;
      if ( v8 )
        break;
      v23 = (__int64)&CurrentThread->LockEntries[v22];
      v21 &= ~(1 << v22);
      if ( (*(_BYTE *)(v23 + 26) & 1) != 0
        && (*(_DWORD *)(v23 + 32) & 1) == 0
        && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v23 + 40) == SessionId )
      {
        *(_BYTE *)(v23 + 26) &= ~1u;
        if ( *(_QWORD *)(v23 + 32) )
        {
          if ( v23 )
          {
            *(_BYTE *)(v23 + 32) |= 2u;
            if ( *(__int64 *)(v23 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
            v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
            v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
            *(_BYTE *)(v23 + 25) &= ~1u;
            v34 = v24;
            *(_DWORD *)(v23 + 88) = v25;
            *(_QWORD *)(v23 + 32) = 0LL;
            v26 = (signed __int64)(v23 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v20 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v26;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, &v34);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v28, v27, v29, v30);
  }
  else
  {
    v4 = HalpIommuLeaveDmaDomain(*(_QWORD *)(a1 + 536), *(_QWORD *)(v1 + 40));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v37 = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v6 = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      v6 = -1;
    --v5->SpecialApcDisable;
    v36 = ++v5->AbAllocationRegionCount;
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
            v37 = v11;
            *(_DWORD *)(v10 + 88) = v12;
            *(_QWORD *)(v10 + 32) = 0LL;
            v13 = (signed __int64)(v10 - (unsigned __int64)v5->LockEntries) / 96;
            if ( v36 == 1 )
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, &v37);
    v8 = v5->SpecialApcDisable++ == -1;
    if ( v8 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery(v15, v14, v16, v17);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v31 = *(_QWORD *)(a1 + 552);
  v32 = *(_QWORD *)(v1 + 40);
  v35 = *(unsigned int *)(a1 + 244);
  v4 = HalpIommuDomainUnmapLogicalRange(v32, v31);
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
