/*
 * XREFs of MiTrimSection @ 0x1402FA430
 * Callers:
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     MmTrimSection @ 0x1402FA398 (MmTrimSection.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsection @ 0x1402F9150 (MiDecrementSubsection.c)
 *     MiAnyProtosAreMapped @ 0x1402F9660 (MiAnyProtosAreMapped.c)
 *     MiViewMayContainPage @ 0x1402FA6CC (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1402FB614 (MiUnlockControlAreaFileObjectShared.c)
 *     MiReferenceSubsection @ 0x1403202AC (MiReferenceSubsection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTrimSection(_QWORD *a1, int a2, int a3)
{
  _QWORD *v3; // r13
  __int64 v4; // rcx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v10; // r15
  KIRQL v11; // al
  volatile LONG *v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r15d
  _QWORD *v16; // rdi
  _QWORD *i; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rbp
  _QWORD *MayContainPage; // rax
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  int v25; // eax
  _DWORD *v26; // r8
  bool v27; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  int v38; // [rsp+40h] [rbp-68h]
  __int64 v39; // [rsp+48h] [rbp-60h]
  _QWORD *v40; // [rsp+50h] [rbp-58h]
  int v43; // [rsp+C0h] [rbp+18h]
  _QWORD *v44; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = a1[1];
  v39 = v4;
  v43 = a3 & 1;
  v6 = v3[3];
  v36 = v6;
  v7 = *(_QWORD *)v6;
  if ( (a3 & 1) != 0 && (!*(_QWORD *)(v7 + 64) || (*(_DWORD *)(v7 + 56) & 0x20) != 0) )
    return 3221225608LL;
  v38 = MiStartingOffset(v6, v4, 0xFFFFFFFFLL);
  v8 = MiStartingOffset(v3[4], v3[2], 0xFFFFFFFFLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  v37 = v8 + 4096;
  v44 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v7 + 104, 0LL);
  v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
  v12 = (volatile LONG *)(v7 + 72);
  v13 = v11;
  if ( *(_QWORD *)(v7 + 40) )
  {
    v40 = *(_QWORD **)(v7 + 8);
    ExReleaseSpinLockSharedFromDpcLevel(v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v27 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 && *(_QWORD *)(v7 + 64) )
    {
      v14 = v3[4];
      while ( 1 )
      {
        v15 = 1;
        if ( v6 == v3[3] || v6 == v14 )
          goto LABEL_9;
        v22 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
        if ( *(_DWORD *)(v6 + 104) && (int)MiReferenceSubsection(v6, 0LL) > 1 )
          v15 = 2;
        else
          v15 = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
              v27 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v22);
        if ( v15 )
        {
LABEL_9:
          if ( v43 || (a3 & 0x20) != 0 )
            v15 = (unsigned int)MiAnyProtosAreMapped(v6, v3) != 0 ? v15 : 0;
          if ( v15 )
          {
            v16 = *(_QWORD **)(v6 + 80);
            if ( v16 != (_QWORD *)(v6 + 80) )
            {
              v20 = v44;
              do
              {
                MayContainPage = (_QWORD *)MiViewMayContainPage(v7, a3, (_DWORD)v16, v38, v37);
                if ( MayContainPage )
                {
                  *MayContainPage = v20;
                  v20 = MayContainPage;
                }
                v16 = (_QWORD *)*v16;
              }
              while ( v16 != (_QWORD *)(v6 + 80) );
              v6 = v36;
              v3 = a1;
              v44 = v20;
            }
            if ( v15 == 2 )
              MiDecrementSubsection((__int64 *)v6);
          }
        }
        v14 = v3[4];
        if ( v6 == v14 )
          break;
        v6 = *(_QWORD *)(v6 + 16);
        v36 = v6;
      }
      v10 = v44;
    }
    for ( i = v40; i != (_QWORD *)(v7 + 8); i = (_QWORD *)*i )
    {
      v19 = (_QWORD *)MiViewMayContainPage(v7, a3, (_DWORD)i, v38, v37);
      if ( v19 )
      {
        *v19 = v10;
        v10 = v19;
      }
    }
    MiUnlockControlAreaFileObjectShared(v7);
    return MiTrimSharedPageFromViews((_DWORD)v10, a2, a3, v7, v39);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v26 = v24->SchedulerAssist;
          v27 = (v25 & v26[5]) == 0;
          v26[5] &= v25;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v13);
    MiUnlockControlAreaFileObjectShared(v7);
    return 0LL;
  }
}
