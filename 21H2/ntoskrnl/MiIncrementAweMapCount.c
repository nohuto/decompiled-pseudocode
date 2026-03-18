/*
 * XREFs of MiIncrementAweMapCount @ 0x1405AB148
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiChangeAwePageAttributes @ 0x1405AA320 (MiChangeAwePageAttributes.c)
 */

__int64 __fastcall MiIncrementAweMapCount(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned int v8; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v15; // r15
  int v16; // r12d
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  struct _KTHREAD *v21; // r14
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v24; // edx
  int v25; // r8d
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  struct _KTHREAD *v35; // r13
  _QWORD **v36; // rbx
  _QWORD *v37; // r12
  ULONG_PTR v38; // r15
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  struct _KTHREAD *v41; // r14
  unsigned int v42; // ecx
  __int64 v43; // rbx
  unsigned int v44; // edx
  _QWORD *v45; // rbx
  __int64 result; // rax
  int v47; // r8d
  __int64 v48; // rcx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  int v51; // eax
  _DWORD *v52; // r8
  unsigned __int8 v53; // al
  bool v54; // cf
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  int v57; // eax
  _DWORD *v58; // r8
  int v59; // [rsp+30h] [rbp-30h]
  __int128 v60; // [rsp+38h] [rbp-28h] BYREF
  __int128 v61; // [rsp+48h] [rbp-18h] BYREF
  char *v62; // [rsp+58h] [rbp-8h]

  v4 = a3;
  v62 = 0LL;
  v6 = a1;
  v60 = 0LL;
  v61 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (unsigned __int8)MiLockPageInline(a2);
      if ( (*(_DWORD *)(v6 + 8) & 1) != 0 && (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_115;
      v8 = *(unsigned __int8 *)(a2 + 34);
      if ( (v8 & 0x20) == 0 )
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
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      CurrentThread = KeGetCurrentThread();
      DWORD1(v61) = 0;
      v62 = (char *)&v61 + 8;
      *((_QWORD *)&v61 + 1) = (char *)&v61 + 8;
      *((_QWORD *)&v60 + 1) = a2;
      LOWORD(v61) = 263;
      BYTE2(v61) = 6;
      --CurrentThread->SpecialApcDisable;
      v15 = v6 + 48;
      ExAcquirePushLockExclusiveEx(v15, 0LL);
      MiLockPageInline(a2);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        *(_QWORD *)&v60 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(a1 + 56) = &v60;
        v16 = 1;
      }
      else
      {
        v16 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
        }
      }
      __writecr8(v7);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v21 = KeGetCurrentThread();
      if ( v15 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v21->ApcState.Process);
      _disable();
      p_Process = (__int64)&v21[1].Process;
      v24 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v15 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v24;
        p_Process += 96LL;
        if ( v24 >= 6 )
          goto LABEL_33;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_33:
        if ( (*((_DWORD *)&v21->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v21, v15, SessionId, 0LL);
        _enable();
        goto LABEL_35;
      }
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v25 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      v21->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v25 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)v21, v15, v25);
LABEL_35:
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v13
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v6 = a1;
      v13 = v16 == 0;
      v4 = a3;
      if ( !v13 )
        KeWaitForGate((__int64)&v61, 0x12u);
    }
    v26 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v8 >> 6 == v4 )
      break;
    if ( *(_WORD *)(a2 + 32) > 2u || v26 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
          {
            v54 = v53 < 2u;
            goto LABEL_120;
          }
        }
      }
      goto LABEL_123;
    }
    if ( *(_QWORD *)(v6 + 16) == 1LL )
    {
      MiChangePageAttribute(a2, v4, 1);
      goto LABEL_97;
    }
    *(_BYTE *)(a2 + 34) = v8 | 0x20;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v28);
        }
      }
    }
    __writecr8(v7);
    v59 = MiChangeAwePageAttributes(v6, a2, v4);
    MiLockPageInline(a2);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v13 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
      }
    }
    __writecr8(v7);
    v35 = KeGetCurrentThread();
    v36 = (_QWORD **)(v6 + 56);
    v37 = 0LL;
    --v35->SpecialApcDisable;
    v38 = v6 + 48;
    ExAcquirePushLockExclusiveEx(v38, 0LL);
    v39 = *v36;
    if ( *v36 )
    {
      do
      {
        v40 = (_QWORD *)*v39;
        if ( v39[1] == a2 )
        {
          *v39 = v37;
          v37 = v39;
          *v36 = v40;
        }
        else
        {
          v36 = (_QWORD **)v39;
        }
        v39 = v40;
      }
      while ( v40 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v38);
    v41 = KeGetCurrentThread();
    if ( v38 - qword_140C50630 >= 0x8000000000LL )
      v42 = -1;
    else
      v42 = MmGetSessionIdEx((__int64)v41->ApcState.Process);
    _disable();
    v43 = (__int64)&v41[1].Process;
    v44 = 0;
    while ( (*(_QWORD *)v43 & 0x7FFFFFFFFFFFFFFCLL) != (v38 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v43 + 18)
         || (*(_DWORD *)v43 & 1) != 0
         || *(_DWORD *)(v43 + 8) != v42 )
    {
      ++v44;
      v43 += 96LL;
      if ( v44 >= 6 )
        goto LABEL_80;
    }
    *(_BYTE *)(v43 + 18) = 0;
    if ( !v43 )
    {
LABEL_80:
      if ( (*((_DWORD *)&v41->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v41, v38, v42, 0LL);
      _enable();
      goto LABEL_82;
    }
    if ( *(__int64 *)v43 < 0 )
    {
      *(_BYTE *)v43 |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(v43);
      _disable();
    }
    v47 = *(_DWORD *)(v43 + 88);
    *(_DWORD *)(v43 + 88) = 0;
    *(_BYTE *)(v43 + 17) = 0;
    *(_QWORD *)v43 = 0LL;
    v41->AbEntrySummary |= 1 << *(_BYTE *)(v43 + 16);
    _enable();
    if ( v47 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)v41, v38, v47);
LABEL_82:
    v13 = v35->SpecialApcDisable++ == -1;
    if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery();
    if ( v37 )
    {
      do
      {
        v45 = (_QWORD *)*v37;
        KeSignalGate((_DWORD *)v37 + 4, 1);
        v37 = v45;
      }
      while ( v45 );
    }
    result = (unsigned int)v59;
    if ( v59 < 0 )
      return result;
    v6 = a1;
    v4 = a3;
  }
  if ( v26 > 1 && (*(_DWORD *)(v6 + 8) & 1) != 0
    || (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_115:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && (unsigned __int8)v7 <= 0xFu )
        {
          v54 = v55 < 2u;
LABEL_120:
          if ( !v54 )
          {
            v56 = KeGetCurrentPrcb();
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v58 = v56->SchedulerAssist;
            v13 = (v57 & v58[5]) == 0;
            v58[5] &= v57;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)v56);
          }
        }
      }
    }
LABEL_123:
    result = 3221225496LL;
    goto LABEL_105;
  }
LABEL_97:
  v48 = *(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v48;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v49 = KeGetCurrentIrql();
      if ( v49 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v49 >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v52 = v50->SchedulerAssist;
        v13 = (v51 & v52[5]) == 0;
        v52[5] &= v51;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v50);
      }
    }
  }
  result = 0LL;
LABEL_105:
  __writecr8(v7);
  return result;
}
