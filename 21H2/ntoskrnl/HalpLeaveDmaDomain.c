/*
 * XREFs of HalpLeaveDmaDomain @ 0x1404C50EC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036D370 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x1404C4C00 (HalLeaveDmaDomain.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9BD4 (HalpIommuLeaveDmaDomain.c)
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
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r15
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdx
  ULONG_PTR v23; // rdx
  ULONG_PTR v24; // rcx
  int v26; // [rsp+30h] [rbp-18h] BYREF
  __int64 v27; // [rsp+38h] [rbp-10h]
  unsigned __int8 v28; // [rsp+90h] [rbp+48h]
  int v29; // [rsp+A0h] [rbp+58h] BYREF
  int v30; // [rsp+A8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 504);
  v27 = 0LL;
  if ( !*(_DWORD *)(v1 + 64) )
    goto LABEL_50;
  v3 = a1 + 312;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 338) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v26 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v16 = ++CurrentThread->AbAllocationRegionCount;
    v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v18, v17);
      v30 = v18;
      if ( v8 )
        break;
      v19 = (__int64)&CurrentThread->LockEntries[v18];
      v17 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == SessionId )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
        {
          if ( v19 )
          {
            *(_BYTE *)(v19 + 32) |= 2u;
            if ( *(__int64 *)(v19 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
            v20 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
            v21 = *(_DWORD *)(v19 + 88) & 0xFFFE0000;
            *(_BYTE *)(v19 + 25) &= ~1u;
            v26 = v20;
            *(_DWORD *)(v19 + 88) = v21;
            *(_QWORD *)(v19 + 32) = 0LL;
            v22 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v16 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v22;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v22);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, (unsigned int *)&v26);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    v4 = HalpIommuLeaveDmaDomain(*(_QWORD *)(a1 + 536), *(_QWORD *)(v1 + 40));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v29 = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v6 = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      v6 = -1;
    --v5->SpecialApcDisable;
    v28 = ++v5->AbAllocationRegionCount;
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
            v29 = v11;
            *(_DWORD *)(v10 + 88) = v12;
            *(_QWORD *)(v10 + 32) = 0LL;
            v13 = (signed __int64)(v10 - (unsigned __int64)v5->LockEntries) / 96;
            if ( v28 == 1 )
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, (unsigned int *)&v29);
    v8 = v5->SpecialApcDisable++ == -1;
    if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery();
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v23 = *(_QWORD *)(a1 + 552);
  v24 = *(_QWORD *)(v1 + 40);
  v27 = *(unsigned int *)(a1 + 244);
  v4 = HalpIommuDomainUnmapLogicalRange(v24, v23);
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
