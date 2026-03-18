/*
 * XREFs of MiLocateSubsectionNode @ 0x14024A460
 * Callers:
 *     MiComputeDataFlushRange @ 0x140248960 (MiComputeDataFlushRange.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiReferenceDataSubsections @ 0x1402648D8 (MiReferenceDataSubsections.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiAdvanceVadView @ 0x14034F3F8 (MiAdvanceVadView.c)
 *     MiDereferenceDataSubsections @ 0x14054F988 (MiDereferenceDataSubsections.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

_QWORD *__fastcall MiLocateSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  KIRQL v6; // bp
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  _QWORD *v13; // r8
  unsigned __int16 v14; // cx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  int v22; // edx
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r11
  _DWORD *v26; // r9
  int v27; // edx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  _DWORD v32[36]; // [rsp+20h] [rbp-98h] BYREF

  memset(v32, 0, sizeof(v32));
  if ( a2 >= 0x3FFFFFFFFFF000LL )
    return 0LL;
  if ( a3 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)(a1 + 288);
  v8 = a2 >> 12;
  v9 = *(unsigned int *)(v7 + 36) | ((unsigned __int64)(*(_WORD *)(v7 + 32) & 0xFFC0) << 26);
  v10 = v9 + *(unsigned int *)(v7 + 40);
  if ( *(_WORD *)(v7 + 34) < 0x10u )
    --v10;
  v11 = HIDWORD(v8);
  if ( v8 >= v9 )
  {
    v11 = HIDWORD(v8);
    if ( v8 <= v10 )
    {
      if ( v6 != 17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v23 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
      }
      return (_QWORD *)v7;
    }
  }
  v13 = *(_QWORD **)(a1 + 272);
  v14 = v32[8] & 0x3F | ((_WORD)v11 << 6);
  v32[9] = v8;
  LOWORD(v32[8]) = v14;
  if ( !v13 )
  {
LABEL_14:
    if ( v6 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && v6 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = v29->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v23 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
      }
      __writecr8(v6);
    }
    return 0LL;
  }
  v15 = ((unsigned __int64)v14 << 26) ^ (unsigned int)v8 ^ (v14 << 26);
  while ( 1 )
  {
    v16 = *((unsigned int *)v13 - 5) | ((unsigned __int64)(*(_WORD *)(v13 - 3) & 0xFFC0) << 26);
    v17 = v16 + *((unsigned int *)v13 - 4);
    if ( *((_WORD *)v13 - 11) < 0x10u )
      --v17;
    if ( v15 > v17 )
    {
      v13 = (_QWORD *)v13[1];
      goto LABEL_25;
    }
    if ( v15 >= v16 )
      break;
    v13 = (_QWORD *)*v13;
LABEL_25:
    if ( !v13 )
      goto LABEL_14;
  }
  v18 = v13 - 7;
  *(_QWORD *)(a1 + 288) = v13 - 7;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && v6 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(v6);
  }
  return v18;
}
