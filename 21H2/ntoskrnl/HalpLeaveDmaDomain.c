/*
 * XREFs of HalpLeaveDmaDomain @ 0x1404C4EAC
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036D1C0 (HalpDmaFreeChildAdapter.c)
 *     HalLeaveDmaDomain @ 0x1404C49C0 (HalLeaveDmaDomain.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4AF8 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404C4DF4 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9334 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9994 (HalpIommuLeaveDmaDomain.c)
 */

__int64 __fastcall HalpLeaveDmaDomain(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v3; // rdi
  int v4; // r15d
  struct _KTHREAD *v5; // rbx
  unsigned int v6; // edx
  _DWORD *v7; // r9
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r15
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  ULONG_PTR v27; // rdx
  ULONG_PTR v28; // rcx
  int v30; // [rsp+30h] [rbp-18h] BYREF
  __int64 v31; // [rsp+38h] [rbp-10h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+90h] [rbp+48h]
  int v33; // [rsp+A0h] [rbp+58h] BYREF
  int v34; // [rsp+A8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 504);
  v31 = 0LL;
  if ( !*(_DWORD *)(v1 + 64) )
    goto LABEL_50;
  v3 = a1 + 312;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 338) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v30 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v18 = ++CurrentThread->AbAllocationRegionCount;
    v19 = (_DWORD *)(v3 & 0x7FFFFFFFFFFFFFFCLL);
    v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v21, v20);
      v34 = v21;
      if ( v9 )
        break;
      v22 = (__int64)&CurrentThread->LockEntries[v21];
      v20 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
        && *(_DWORD *)(v22 + 40) == SessionId )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree(v22);
            v23 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
            v24 = *(_DWORD *)(v22 + 88) & 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            v30 = v23;
            *(_DWORD *)(v22 + 88) = v24;
            *(_QWORD *)(v22 + 32) = 0LL;
            v25 = (signed __int64)(v22 - (unsigned __int64)CurrentThread->LockEntries) / 96;
            if ( v18 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v25;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, (__int64)&v30, v19);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v26);
  }
  else
  {
    v4 = HalpIommuLeaveDmaDomain(*(_QWORD *)(a1 + 536), *(_QWORD *)(v1 + 40));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    v33 = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      v6 = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      v6 = -1;
    --v5->SpecialApcDisable;
    ++v5->AbAllocationRegionCount;
    v7 = (_DWORD *)(v3 & 0x7FFFFFFFFFFFFFFCLL);
    AbAllocationRegionCount = v5->AbAllocationRegionCount;
    v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      if ( v9 )
        break;
      v11 = (__int64)&v5->LockEntries[v10];
      v8 &= ~(1 << v10);
      if ( (*(_BYTE *)(v11 + 26) & 1) != 0
        && (*(_DWORD *)(v11 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v7
        && *(_DWORD *)(v11 + 40) == v6 )
      {
        *(_BYTE *)(v11 + 26) &= ~1u;
        if ( *(_QWORD *)(v11 + 32) )
        {
          if ( v11 )
          {
            *(_BYTE *)(v11 + 32) |= 2u;
            if ( *(__int64 *)(v11 + 32) < 0 )
              KiAbEntryRemoveFromTree(v11);
            v12 = *(_DWORD *)(v11 + 88) & 0x1FFFF;
            v13 = *(_DWORD *)(v11 + 88) & 0xFFFE0000;
            *(_BYTE *)(v11 + 25) &= ~1u;
            v33 = v12;
            *(_DWORD *)(v11 + 88) = v13;
            *(_QWORD *)(v11 + 32) = 0LL;
            v14 = (signed __int64)(v11 - (unsigned __int64)v5->LockEntries) / 96;
            if ( AbAllocationRegionCount == 1 )
              v5->AbEntrySummary |= 1 << v14;
            else
              _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v14);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, (__int64)&v33, v7);
    v9 = v5->SpecialApcDisable++ == -1;
    if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery(v15);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v27 = *(_QWORD *)(a1 + 552);
  v28 = *(_QWORD *)(v1 + 40);
  v31 = *(unsigned int *)(a1 + 244);
  v4 = HalpIommuDomainUnmapLogicalRange(v28, v27);
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
