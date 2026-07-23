/*
 * XREFs of HalFreeCommonBufferThin @ 0x1404C59D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiFreePagesFromMdl @ 0x140346FD4 (MiFreePagesFromMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404BF528 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaDelete @ 0x1404BF824 (HalpDomainLaDelete.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C3FCC (HalpIommuDomainUnmapLogicalRange.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalFreeCommonBufferThin(__int64 a1, unsigned int a2, ULONG_PTR a3, _RTL_BALANCED_NODE *a4)
{
  _RTL_BALANCED_NODE *v4; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  _RTL_BALANCED_NODE *v9; // rsi
  unsigned __int64 v10; // r13
  _RTL_BALANCED_NODE *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // r14
  KSPIN_LOCK *v19; // rsi
  _RTL_BALANCED_NODE *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int64 result; // rax
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  ULONG_PTR v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  int v36; // eax
  _DWORD *v37; // r8
  struct _MDL *v38; // rbx
  unsigned __int64 v39; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v40; // [rsp+68h] [rbp+10h]
  _RTL_BALANCED_NODE *v41; // [rsp+78h] [rbp+20h]

  v41 = a4;
  v40 = a2;
  v39 = 0LL;
  v4 = a4;
  LOBYTE(v6) = KeGetCurrentIrql();
  v7 = *(_QWORD *)(a1 + 504);
  v8 = 0LL;
  v9 = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  if ( !v7 )
    goto LABEL_26;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
  v8 = *(_QWORD *)(v7 + 80);
  if ( (*(_BYTE *)(v7 + 88) & 1) != 0 && v8 )
    v8 ^= v7 + 80;
  while ( v8 )
  {
    v11 = *(_RTL_BALANCED_NODE **)(v8 + 24);
    if ( v11[1].Children[0] == v4 )
      break;
    if ( v11[1].Children[0] <= v4 )
      v12 = *(_QWORD *)(v8 + 8);
    else
      v12 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v7 + 88) & 1) != 0 && v12 )
      v8 ^= v12;
    else
      v8 = v12;
  }
  if ( v8 )
  {
    v9 = (_RTL_BALANCED_NODE *)v8;
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 96));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    v7 = 0LL;
  }
  if ( !v7 )
  {
LABEL_26:
    v18 = HalpDmaDomainList;
    if ( (__int64 *)HalpDmaDomainList != &HalpDmaDomainList )
    {
      while ( 1 )
      {
        v19 = (KSPIN_LOCK *)(v18 + 96);
        v7 = v18;
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 96));
        v8 = *(_QWORD *)(v18 + 80);
        if ( (*(_BYTE *)(v18 + 88) & 1) != 0 && v8 )
          v8 ^= v18 + 80;
        if ( v8 )
        {
          do
          {
            v20 = *(_RTL_BALANCED_NODE **)(v8 + 24);
            if ( v20[1].Children[0] == v41 )
              break;
            v21 = v20[1].Children[0] <= v41 ? *(_QWORD *)(v8 + 8) : *(_QWORD *)v8;
            if ( (*(_BYTE *)(v18 + 88) & 1) != 0 && v21 )
              v8 ^= v21;
            else
              v8 = v21;
          }
          while ( v8 );
          v19 = (KSPIN_LOCK *)(v18 + 96);
          if ( v8 )
            break;
        }
        KxReleaseSpinLock(v19);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v22 = KeGetCurrentIrql();
            if ( v22 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v22 >= 2u )
            {
              v23 = KeGetCurrentPrcb();
              v24 = v23->SchedulerAssist;
              v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v17 = (v25 & v24[5]) == 0;
              v24[5] &= v25;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v23);
            }
          }
        }
        __writecr8(v6);
        v18 = *(_QWORD *)v18;
        if ( (__int64 *)v18 == &HalpDmaDomainList )
          goto LABEL_52;
      }
      v9 = (_RTL_BALANCED_NODE *)v8;
    }
    if ( !v7 )
    {
LABEL_52:
      KxReleaseSpinLock(&HalpDmaDomainListLock);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
            v28 = v27->SchedulerAssist;
            v17 = ((unsigned int)result & v28[5]) == 0;
            v28[5] &= result;
            if ( v17 )
              result = KiRemoveSystemWorkPriorityKick((__int64)v27);
          }
        }
      }
      __writecr8(v10);
      return result;
    }
    v4 = v41;
  }
  v29 = *(_QWORD *)(v7 + 40);
  v39 = v40;
  HalpIommuDomainUnmapLogicalRange(v29, a3, &v39, 0);
  HalpDomainLaDelete(v7, a3);
  RtlRbRemoveNode((PRTL_RB_TREE)(v7 + 80), (PRTL_BALANCED_NODE)v8);
  KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 96));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v17 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v31);
      }
    }
  }
  __writecr8((unsigned __int8)v6);
  KxReleaseSpinLock(&HalpDmaDomainListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v37 = v35->SchedulerAssist;
        v17 = (v36 & v37[5]) == 0;
        v37[5] &= v36;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v35);
      }
    }
  }
  __writecr8(v10);
  HalpDmaDereferenceDomainObject((__int64 *)v7);
  v38 = (struct _MDL *)v9[1].Children[0];
  ExFreePoolWithTag(v9, 0);
  MmUnmapLockedPages(v4, v38);
  return (__int64)MiFreePagesFromMdl((ULONG_PTR)v38, 0);
}
