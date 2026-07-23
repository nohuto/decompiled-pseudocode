/*
 * XREFs of MiIncrementAweMapCount @ 0x140546B54
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x1408D17B4 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiChangeAwePageAttributes @ 0x140545D20 (MiChangeAwePageAttributes.c)
 */

__int64 __fastcall MiIncrementAweMapCount(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r15d
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r9
  unsigned int v9; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v20; // r13d
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  struct _KTHREAD *v25; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v27; // r12
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // r9
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rdx
  unsigned __int64 v38; // r14
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  _DWORD *v44; // r9
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  _QWORD *v49; // rbx
  _QWORD *v50; // r12
  ULONG_PTR v51; // r15
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  struct _KTHREAD *v54; // rbx
  unsigned int v55; // edx
  unsigned __int8 v56; // r13
  unsigned int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // r14
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  _DWORD *v66; // r9
  _QWORD *v67; // rbx
  __int64 result; // rax
  unsigned __int8 v69; // al
  bool v70; // cf
  struct _KPRCB *v71; // r9
  int v72; // eax
  _DWORD *v73; // r8
  unsigned __int8 v74; // al
  __int64 v75; // rcx
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r9
  int v78; // eax
  _DWORD *v79; // r8
  _DWORD v80[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v81; // [rsp+3Ch] [rbp-44h] BYREF
  struct _KTHREAD *v82; // [rsp+40h] [rbp-40h]
  __int128 v83; // [rsp+48h] [rbp-38h] BYREF
  __int128 v84; // [rsp+58h] [rbp-28h] BYREF
  char *v85; // [rsp+68h] [rbp-18h]
  struct _KTHREAD *v86; // [rsp+70h] [rbp-10h]
  unsigned int v88; // [rsp+D0h] [rbp+50h]

  v88 = a3;
  v83 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v4 = a3;
  v6 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (unsigned __int8)MiLockPageInline(a2, a2, a3, a4);
      if ( (*(_DWORD *)v6 & 1) != 0 && (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_104;
      v9 = *(unsigned __int8 *)(a2 + 34);
      if ( (v9 & 0x20) == 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v14 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      CurrentThread = KeGetCurrentThread();
      DWORD1(v84) = 0;
      v85 = (char *)&v84 + 8;
      *((_QWORD *)&v84 + 1) = (char *)&v84 + 8;
      *((_QWORD *)&v83 + 1) = a2;
      LOWORD(v84) = 263;
      BYTE2(v84) = 6;
      --CurrentThread->SpecialApcDisable;
      v82 = CurrentThread;
      v16 = v6 + 40;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      MiLockPageInline(a2, v17, v18, v19);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        *(_QWORD *)&v83 = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = &v83;
        v20 = 1;
      }
      else
      {
        v20 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v14 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)v22);
          }
        }
      }
      __writecr8(v7);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      v80[0] = 0;
      v25 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
      else
        SessionId = -1;
      --v25->SpecialApcDisable;
      v27 = ++v25->AbAllocationRegionCount;
      v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      v14 = !_BitScanReverse((unsigned int *)&v29, v28);
      if ( v14 )
        goto LABEL_34;
      while ( 1 )
      {
        v30 = (__int64)&v25->LockEntries[v29];
        v28 &= ~(1 << v29);
        if ( (*(_BYTE *)(v30 + 26) & 1) != 0
          && (*(_DWORD *)(v30 + 32) & 1) == 0
          && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v30 + 40) == SessionId )
        {
          *(_BYTE *)(v30 + 26) &= ~1u;
          if ( *(_QWORD *)(v30 + 32) )
            break;
        }
        v14 = !_BitScanReverse((unsigned int *)&v29, v28);
        if ( v14 )
          goto LABEL_34;
      }
      if ( !v30 )
      {
LABEL_34:
        if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v25, v16, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v30 + 32) |= 2u;
        if ( *(__int64 *)(v30 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
        v35 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
        v36 = *(_DWORD *)(v30 + 88) & 0xFFFE0000;
        *(_BYTE *)(v30 + 25) &= ~1u;
        v80[0] = v35;
        *(_DWORD *)(v30 + 88) = v36;
        *(_QWORD *)(v30 + 32) = 0LL;
        v37 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
        if ( v27 == 1 )
          v25->AbEntrySummary |= 1 << v37;
        else
          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v37);
      }
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, v16, v80);
      v14 = v25->SpecialApcDisable++ == -1;
      if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v32, v31, v33, v34);
      KiLeaveGuardedRegionUnsafe((__int64)v82, v31, v33, (__int64)v34);
      v4 = v88;
      v14 = v20 == 0;
      v6 = a1;
      if ( !v14 )
        KeWaitForGate((__int64)&v84, 18);
    }
    v38 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 >> 6 == v4 )
      goto LABEL_101;
    if ( *(_WORD *)(a2 + 32) > 2u || v38 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
          {
            v70 = v74 < 2u;
LABEL_109:
            if ( !v70 )
            {
              v71 = KeGetCurrentPrcb();
              v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v73 = v71->SchedulerAssist;
              v14 = (v72 & v73[5]) == 0;
              v73[5] &= v72;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v71);
            }
          }
        }
      }
LABEL_112:
      result = 3221225496LL;
      goto LABEL_126;
    }
    if ( *(_QWORD *)(v6 + 8) == 1LL )
      break;
    *(_BYTE *)(a2 + 34) = v9 | 0x20;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v8 = v40->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v41 & v8[5]) == 0;
          v8[5] &= v41;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v40);
        }
      }
    }
    __writecr8(v7);
    LODWORD(v82) = MiChangeAwePageAttributes(v6, a2, v4, v8);
    MiLockPageInline(a2, v42, v43, v44);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v46);
        }
      }
    }
    __writecr8(v7);
    v49 = (_QWORD *)(v6 + 48);
    v50 = 0LL;
    v86 = KeGetCurrentThread();
    --v86->SpecialApcDisable;
    v51 = v6 + 40;
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    v52 = *(_QWORD **)(v6 + 48);
    if ( v52 )
    {
      do
      {
        v53 = (_QWORD *)*v52;
        if ( v52[1] == a2 )
        {
          *v52 = v50;
          v50 = v52;
          *v49 = v53;
        }
        else
        {
          v49 = v52;
        }
        v52 = v53;
      }
      while ( v53 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 40);
    v81 = 0;
    v54 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6 + 40) == 1 )
      v55 = MmGetSessionIdEx((__int64)v54->ApcState.Process);
    else
      v55 = -1;
    --v54->SpecialApcDisable;
    v56 = ++v54->AbAllocationRegionCount;
    v57 = ((char)v54->AbEntrySummary | (char)v54->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v58, v57);
      v80[1] = v58;
      if ( v14 )
        break;
      v59 = (__int64)&v54->LockEntries[v58];
      v57 &= ~(1 << v58);
      if ( (*(_BYTE *)(v59 + 26) & 1) != 0
        && (*(_DWORD *)(v59 + 32) & 1) == 0
        && (*(_QWORD *)(v59 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v51 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v59 + 40) == v55 )
      {
        *(_BYTE *)(v59 + 26) &= ~1u;
        if ( *(_QWORD *)(v59 + 32) )
        {
          if ( v59 )
          {
            *(_BYTE *)(v59 + 32) |= 2u;
            if ( *(__int64 *)(v59 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v59);
            v60 = *(_DWORD *)(v59 + 88) & 0x1FFFF;
            v61 = *(_DWORD *)(v59 + 88) & 0xFFFE0000;
            *(_BYTE *)(v59 + 25) &= ~1u;
            v81 = v60;
            *(_DWORD *)(v59 + 88) = v61;
            *(_QWORD *)(v59 + 32) = 0LL;
            v62 = (signed __int64)(v59 - (unsigned __int64)v54->LockEntries) / 96;
            if ( v56 == 1 )
              v54->AbEntrySummary |= 1 << v62;
            else
              _InterlockedOr8((volatile signed __int8 *)&v54->AbOrphanedEntrySummary, 1 << v62);
            goto LABEL_90;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v54->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v54, v51, v55, 0LL);
LABEL_90:
    --v54->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v54, v51, &v81);
    v14 = v54->SpecialApcDisable++ == -1;
    if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
      KiCheckForKernelApcDelivery(v64, v63, v65, v66);
    KiLeaveGuardedRegionUnsafe((__int64)v86, v63, v65, (__int64)v66);
    if ( v50 )
    {
      do
      {
        v67 = (_QWORD *)*v50;
        KeSignalGate((__int64)(v50 + 2), 1LL, a3, a4);
        v50 = v67;
      }
      while ( v67 );
    }
    result = (unsigned int)v82;
    if ( (int)v82 < 0 )
      return result;
    v6 = a1;
    v4 = v88;
  }
  MiChangePageAttribute(a2, v4, 1LL, v8);
LABEL_101:
  if ( v38 > 1 && (*(_DWORD *)v6 & 1) != 0 || v38 >= 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_104:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v69 = KeGetCurrentIrql();
        if ( v69 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
        {
          v70 = v69 < 2u;
          goto LABEL_109;
        }
      }
    }
    goto LABEL_112;
  }
  v75 = *(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v75;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v76 = KeGetCurrentIrql();
      if ( v76 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v76 >= 2u )
      {
        v77 = KeGetCurrentPrcb();
        v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v79 = v77->SchedulerAssist;
        v14 = (v78 & v79[5]) == 0;
        v79[5] &= v78;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v77);
      }
    }
  }
  result = 0LL;
LABEL_126:
  __writecr8(v7);
  return result;
}
