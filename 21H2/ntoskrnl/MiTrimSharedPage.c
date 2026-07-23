/*
 * XREFs of MiTrimSharedPage @ 0x1402F9758
 * Callers:
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541948 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiDecrementSubsection @ 0x1402F9150 (MiDecrementSubsection.c)
 *     MiPreventControlAreaDeletion @ 0x1402F9478 (MiPreventControlAreaDeletion.c)
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140362158 (MiDecrementModifiedWriteCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x140555AA8 (MiClusterVadFull.c)
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
  __int64 v16; // rax
  __int64 *v18; // rax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  __int64 v28; // rax
  _QWORD v29[5]; // [rsp+20h] [rbp-30h] BYREF
  int v30; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+4Ch] [rbp-4h]
  __int64 v32; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  v31 = 0;
  v6 = v3 | 0x8000000000000000uLL;
  v32 = 0LL;
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
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v23 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v18 = (__int64 *)MiReferencePfBackedSection(v6);
    v15 = (__int64)v18;
    if ( v18 )
    {
      v13 = *v18;
      if ( !v11 || *(int *)(v13 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v18) != 1 )
        goto LABEL_18;
      v28 = MiDecrementModifiedWriteCount(v13, 0LL);
      if ( v28 )
        MiReleaseControlAreaWaiters(v28);
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  v13 = MiPreventControlAreaDeletion(a1, 0, (__int64 *)&BugCheckParameter2, &v32);
  if ( !v13 )
    return 0LL;
  v14 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF80 && (v14 & 0x10) == 0 )
    v14 &= ~qword_140C4DF80;
  v15 = v14 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v4);
  MiReleaseControlAreaWaiters(v32);
LABEL_18:
  v30 = 0;
  v29[0] = v13;
  v29[1] = v6;
  v29[2] = v6;
  v29[3] = v15;
  v29[4] = v15;
  if ( (unsigned int)MiTrimSection(v29, 1LL, v12) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v29, 1LL, v12);
  if ( BugCheckParameter2 )
    MiDecrementSubsection((__int64 *)BugCheckParameter2);
  v16 = MiDecrementModifiedWriteCount(v13, 0LL);
  if ( v16 )
    MiReleaseControlAreaWaiters(v16);
  MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    return 2LL;
  return 0LL;
}
