/*
 * XREFs of MiTrimSharedPage @ 0x1403206B4
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053C238 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiTrimSection @ 0x14031E730 (MiTrimSection.c)
 *     MiPreventControlAreaDeletion @ 0x1403209B8 (MiPreventControlAreaDeletion.c)
 *     MiDecrementSubsection @ 0x140320E6C (MiDecrementSubsection.c)
 *     MiReferencePfBackedSection @ 0x14032106C (MiReferencePfBackedSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClusterVadFull @ 0x1405503C8 (MiClusterVadFull.c)
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
  int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  _QWORD *v34; // rax
  _QWORD v35[5]; // [rsp+20h] [rbp-30h] BYREF
  int v36; // [rsp+48h] [rbp-8h]
  int v37; // [rsp+4Ch] [rbp-4h]
  _QWORD *v38; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a2;
  v37 = 0;
  v6 = v3 | 0x8000000000000000uLL;
  v38 = 0LL;
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
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v29 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    v21 = (__int64 *)MiReferencePfBackedSection(v6);
    v15 = (__int64)v21;
    if ( v21 )
    {
      v13 = *v21;
      if ( !v11 || *(int *)(v13 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v21) != 1 )
        goto LABEL_18;
      v34 = (_QWORD *)MiDecrementModifiedWriteCount(v13, 0);
      if ( v34 )
        MiReleaseControlAreaWaiters(v34);
    }
    MiLockPageInline(a1, v22, v23, v24);
    return 0LL;
  }
  v13 = MiPreventControlAreaDeletion(a1, 0LL, &BugCheckParameter2, &v38);
  if ( !v13 )
    return 0LL;
  v14 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DD40 && (v14 & 0x10) == 0 )
    v14 &= ~qword_140C4DD40;
  v15 = v14 >> 16;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v29 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
  }
  __writecr8(v4);
  MiReleaseControlAreaWaiters(v38);
LABEL_18:
  v36 = 0;
  v35[0] = v13;
  v35[1] = v6;
  v35[2] = v6;
  v35[3] = v15;
  v35[4] = v15;
  if ( (unsigned int)MiTrimSection((__int64)v35, 1, v12) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection((__int64)v35, 1, v12);
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v16 = (_QWORD *)MiDecrementModifiedWriteCount(v13, 0);
  if ( v16 )
    MiReleaseControlAreaWaiters(v16);
  MiLockPageInline(a1, v17, v18, v19);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    return 2LL;
  return 0LL;
}
