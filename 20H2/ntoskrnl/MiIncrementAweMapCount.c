/*
 * XREFs of MiIncrementAweMapCount @ 0x14054AB74
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x1408D8944 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiChangeAwePageAttributes @ 0x140549D40 (MiChangeAwePageAttributes.c)
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
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  _DWORD *v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  _QWORD *v46; // rbx
  _QWORD *v47; // r12
  ULONG_PTR v48; // r15
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  struct _KTHREAD *v51; // rbx
  unsigned int v52; // edx
  unsigned __int8 v53; // r13
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // r14
  int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rbx
  __int64 result; // rax
  unsigned __int8 v63; // al
  bool v64; // cf
  struct _KPRCB *v65; // r9
  int v66; // eax
  _DWORD *v67; // r8
  unsigned __int8 v68; // al
  __int64 v69; // rcx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  int v72; // eax
  _DWORD *v73; // r8
  _DWORD v74[2]; // [rsp+34h] [rbp-4Ch] BYREF
  int v75; // [rsp+3Ch] [rbp-44h] BYREF
  struct _KTHREAD *v76; // [rsp+40h] [rbp-40h]
  __int128 v77; // [rsp+48h] [rbp-38h] BYREF
  __int128 v78; // [rsp+58h] [rbp-28h] BYREF
  char *v79; // [rsp+68h] [rbp-18h]
  struct _KTHREAD *v80; // [rsp+70h] [rbp-10h]
  unsigned int v82; // [rsp+D0h] [rbp+50h]

  v82 = a3;
  v77 = 0LL;
  v79 = 0LL;
  v78 = 0LL;
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
      DWORD1(v78) = 0;
      v79 = (char *)&v78 + 8;
      *((_QWORD *)&v78 + 1) = (char *)&v78 + 8;
      *((_QWORD *)&v77 + 1) = a2;
      LOWORD(v78) = 263;
      BYTE2(v78) = 6;
      --CurrentThread->SpecialApcDisable;
      v76 = CurrentThread;
      v16 = v6 + 40;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      MiLockPageInline(a2, v17, v18, v19);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        *(_QWORD *)&v77 = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = &v77;
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
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      v74[0] = 0;
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
        v32 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
        v33 = *(_DWORD *)(v30 + 88) & 0xFFFE0000;
        *(_BYTE *)(v30 + 25) &= ~1u;
        v74[0] = v32;
        *(_DWORD *)(v30 + 88) = v33;
        *(_QWORD *)(v30 + 32) = 0LL;
        v34 = (signed __int64)(v30 - (unsigned __int64)v25->LockEntries) / 96;
        if ( v27 == 1 )
          v25->AbEntrySummary |= 1 << v34;
        else
          _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v34);
      }
      --v25->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v25, v16, v74);
      v14 = v25->SpecialApcDisable++ == -1;
      if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
        KiCheckForKernelApcDelivery(v31);
      KiLeaveGuardedRegionUnsafe((__int64)v76);
      v4 = v82;
      v14 = v20 == 0;
      v6 = a1;
      if ( !v14 )
        KeWaitForGate((__int64)&v78, 18);
    }
    v35 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v9 >> 6 == v4 )
      goto LABEL_101;
    if ( *(_WORD *)(a2 + 32) > 2u || v35 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
          {
            v64 = v68 < 2u;
LABEL_109:
            if ( !v64 )
            {
              v65 = KeGetCurrentPrcb();
              v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v67 = v65->SchedulerAssist;
              v14 = (v66 & v67[5]) == 0;
              v67[5] &= v66;
              if ( v14 )
                KiRemoveSystemWorkPriorityKick((__int64)v65);
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
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v8 = v37->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v38 & v8[5]) == 0;
          v8[5] &= v38;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
    }
    __writecr8(v7);
    LODWORD(v76) = MiChangeAwePageAttributes(v6, a2, v4, v8);
    MiLockPageInline(a2, v39, v40, v41);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v42 >= 2u )
        {
          v43 = KeGetCurrentPrcb();
          v44 = v43->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v14 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v43);
        }
      }
    }
    __writecr8(v7);
    v46 = (_QWORD *)(v6 + 48);
    v47 = 0LL;
    v80 = KeGetCurrentThread();
    --v80->SpecialApcDisable;
    v48 = v6 + 40;
    ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
    v49 = *(_QWORD **)(v6 + 48);
    if ( v49 )
    {
      do
      {
        v50 = (_QWORD *)*v49;
        if ( v49[1] == a2 )
        {
          *v49 = v47;
          v47 = v49;
          *v46 = v50;
        }
        else
        {
          v46 = v49;
        }
        v49 = v50;
      }
      while ( v50 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
    v75 = 0;
    v51 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v6 + 40) == 1 )
      v52 = MmGetSessionIdEx((__int64)v51->ApcState.Process);
    else
      v52 = -1;
    --v51->SpecialApcDisable;
    v53 = ++v51->AbAllocationRegionCount;
    v54 = ((char)v51->AbEntrySummary | (char)v51->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v55, v54);
      v74[1] = v55;
      if ( v14 )
        break;
      v56 = (__int64)&v51->LockEntries[v55];
      v54 &= ~(1 << v55);
      if ( (*(_BYTE *)(v56 + 26) & 1) != 0
        && (*(_DWORD *)(v56 + 32) & 1) == 0
        && (*(_QWORD *)(v56 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v48 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v56 + 40) == v52 )
      {
        *(_BYTE *)(v56 + 26) &= ~1u;
        if ( *(_QWORD *)(v56 + 32) )
        {
          if ( v56 )
          {
            *(_BYTE *)(v56 + 32) |= 2u;
            if ( *(__int64 *)(v56 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v56);
            v57 = *(_DWORD *)(v56 + 88) & 0x1FFFF;
            v58 = *(_DWORD *)(v56 + 88) & 0xFFFE0000;
            *(_BYTE *)(v56 + 25) &= ~1u;
            v75 = v57;
            *(_DWORD *)(v56 + 88) = v58;
            *(_QWORD *)(v56 + 32) = 0LL;
            v59 = (signed __int64)(v56 - (unsigned __int64)v51->LockEntries) / 96;
            if ( v53 == 1 )
              v51->AbEntrySummary |= 1 << v59;
            else
              _InterlockedOr8((volatile signed __int8 *)&v51->AbOrphanedEntrySummary, 1 << v59);
            goto LABEL_90;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v51, v48, v52, 0LL);
LABEL_90:
    --v51->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v51, v48, &v75);
    v14 = v51->SpecialApcDisable++ == -1;
    if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
      KiCheckForKernelApcDelivery(v60);
    KiLeaveGuardedRegionUnsafe((__int64)v80);
    if ( v47 )
    {
      do
      {
        v61 = (_QWORD *)*v47;
        KeSignalGate((__int64)(v47 + 2), 1LL, a3, a4);
        v47 = v61;
      }
      while ( v61 );
    }
    result = (unsigned int)v76;
    if ( (int)v76 < 0 )
      return result;
    v6 = a1;
    v4 = v82;
  }
  MiChangePageAttribute(a2, v4, 1);
LABEL_101:
  if ( v35 > 1 && (*(_DWORD *)v6 & 1) != 0 || v35 >= 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_104:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v63 = KeGetCurrentIrql();
        if ( v63 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
        {
          v64 = v63 < 2u;
          goto LABEL_109;
        }
      }
    }
    goto LABEL_112;
  }
  v69 = *(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v69;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v70 = KeGetCurrentIrql();
      if ( v70 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v70 >= 2u )
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
  result = 0LL;
LABEL_126:
  __writecr8(v7);
  return result;
}
