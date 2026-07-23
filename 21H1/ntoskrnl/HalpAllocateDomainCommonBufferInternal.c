/*
 * XREFs of HalpAllocateDomainCommonBufferInternal @ 0x14039DCD4
 * Callers:
 *     HalAllocateCommonBufferExV3 @ 0x14039DC50 (HalAllocateCommonBufferExV3.c)
 *     HalAllocateDomainCommonBuffer @ 0x1404BEF70 (HalAllocateDomainCommonBuffer.c)
 *     HalAllocateCommonBufferWithBounds @ 0x1404C07B0 (HalAllocateCommonBufferWithBounds.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmAllocateContiguousNodeMemory @ 0x1402F8F60 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x1402F9FE0 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     HalpDmaReferenceDomainObject @ 0x14039DEF4 (HalpDmaReferenceDomainObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404BF528 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaAllocate @ 0x1404BF744 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404BF824 (HalpDomainLaDelete.c)
 *     HalpIommuDomainMapLogicalRange @ 0x1404C3F6C (HalpIommuDomainMapLogicalRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateDomainCommonBufferInternal(
        ULONG_PTR BugCheckParameter3,
        __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        char a5,
        _DWORD *a6,
        int a7,
        PHYSICAL_ADDRESS *a8,
        _RTL_BALANCED_NODE **a9)
{
  _RTL_BALANCED_NODE *v9; // r13
  PHYSICAL_ADDRESS v10; // r15
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned int v19; // edx
  __int64 v20; // r9
  unsigned int v21; // r12d
  _RTL_BALANCED_NODE *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  int v24; // r8d
  int v25; // eax
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *v27; // rbx
  unsigned __int64 v28; // rdi
  ULONG_PTR v29; // rdx
  BOOLEAN v30; // r8
  unsigned __int64 v31; // rax
  unsigned int v33; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  char v39; // [rsp+30h] [rbp-58h]
  PHYSICAL_ADDRESS v40; // [rsp+38h] [rbp-50h] BYREF
  PVOID P; // [rsp+40h] [rbp-48h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h] BYREF
  __int64 v43; // [rsp+50h] [rbp-38h] BYREF

  P = 0LL;
  v9 = 0LL;
  v10.QuadPart = 0LL;
  v39 = 0;
  v40.QuadPart = 0LL;
  v15 = HalpDmaReferenceDomainObject();
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = *(_QWORD *)(BugCheckParameter3 + 72);
  if ( v16 )
    *(_BYTE *)(v16 + 516) = 1;
  v17 = 0LL;
  if ( a2 )
    v17 = *a2;
  v18 = *(_QWORD *)(BugCheckParameter3 + 16);
  if ( a3 && v18 > *a3 )
    v18 = *a3;
  if ( a6 )
  {
    if ( *a6 == 1 )
    {
      v19 = 4;
      goto LABEL_10;
    }
    if ( *a6 )
    {
      v15 = -1073741811;
      goto LABEL_55;
    }
  }
  else
  {
    v19 = 4;
    if ( *(_BYTE *)(BugCheckParameter3 + 32) )
      goto LABEL_10;
  }
  v19 = 516;
LABEL_10:
  v20 = *(_QWORD *)(BugCheckParameter3 + 24);
  if ( (a5 & 1) != 0 )
  {
    v33 = 1;
    a4 = (a4 + 0x1FFFFF) & 0xFFE00000;
    do
    {
      if ( 1LL << v33 >= (unsigned __int64)a4 )
        break;
      ++v33;
    }
    while ( v33 < 0x3F );
    v20 = 1LL << v33;
  }
  v21 = a4;
  ContiguousNodeMemory = (_RTL_BALANCED_NODE *)MmAllocateContiguousNodeMemory(a4, v17, v18, v20, v19, a7);
  v9 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
    v25 = *(_DWORD *)(BugCheckParameter3 + 64);
    if ( v25 == 2 )
    {
      v43 = v17;
      v42 = v18;
      v15 = HalpDomainLaAllocate(BugCheckParameter3, v21, v24, (unsigned int)&v43, (__int64)&v42, (__int64)&v40);
      if ( v15 < 0 )
        goto LABEL_55;
      v10 = v40;
      v39 = 1;
      v15 = HalpIommuDomainMapLogicalRange(
              *(_QWORD *)(BugCheckParameter3 + 40),
              3,
              PhysicalAddress.LowPart,
              v21,
              v40.QuadPart);
      if ( v15 < 0 )
      {
LABEL_54:
        ((void (__fastcall *)(_QWORD, _QWORD))HalpDomainLaDelete)(BugCheckParameter3, (PHYSICAL_ADDRESS)v10.QuadPart);
        goto LABEL_55;
      }
    }
    else
    {
      if ( v25 == 3 )
      {
        v15 = HalpIommuDomainMapLogicalRange(
                *(_QWORD *)(BugCheckParameter3 + 40),
                3,
                PhysicalAddress.LowPart,
                v21,
                PhysicalAddress.QuadPart);
        if ( v15 < 0 )
          goto LABEL_55;
      }
      v40 = PhysicalAddress;
      v10 = PhysicalAddress;
    }
    PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x206C6148u);
    P = PoolWithTag;
    v27 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = -1073741670;
      goto LABEL_53;
    }
    PoolWithTag[1].Children[0] = v9;
    PoolWithTag[1].Children[1] = (_RTL_BALANCED_NODE *)BugCheckParameter3;
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 96));
    v29 = *(_QWORD *)(BugCheckParameter3 + 80);
    if ( (*(_BYTE *)(BugCheckParameter3 + 88) & 1) != 0 && v29 )
      v29 ^= BugCheckParameter3 + 80;
    v30 = 0;
    if ( v29 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v29 + 24) > (unsigned __int64)v9 )
        {
          v31 = *(_QWORD *)v29;
          if ( (*(_BYTE *)(BugCheckParameter3 + 88) & 1) != 0 )
          {
            if ( !v31 )
              break;
            v31 ^= v29;
          }
          if ( !v31 )
            break;
        }
        else
        {
          v31 = *(_QWORD *)(v29 + 8);
          if ( (*(_BYTE *)(BugCheckParameter3 + 88) & 1) != 0 )
          {
            if ( !v31 )
              goto LABEL_25;
            v31 ^= v29;
          }
          if ( !v31 )
          {
LABEL_25:
            v30 = 1;
            break;
          }
        }
        v29 = v31;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(BugCheckParameter3 + 80), (PRTL_BALANCED_NODE)v29, v30, v27);
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 96));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v28 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v38 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v10 = v40;
        }
      }
    }
    __writecr8(v28);
    *a8 = v10;
    *a9 = v9;
  }
  else
  {
    v15 = -1073741670;
  }
  if ( v15 >= 0 )
    return (unsigned int)v15;
LABEL_53:
  if ( v39 )
    goto LABEL_54;
LABEL_55:
  HalpDmaDereferenceDomainObject(BugCheckParameter3);
  if ( v9 )
    MmFreeContiguousMemory(v9);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v15;
}
