/*
 * XREFs of MiTrimSharedPage @ 0x1402CDD9C
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x14028170C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 *     MiPreventControlAreaDeletion @ 0x1402D01FC (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x1402D02E8 (MiDecrementSubsection.c)
 *     MiReferencePfBackedSection @ 0x1402D03FC (MiReferencePfBackedSection.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x14054FD78 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r15
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r13d
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v31; // eax
  _QWORD *v32; // rax
  _QWORD v33[5]; // [rsp+20h] [rbp-30h] BYREF
  int v34; // [rsp+48h] [rbp-8h]
  int v35; // [rsp+4Ch] [rbp-4h]
  _QWORD *v36; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  v35 = 0;
  v6 = v3 | 0x8000000000000000uLL;
  v36 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = (a3 >> 18) & 1 | 2;
  if ( (a3 & 0x80000) == 0 )
    v7 = (a3 >> 18) & 1;
  v8 = v7 | 4;
  if ( (a3 & 0x20000) == 0 )
    v8 = v7;
  v9 = v8 | 8;
  if ( (a3 & 0x10000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x10;
  v11 = a3 & 0x800000;
  if ( (a3 & 0x800000) == 0 )
    v10 = v9;
  v12 = v10 | 0x40;
  if ( (a3 & 0x3000000) == 0 )
    v12 = v10;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v27 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v20 = (__int64 *)MiReferencePfBackedSection(v6);
    v15 = (__int64)v20;
    if ( v20 )
    {
      v13 = *v20;
      if ( !v11 || *(int *)(v13 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v20) != 1 )
        goto LABEL_18;
      v32 = (_QWORD *)MiDecrementModifiedWriteCount(v13, 0);
      if ( v32 )
        MiReleaseControlAreaWaiters(v32);
    }
    MiLockPageInline(a1, v21, v22);
    return 0LL;
  }
  v13 = MiPreventControlAreaDeletion(a1, 0LL, &BugCheckParameter2, &v36);
  if ( !v13 )
    return 0LL;
  v14 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
    v14 &= ~qword_140C4DE80;
  v15 = v14 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v27 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(v4);
  MiReleaseControlAreaWaiters(v36);
LABEL_18:
  v34 = 0;
  v33[0] = v13;
  v33[1] = v6;
  v33[2] = v6;
  v33[3] = v15;
  v33[4] = v15;
  if ( (unsigned int)MiTrimSection(v33, 1LL, v12) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v33, 1LL, v12);
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v16 = (_QWORD *)MiDecrementModifiedWriteCount(v13, 0);
  if ( v16 )
    MiReleaseControlAreaWaiters(v16);
  MiLockPageInline(a1, v17, v18);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    return 2LL;
  return 0LL;
}
