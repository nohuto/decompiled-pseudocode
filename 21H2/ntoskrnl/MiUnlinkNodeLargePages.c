/*
 * XREFs of MiUnlinkNodeLargePages @ 0x1403F70E8
 * Callers:
 *     MiGetHugePageToZero @ 0x1402D4500 (MiGetHugePageToZero.c)
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetFreeZeroLargePages @ 0x1403F6914 (MiGetFreeZeroLargePages.c)
 *     MiGetPagesToZero @ 0x14054FF8C (MiGetPagesToZero.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiBeginPageAccessor @ 0x14031FB98 (MiBeginPageAccessor.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlinkNodeLargePages(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        signed int a6,
        __int64 a7,
        char a8,
        unsigned __int64 a9)
{
  __int64 v9; // r15
  char v10; // bl
  _QWORD *v11; // r15
  _QWORD *v12; // r9
  _BOOL8 v13; // r11
  unsigned __int8 v14; // si
  unsigned int v15; // r10d
  __int64 v16; // r13
  int v17; // edi
  unsigned int v18; // ecx
  __int64 *v19; // rdx
  __int64 v20; // rax
  unsigned __int8 *v21; // rdx
  unsigned __int8 *v22; // r8
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // r8
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  _DWORD *v34; // r9
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // r10d
  __int64 v38; // r12
  __int64 *v39; // r9
  __int64 v40; // rdi
  unsigned int v41; // r14d
  __int64 v42; // r15
  __int64 v43; // r11
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // r10d
  unsigned int v47; // r9d
  unsigned int v48; // r8d
  __int64 v49; // r12
  __int64 v50; // rdx
  int v51; // r13d
  __int64 *v52; // r14
  __int64 v53; // rcx
  BOOL v54; // eax
  unsigned int v55; // edx
  int v56; // eax
  __int64 v57; // rdi
  __int64 v58; // rdx
  volatile signed __int64 *v59; // r15
  signed __int8 v60; // cl
  BOOL v61; // eax
  __int64 **v62; // rax
  _QWORD *v63; // rax
  unsigned __int64 v64; // rcx
  char v65; // al
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rdi
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  _DWORD *v74; // r8
  int v75; // eax
  __int64 v76; // rsi
  __int64 v77; // r14
  _QWORD *v78; // rbx
  _QWORD *v79; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v84; // eax
  BOOL v85; // [rsp+38h] [rbp-B1h]
  unsigned int v86; // [rsp+3Ch] [rbp-ADh]
  unsigned int v87; // [rsp+40h] [rbp-A9h]
  _QWORD *v88; // [rsp+48h] [rbp-A1h]
  __int64 v89; // [rsp+50h] [rbp-99h]
  int v90; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v91; // [rsp+5Ch] [rbp-8Dh]
  __int64 v92; // [rsp+60h] [rbp-89h] BYREF
  __int64 v93; // [rsp+68h] [rbp-81h]
  __int64 v94; // [rsp+70h] [rbp-79h]
  __int64 v95; // [rsp+78h] [rbp-71h]
  __int64 v96; // [rsp+80h] [rbp-69h]
  _QWORD *v97; // [rsp+88h] [rbp-61h]
  unsigned __int64 v98; // [rsp+90h] [rbp-59h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-51h] BYREF
  __int64 v100; // [rsp+B0h] [rbp-39h] BYREF
  _DWORD v101[2]; // [rsp+B8h] [rbp-31h] BYREF
  _QWORD v102[2]; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v103; // [rsp+D0h] [rbp-19h]
  __int64 v104; // [rsp+D8h] [rbp-11h]
  __int64 v105; // [rsp+E0h] [rbp-9h]
  char v109; // [rsp+150h] [rbp+67h] BYREF
  char v110; // [rsp+151h] [rbp+68h] BYREF

  v9 = *(_QWORD *)(a1 + 16);
  v10 = a8;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = (_QWORD *)(4544LL * a4 + v9);
  v109 = 0;
  v103 = 4544LL * a4;
  v97 = v11;
  if ( !v11[522] && (MiFlags & 0x30) != 0 )
    return 0LL;
  v12 = &v11[134 * a2];
  v105 = MiLargePageSizes[a2];
  v91 = dword_140C4DFC0[a2];
  v88 = v12;
  if ( (a8 & 4) != 0 )
    v92 = 0x100000000LL;
  else
    v92 = 1LL;
  v13 = (a8 & 1) == 0;
  v93 = v13;
  v14 = 17;
  v94 = 0LL;
  v15 = ((a8 & 2) != 0) + 1;
  v86 = v15;
LABEL_7:
  v16 = a6;
  v17 = 0;
  while ( 1 )
  {
    v18 = 0;
    v19 = &v92;
    do
    {
      v20 = *(int *)v19;
      if ( v12[v20 + 2] || v13 && v12[v20 + 4] )
        break;
      ++v18;
      v19 = (__int64 *)((char *)v19 + 4);
    }
    while ( v18 < v15 );
    if ( v18 != v15 )
      break;
    if ( v17 == 1 )
    {
      if ( !*((_DWORD *)v11 + 1071) )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v14 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v84 = ~(unsigned __int16)(-1LL << (v14 + 1));
              v27 = (v84 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v84;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v14);
        return 0LL;
      }
      if ( (v10 & 0x10) != 0 )
      {
        v101[1] = 0;
        v102[1] = v102;
        v102[0] = v102;
        v100 = v11[536];
        v11[536] = &v100;
        v101[0] = 393479;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v23 = KeGetCurrentIrql();
            if ( v23 <= 0xFu && v14 <= 0xFu && v23 >= 2u )
            {
              v24 = KeGetCurrentPrcb();
              v25 = v24->SchedulerAssist;
              v26 = ~(unsigned __int16)(-1LL << (v14 + 1));
              v27 = (v26 & v25[5]) == 0;
              v25[5] &= v26;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick((__int64)v24);
            }
          }
        }
        __writecr8(v14);
        KeWaitForGate((__int64)v101, 0x12u);
LABEL_41:
        v17 = 0;
        goto LABEL_48;
      }
      v90 = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        v30 = 2LL;
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && v14 <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v28 = -1LL << (v14 + 1);
            v29 = (__int64)v32->SchedulerAssist;
            v33 = ~(unsigned __int16)v28;
            v27 = (v33 & *(_DWORD *)(v29 + 20)) == 0;
            *(_DWORD *)(v29 + 20) &= v33;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v32);
            goto LABEL_35;
          }
        }
      }
      else
      {
LABEL_35:
        v30 = 2LL;
      }
      __writecr8(v14);
      if ( a9 || v14 != 2 )
        return 0LL;
      v90 = 0;
      while ( *((_DWORD *)v11 + 1071) )
        KeYieldProcessorEx(&v90, v28, v30, v29);
      goto LABEL_41;
    }
    if ( (v10 & 0x10) == 0 )
      return 0LL;
LABEL_43:
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v17 = 1;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 <= 0xFu )
    {
      v34 = KeGetCurrentPrcb()->SchedulerAssist;
      v34[5] |= ~((unsigned __int8)(1LL << (v14 + 1)) - 1) & 4;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v11 + 541, &LockHandle);
LABEL_48:
    v12 = v88;
    v15 = v86;
    v13 = v93;
  }
  if ( !v17 )
    goto LABEL_43;
  if ( a5 == 4 )
  {
    v21 = (unsigned __int8 *)v11 + 4317;
    v22 = (unsigned __int8 *)v11 + (unsigned int)MmNumberOfChannels + 4317;
  }
  else
  {
    v109 = a5;
    v21 = (unsigned __int8 *)&v109;
    v22 = (unsigned __int8 *)&v110;
  }
LABEL_50:
  v35 = *v21;
  v36 = 0LL;
  v87 = v35;
  v89 = 0LL;
LABEL_51:
  v37 = 0;
  v38 = v35;
  v39 = &v92;
LABEL_52:
  v40 = *(int *)v39;
  v41 = 0;
  v95 = v16;
  v42 = v38 + 4 * (v40 + 2 * v36);
  while ( 1 )
  {
    v43 = v88[4 * v42 + 70 + v16];
    if ( v88[4 * v42 + 6 + v16] )
      break;
    v44 = v16;
    v45 = v16 + 1;
    v16 = 0LL;
    if ( v44 != 3 )
      v16 = v45;
    ++v41;
    v95 = v16;
    if ( v41 > 3 )
    {
      v36 = v89;
      ++v37;
      v39 = (__int64 *)((char *)v39 + 4);
      v95 = v16;
      v16 = a6;
      if ( v37 < v86 )
        goto LABEL_52;
      v35 = v87;
      v16 = a6;
      v36 = v89 + 1;
      v89 = v36;
      if ( v36 <= v93 )
        goto LABEL_51;
      v16 = a6;
      ++v21;
      v89 = v36;
      if ( v21 != v22 )
        goto LABEL_50;
      break;
    }
  }
  v46 = a2;
  v47 = v91;
  v48 = v87;
  v49 = v95;
  v50 = *(_DWORD *)(a7 + 4LL * a2) % v91;
  v51 = v50;
  v104 = v40;
  v52 = (__int64 *)(v43 + 24 * v50);
  v53 = v95 + 4 * (v87 + 4 * (v40 + 2 * v89));
  v96 = v53;
  v54 = a9 == 0;
LABEL_61:
  v85 = v54;
  while ( 1 )
  {
    v55 = 0;
    if ( v47 )
    {
      do
      {
        if ( (__int64 *)*v52 != v52 )
        {
          if ( v85 || (*(_BYTE *)(v52[1] + 34) & 8) == 0 )
            break;
          v53 = v96;
        }
        v56 = v51 + 1;
        if ( v51 + 1 == v47 )
          v52 = (__int64 *)v88[v53 + 70];
        else
          v52 += 3;
        v51 = 0;
        ++v55;
        if ( v56 != v47 )
          v51 = v56;
      }
      while ( v55 < v47 );
      v10 = a8;
      v49 = v95;
      v54 = v85;
      v53 = v96;
    }
    if ( v55 == v47 )
    {
      if ( v54 )
        goto LABEL_111;
      v54 = 1;
      goto LABEL_61;
    }
    v57 = v52[1];
    v58 = v94;
    v59 = (volatile signed __int64 *)(v57 + 24);
    v60 = _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL);
    if ( v58 )
    {
      if ( v60 )
        goto LABEL_100;
      v61 = 1;
    }
    else
    {
      v61 = v60 == 0;
    }
    if ( !v61 )
    {
LABEL_100:
      if ( v58 )
        goto LABEL_111;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && v14 <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v68 = v67->SchedulerAssist;
            v69 = ~(unsigned __int16)(-1LL << (v14 + 1));
            v27 = (v69 & v68[5]) == 0;
            v68[5] &= v69;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v67);
          }
        }
      }
      __writecr8(v14);
      v11 = v97;
      v12 = v88;
      v15 = v86;
      v13 = v93;
      goto LABEL_7;
    }
    if ( a9 )
    {
      v57 = v52[1];
      v62 = *(__int64 ***)(v57 + 8);
      if ( *(__int64 **)v57 != v52
        || *v62 != (__int64 *)v57
        || (v52[1] = (__int64)v62, *v62 = v52, v63 = (_QWORD *)*v52, *(__int64 **)(*v52 + 8) != v52) )
      {
        __fastfail(3u);
      }
      v64 = a9;
      *(_QWORD *)v57 = v63;
      *(_QWORD *)(v57 + 8) = v52;
      v63[1] = v57;
      *v52 = v57;
      if ( !(unsigned int)MiBeginPageAccessor(v64, v57) )
LABEL_85:
        v57 = 0LL;
    }
    else
    {
      if ( !(unsigned int)MiUnlinkNodeLargePageHelper(v97, v57, v46, v48, v10) )
        goto LABEL_85;
      if ( (v10 & 0x20) != 0 )
        ++*(_DWORD *)(v103 + *(_QWORD *)(a1 + 16) + 4284);
      *(_QWORD *)v57 = v94;
    }
    if ( !v57 )
      break;
    ++v51;
    v46 = a2;
    v65 = a3 - 1;
    v27 = a3 == 1;
    v94 = v57;
    --a3;
    *(_DWORD *)(a7 + 4LL * a2) = v51;
    if ( v27 )
      goto LABEL_111;
    if ( (v65 & 0xF) == 0 )
    {
      if ( KeShouldYieldProcessor() )
        goto LABEL_111;
      v46 = a2;
    }
    v47 = v91;
    if ( v51 == v91 )
    {
      v51 = 0;
      v48 = v87;
      v52 = (__int64 *)v88[32 * v89 + 70 + 16 * v104 + 4 * v87 + v49];
      v54 = v85;
      v53 = v96;
    }
    else
    {
      v54 = v85;
      v52 += 3;
      v53 = v96;
      v48 = v87;
    }
  }
  _InterlockedAnd64(v59, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_111:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v70 = v94;
  if ( !v94 )
  {
LABEL_117:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v72 = KeGetCurrentIrql();
        if ( v72 <= 0xFu && v14 <= 0xFu && v72 >= 2u )
        {
          v73 = KeGetCurrentPrcb();
          v74 = v73->SchedulerAssist;
          v75 = ~(unsigned __int16)(-1LL << (v14 + 1));
          v27 = (v75 & v74[5]) == 0;
          v74[5] &= v75;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)v73);
        }
      }
    }
    __writecr8(v14);
    goto LABEL_125;
  }
  while ( 2 )
  {
    if ( a9 )
    {
      v71 = 0LL;
      goto LABEL_114;
    }
    v71 = *(_QWORD *)v70;
    if ( *(_QWORD *)v70 )
      _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
LABEL_114:
      MiUnlockPage(v70, 2u);
    v70 = v71;
    if ( v71 )
      continue;
    break;
  }
  v10 = a8;
  if ( (a8 & 0x20) == 0 )
    goto LABEL_117;
LABEL_125:
  v76 = v94;
  if ( v94 && (v10 & 0x40) == 0 && a6 != *(unsigned __int8 *)(v94 + 34) >> 6 )
  {
    v77 = v105;
    v78 = (_QWORD *)v94;
    do
    {
      if ( a9 )
        v79 = 0LL;
      else
        v79 = (_QWORD *)*v78;
      MiChangePageAttributeContiguous((__int64)(v78 + 0xB000000000LL) / 48, v77, a6);
      v98 = v78[2];
      MiSetOriginalPtePfnFromFreeList(&v98);
      v78[2] = v98;
      v78 = v79;
    }
    while ( v79 );
  }
  return v76;
}
