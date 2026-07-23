/*
 * XREFs of MiIncrementAweMapCount @ 0x14054C8B4
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6264 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiChangeAwePageAttributes @ 0x14054BA80 (MiChangeAwePageAttributes.c)
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
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // r14
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  _QWORD *v45; // rbx
  _QWORD *v46; // r12
  ULONG_PTR v47; // r15
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  struct _KTHREAD *v50; // rbx
  unsigned int v51; // edx
  unsigned __int8 v52; // r13
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // r14
  int v56; // eax
  unsigned int v57; // ecx
  __int64 v58; // rdx
  _QWORD *v59; // rbx
  __int64 result; // rax
  unsigned __int8 v61; // al
  bool v62; // cf
  struct _KPRCB *v63; // r9
  int v64; // eax
  _DWORD *v65; // r8
  unsigned __int8 v66; // al
  __int64 v67; // rcx
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  int v70; // eax
  _DWORD *v71; // r8
  unsigned int v72[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v73; // [rsp+3Ch] [rbp-44h] BYREF
  struct _KTHREAD *v74; // [rsp+40h] [rbp-40h]
  __int128 v75; // [rsp+48h] [rbp-38h] BYREF
  __int128 v76; // [rsp+58h] [rbp-28h] BYREF
  char *v77; // [rsp+68h] [rbp-18h]
  struct _KTHREAD *v78; // [rsp+70h] [rbp-10h]
  unsigned int v80; // [rsp+D0h] [rbp+50h]

  v80 = a3;
  v75 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
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
      DWORD1(v76) = 0;
      v77 = (char *)&v76 + 8;
      *((_QWORD *)&v76 + 1) = (char *)&v76 + 8;
      *((_QWORD *)&v75 + 1) = a2;
      LOWORD(v76) = 263;
      BYTE2(v76) = 6;
      --CurrentThread->SpecialApcDisable;
      v74 = CurrentThread;
      v16 = v6 + 40;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      MiLockPageInline(a2, v17, v18, v19);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        *(_QWORD *)&v75 = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = &v75;
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
      v72[0] = 0;
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
        v31 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
        v32 = *(_DWORD *)(v30 + 88) & 0xFFFE0000;
        *(_BYTE *)(v30 + 25) &= ~1u;
        v72[0] = v31;
        *(_DWORD *)(v30 + 88) = v32;
        *(_QWORD *)(v30 + 32) = 0LL;
        v33 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
        if ( v27 == 1 )
          v25->AbEntrySummary |= 1 << v33;
        else
          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v33);
      }
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, v16, v72);
      v14 = v25->SpecialApcDisable++ == -1;
      if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)v74);
      v4 = v80;
      v14 = v20 == 0;
      v6 = a1;
      if ( !v14 )
        KeWaitForGate((__int64)&v76, 0x12u);
    }
    v34 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 >> 6 == v4 )
      goto LABEL_101;
    if ( *(_WORD *)(a2 + 32) > 2u || v34 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
          {
            v62 = v66 < 2u;
LABEL_109:
            if ( !v62 )
            {
              v63 = KeGetCurrentPrcb();
              v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v65 = v63->SchedulerAssist;
              v14 = (v64 & v65[5]) == 0;
              v65[5] &= v64;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v63);
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
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v8 = v36->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v37 & v8[5]) == 0;
          v8[5] &= v37;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v36);
        }
      }
    }
    __writecr8(v7);
    LODWORD(v74) = MiChangeAwePageAttributes(v6, a2, v4, v8);
    MiLockPageInline(a2, v38, v39, v40);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v42);
        }
      }
    }
    __writecr8(v7);
    v45 = (_QWORD *)(v6 + 48);
    v46 = 0LL;
    v78 = KeGetCurrentThread();
    --v78->SpecialApcDisable;
    v47 = v6 + 40;
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    v48 = *(_QWORD **)(v6 + 48);
    if ( v48 )
    {
      do
      {
        v49 = (_QWORD *)*v48;
        if ( v48[1] == a2 )
        {
          *v48 = v46;
          v46 = v48;
          *v45 = v49;
        }
        else
        {
          v45 = v48;
        }
        v48 = v49;
      }
      while ( v49 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v47, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 + 40);
    v73 = 0;
    v50 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6 + 40) == 1 )
      v51 = MmGetSessionIdEx((__int64)v50->ApcState.Process);
    else
      v51 = -1;
    --v50->SpecialApcDisable;
    v52 = ++v50->AbAllocationRegionCount;
    v53 = ((char)v50->AbEntrySummary | (char)v50->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v54, v53);
      v72[1] = v54;
      if ( v14 )
        break;
      v55 = (__int64)&v50->LockEntries[v54];
      v53 &= ~(1 << v54);
      if ( (*(_BYTE *)(v55 + 26) & 1) != 0
        && (*(_DWORD *)(v55 + 32) & 1) == 0
        && (*(_QWORD *)(v55 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v47 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v55 + 40) == v51 )
      {
        *(_BYTE *)(v55 + 26) &= ~1u;
        if ( *(_QWORD *)(v55 + 32) )
        {
          if ( v55 )
          {
            *(_BYTE *)(v55 + 32) |= 2u;
            if ( *(__int64 *)(v55 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v55);
            v56 = *(_DWORD *)(v55 + 88) & 0x1FFFF;
            v57 = *(_DWORD *)(v55 + 88) & 0xFFFE0000;
            *(_BYTE *)(v55 + 25) &= ~1u;
            v73 = v56;
            *(_DWORD *)(v55 + 88) = v57;
            *(_QWORD *)(v55 + 32) = 0LL;
            v58 = (signed __int64)(v55 - (unsigned __int64)v50->LockEntries) / 96;
            if ( v52 == 1 )
              v50->AbEntrySummary |= 1 << v58;
            else
              _InterlockedOr8((volatile signed __int8 *)&v50->AbOrphanedEntrySummary, 1 << v58);
            goto LABEL_90;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v50->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v50, v47, v51, 0LL);
LABEL_90:
    --v50->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v50, v47, (unsigned int *)&v73);
    v14 = v50->SpecialApcDisable++ == -1;
    if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)v78);
    if ( v46 )
    {
      do
      {
        v59 = (_QWORD *)*v46;
        KeSignalGate((__int64)(v46 + 2), 1);
        v46 = v59;
      }
      while ( v59 );
    }
    result = (unsigned int)v74;
    if ( (int)v74 < 0 )
      return result;
    v6 = a1;
    v4 = v80;
  }
  MiChangePageAttribute(a2, v4, 1LL, v8);
LABEL_101:
  if ( v34 > 1 && (*(_DWORD *)v6 & 1) != 0 || v34 >= 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_104:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v61 = KeGetCurrentIrql();
        if ( v61 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
        {
          v62 = v61 < 2u;
          goto LABEL_109;
        }
      }
    }
    goto LABEL_112;
  }
  v67 = *(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v67;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v68 = KeGetCurrentIrql();
      if ( v68 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v68 >= 2u )
      {
        v69 = KeGetCurrentPrcb();
        v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v71 = v69->SchedulerAssist;
        v14 = (v70 & v71[5]) == 0;
        v71[5] &= v70;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v69);
      }
    }
  }
  result = 0LL;
LABEL_126:
  __writecr8(v7);
  return result;
}
