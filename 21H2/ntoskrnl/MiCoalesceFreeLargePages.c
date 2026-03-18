/*
 * XREFs of MiCoalesceFreeLargePages @ 0x140358400
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x1403581E0 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiLargePagePromote @ 0x1402CC9A0 (MiLargePagePromote.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiLargePfnPromoteCandidate @ 0x140358810 (MiLargePfnPromoteCandidate.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1405AEA7C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiChangePageHeatImmediate @ 0x1405B766C (MiChangePageHeatImmediate.c)
 */

char __fastcall MiCoalesceFreeLargePages(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // r11
  unsigned __int64 v12; // r13
  __int64 v13; // r15
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  bool v24; // zf
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // rbp
  unsigned __int64 v28; // rdi
  _QWORD *v29; // r14
  unsigned __int8 v30; // bp
  __int64 v31; // r14
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 i; // rax
  ULONG_PTR v35; // rbx
  $CEA84C04E3712D858E5667A507841A2A *v36; // rax
  struct _KTHREAD *v37; // rcx
  struct _KTHREAD *v38; // rcx
  __int64 v39; // rbx
  unsigned int v40; // edi
  struct _KTHREAD *v41; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  char v51; // [rsp+30h] [rbp-98h]
  unsigned int v53; // [rsp+34h] [rbp-94h]
  __int64 v54; // [rsp+38h] [rbp-90h]
  int v55; // [rsp+40h] [rbp-88h] BYREF
  __int64 v56; // [rsp+48h] [rbp-80h]
  __int64 v57; // [rsp+50h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  __int64 v60; // [rsp+68h] [rbp-60h]
  __int128 v61; // [rsp+70h] [rbp-58h] BYREF

  v3 = a3;
  v56 = a1;
  v57 = a2;
  v5 = MiLargePageSizes[a3];
  v6 = MiLargePageSizes[a3 - 1];
  v7 = a2;
  v60 = 48 * a2;
  v61 = 0LL;
  v8 = 48 * a2 - 0x220000000000LL;
  v54 = v8;
  v51 = 17;
  v9 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * a2) >> 4)) + 2);
  CurrentThread = KeGetCurrentThread();
  v55 = 0;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = a1 + 192;
  ExAcquirePushLockSharedEx(a1 + 192, 0LL);
  v10 = 0;
  v11 = 0x40000000000000LL;
  v12 = v6 / v5;
  if ( v6 / v5 )
  {
    v13 = 48 * v5;
    v14 = (_QWORD *)(v60 - 0x21FFFFFFFFD8LL);
    do
    {
      if ( v7 > qword_140C50840 )
        break;
      if ( (*v14 & 0x40000000000000LL) == 0 )
        break;
      if ( !(unsigned int)MiLargePfnPromoteCandidate(v56, v8, a3) )
        break;
      v15 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4));
      v11 = 0x40000000000000LL;
      if ( v9 != *((_DWORD *)v15 + 2) )
        break;
      ++v10;
      v16 = (unsigned __int64)*(unsigned __int8 *)(v8 + 34) >> 6;
      v8 += v13;
      v7 += v5;
      v14 = (_QWORD *)((char *)v14 + v13);
      ++*((_DWORD *)&v61 + v16);
    }
    while ( v10 < v12 );
    v3 = a3;
  }
  if ( v10 != v12 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    LOBYTE(v36) = KeAbPostRelease(BugCheckParameter2);
    v38 = CurrentThread;
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v24 )
      return (char)v36;
    v36 = &v38->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v36->ApcState.ApcListHead[0].Flink == v36 )
      return (char)v36;
LABEL_44:
    LOBYTE(v36) = KiCheckForKernelApcDelivery();
    return (char)v36;
  }
  v17 = 0;
  v18 = (__int64)&v61;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 1;
  do
  {
    v23 = *(_DWORD *)v18;
    if ( *(_DWORD *)v18 && (_DWORD)v19 )
      v20 = 1;
    if ( (unsigned int)v19 < v23 )
    {
      v19 = v23;
      v22 = v21;
    }
    ++v21;
    v18 += 4LL;
  }
  while ( v21 < 4 );
  v24 = v20 == 0;
  v53 = v22;
  v25 = v54;
  if ( v24 || (v39 = v54, v40 = 0, !v12) )
  {
    v26 = v54;
    if ( v12 )
    {
LABEL_17:
      v27 = 48 * v5;
      v28 = v57;
      v29 = (_QWORD *)(v60 - 0x21FFFFFFFFD8LL);
      while ( 1 )
      {
        if ( v28 > qword_140C50840 || (v11 & *v29) == 0 )
          goto LABEL_25;
        if ( v26 == v25 )
        {
          v51 = MiLockPageInline(v26);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          goto LABEL_25;
        }
        if ( !(unsigned int)MiLargePfnPromoteCandidate(v56, v26, v3) || *(unsigned __int8 *)(v26 + 34) >> 6 != v53 )
          break;
        ++v17;
        v26 += v27;
        v28 += v5;
        v29 = (_QWORD *)((char *)v29 + v27);
        if ( v17 >= v12 )
          goto LABEL_25;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v26 != v25 )
      {
LABEL_25:
        v30 = v51;
        goto LABEL_26;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v30 = v51;
        if ( (unsigned __int8)v51 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v51 + 1));
          v24 = (v45 & SchedulerAssist[5]) == 0;
          v18 = (unsigned int)v45 & SchedulerAssist[5];
          SchedulerAssist[5] = v18;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v25 = v54;
        }
      }
      else
      {
        v30 = v51;
      }
      __writecr8(v30);
    }
    else
    {
      v30 = 17;
    }
LABEL_26:
    if ( v17 == v12 )
    {
      v31 = v57;
      MiLargePagePromote(v57, v3, v18, 0, &v55);
      v25 = v54;
      v32 = 48 * v5;
      v33 = 48 * v5 + v54;
      if ( !v17 )
      {
LABEL_32:
        if ( v55 )
          MiChangePageHeatImmediate(v31, v3 - 1, 0LL);
LABEL_34:
        v35 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v35);
        LOBYTE(v36) = KeAbPostRelease(v35);
        v37 = CurrentThread;
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( !v24 )
          return (char)v36;
        v36 = &v37->152;
        if ( ($CEA84C04E3712D858E5667A507841A2A *)v36->ApcState.ApcListHead[0].Flink == v36 )
          return (char)v36;
        goto LABEL_44;
      }
    }
    else
    {
      if ( !v17 )
        goto LABEL_34;
      v31 = v57;
      v32 = 48 * v5;
      v33 = v25;
    }
    for ( i = v25 + v5 * (48LL * v17 - 48); i != v33; i -= v32 )
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && v30 <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (v30 + 1));
          v24 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(v30);
    goto LABEL_32;
  }
  while ( (unsigned int)MiChangePageAttributeLargeFreeZeroPage(v39, v3, v22, v19) )
  {
    ++v40;
    v39 += 48 * v5;
    v22 = v53;
    if ( v40 >= v12 )
    {
      v25 = v54;
      v11 = 0x40000000000000LL;
      v26 = v54;
      goto LABEL_17;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  LOBYTE(v36) = KeAbPostRelease(BugCheckParameter2);
  v41 = CurrentThread;
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 )
  {
    v36 = &v41->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v36->ApcState.ApcListHead[0].Flink != v36 )
      goto LABEL_44;
  }
  return (char)v36;
}
