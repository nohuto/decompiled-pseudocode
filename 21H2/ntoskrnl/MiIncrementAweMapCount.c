/*
 * XREFs of MiIncrementAweMapCount @ 0x14054C674
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6104 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiChangeAwePageAttributes @ 0x14054B840 (MiChangeAwePageAttributes.c)
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
  _DWORD *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rcx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  unsigned __int64 v36; // r14
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  _DWORD *v42; // r9
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  _QWORD *v47; // rbx
  _QWORD *v48; // r12
  ULONG_PTR v49; // r15
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  struct _KTHREAD *v52; // rbx
  unsigned int v53; // edx
  unsigned __int8 v54; // r13
  _DWORD *v55; // r9
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // r14
  int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rbx
  __int64 result; // rax
  unsigned __int8 v65; // al
  bool v66; // cf
  struct _KPRCB *v67; // r9
  int v68; // eax
  _DWORD *v69; // r8
  unsigned __int8 v70; // al
  __int64 v71; // rcx
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  int v74; // eax
  _DWORD *v75; // r8
  _DWORD v76[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v77; // [rsp+3Ch] [rbp-44h] BYREF
  struct _KTHREAD *v78; // [rsp+40h] [rbp-40h]
  __int128 v79; // [rsp+48h] [rbp-38h] BYREF
  __int128 v80; // [rsp+58h] [rbp-28h] BYREF
  char *v81; // [rsp+68h] [rbp-18h]
  struct _KTHREAD *v82; // [rsp+70h] [rbp-10h]
  unsigned int v84; // [rsp+D0h] [rbp+50h]

  v84 = a3;
  v79 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
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
      DWORD1(v80) = 0;
      v81 = (char *)&v80 + 8;
      *((_QWORD *)&v80 + 1) = (char *)&v80 + 8;
      *((_QWORD *)&v79 + 1) = a2;
      LOWORD(v80) = 263;
      BYTE2(v80) = 6;
      --CurrentThread->SpecialApcDisable;
      v78 = CurrentThread;
      v16 = v6 + 40;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      MiLockPageInline(a2, v17, v18, v19);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        *(_QWORD *)&v79 = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = &v79;
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
      v76[0] = 0;
      v25 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v25->ApcState.Process);
      else
        SessionId = -1;
      --v25->SpecialApcDisable;
      v27 = ++v25->AbAllocationRegionCount;
      v28 = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
      v29 = (_DWORD *)(v16 & 0x7FFFFFFFFFFFFFFCLL);
      v14 = !_BitScanReverse((unsigned int *)&v30, v28);
      if ( v14 )
        goto LABEL_34;
      while ( 1 )
      {
        v31 = (__int64)&v25->LockEntries[v30];
        v28 &= ~(1 << v30);
        if ( (*(_BYTE *)(v31 + 26) & 1) != 0
          && (*(_DWORD *)(v31 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v29
          && *(_DWORD *)(v31 + 40) == SessionId )
        {
          *(_BYTE *)(v31 + 26) &= ~1u;
          if ( *(_QWORD *)(v31 + 32) )
            break;
        }
        v14 = !_BitScanReverse((unsigned int *)&v30, v28);
        if ( v14 )
          goto LABEL_34;
      }
      if ( !v31 )
      {
LABEL_34:
        if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v25, v16, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v31 + 32) |= 2u;
        if ( *(__int64 *)(v31 + 32) < 0 )
          KiAbEntryRemoveFromTree(v31);
        v33 = *(_DWORD *)(v31 + 88) & 0x1FFFF;
        v34 = *(_DWORD *)(v31 + 88) & 0xFFFE0000;
        *(_BYTE *)(v31 + 25) &= ~1u;
        v76[0] = v33;
        *(_DWORD *)(v31 + 88) = v34;
        *(_QWORD *)(v31 + 32) = 0LL;
        v35 = (signed __int64)(v31 - (unsigned __int64)v25->LockEntries) / 96;
        if ( v27 == 1 )
          v25->AbEntrySummary |= 1 << v35;
        else
          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v35);
      }
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, v16, (__int64)v76, v29);
      v14 = v25->SpecialApcDisable++ == -1;
      if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v32);
      KiLeaveGuardedRegionUnsafe((__int64)v78);
      v4 = v84;
      v14 = v20 == 0;
      v6 = a1;
      if ( !v14 )
        KeWaitForGate((__int64)&v80, 18);
    }
    v36 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 >> 6 == v4 )
      goto LABEL_101;
    if ( *(_WORD *)(a2 + 32) > 2u || v36 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v70 = KeGetCurrentIrql();
          if ( v70 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
          {
            v66 = v70 < 2u;
LABEL_109:
            if ( !v66 )
            {
              v67 = KeGetCurrentPrcb();
              v68 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v69 = v67->SchedulerAssist;
              v14 = (v68 & v69[5]) == 0;
              v69[5] &= v68;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v67);
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
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v8 = v38->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v39 & v8[5]) == 0;
          v8[5] &= v39;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v38);
        }
      }
    }
    __writecr8(v7);
    LODWORD(v78) = MiChangeAwePageAttributes(v6, a2, v4, v8);
    MiLockPageInline(a2, v40, v41, v42);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v44);
        }
      }
    }
    __writecr8(v7);
    v47 = (_QWORD *)(v6 + 48);
    v48 = 0LL;
    v82 = KeGetCurrentThread();
    --v82->SpecialApcDisable;
    v49 = v6 + 40;
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    v50 = *(_QWORD **)(v6 + 48);
    if ( v50 )
    {
      do
      {
        v51 = (_QWORD *)*v50;
        if ( v50[1] == a2 )
        {
          *v50 = v48;
          v48 = v50;
          *v47 = v51;
        }
        else
        {
          v47 = v50;
        }
        v50 = v51;
      }
      while ( v51 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 40);
    v77 = 0;
    v52 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6 + 40) == 1 )
      v53 = MmGetSessionIdEx((__int64)v52->ApcState.Process);
    else
      v53 = -1;
    --v52->SpecialApcDisable;
    v54 = ++v52->AbAllocationRegionCount;
    v55 = (_DWORD *)(v49 & 0x7FFFFFFFFFFFFFFCLL);
    v56 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v57, v56);
      v76[1] = v57;
      if ( v14 )
        break;
      v58 = (__int64)&v52->LockEntries[v57];
      v56 &= ~(1 << v57);
      if ( (*(_BYTE *)(v58 + 26) & 1) != 0
        && (*(_DWORD *)(v58 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v58 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v55
        && *(_DWORD *)(v58 + 40) == v53 )
      {
        *(_BYTE *)(v58 + 26) &= ~1u;
        if ( *(_QWORD *)(v58 + 32) )
        {
          if ( v58 )
          {
            *(_BYTE *)(v58 + 32) |= 2u;
            if ( *(__int64 *)(v58 + 32) < 0 )
              KiAbEntryRemoveFromTree(v58);
            v59 = *(_DWORD *)(v58 + 88) & 0x1FFFF;
            v60 = *(_DWORD *)(v58 + 88) & 0xFFFE0000;
            *(_BYTE *)(v58 + 25) &= ~1u;
            v77 = v59;
            *(_DWORD *)(v58 + 88) = v60;
            *(_QWORD *)(v58 + 32) = 0LL;
            v61 = (signed __int64)(v58 - (unsigned __int64)v52->LockEntries) / 96;
            if ( v54 == 1 )
              v52->AbEntrySummary |= 1 << v61;
            else
              _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v61);
            goto LABEL_90;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v52, v49, v53, 0LL);
LABEL_90:
    --v52->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v52, v49, (__int64)&v77, v55);
    v14 = v52->SpecialApcDisable++ == -1;
    if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
      KiCheckForKernelApcDelivery(v62);
    KiLeaveGuardedRegionUnsafe((__int64)v82);
    if ( v48 )
    {
      do
      {
        v63 = (_QWORD *)*v48;
        KeSignalGate((__int64)(v48 + 2), 1LL, a3, a4);
        v48 = v63;
      }
      while ( v63 );
    }
    result = (unsigned int)v78;
    if ( (int)v78 < 0 )
      return result;
    v6 = a1;
    v4 = v84;
  }
  MiChangePageAttribute(a2, v4, 1LL, v8);
LABEL_101:
  if ( v36 > 1 && (*(_DWORD *)v6 & 1) != 0 || v36 >= 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_104:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
        {
          v66 = v65 < 2u;
          goto LABEL_109;
        }
      }
    }
    goto LABEL_112;
  }
  v71 = *(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v71;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v75 = v73->SchedulerAssist;
        v14 = (v74 & v75[5]) == 0;
        v75[5] &= v74;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v73);
      }
    }
  }
  result = 0LL;
LABEL_126:
  __writecr8(v7);
  return result;
}
