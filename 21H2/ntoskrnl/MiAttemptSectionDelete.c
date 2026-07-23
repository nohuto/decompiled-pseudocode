/*
 * XREFs of MiAttemptSectionDelete @ 0x1402374A4
 * Callers:
 *     MmFlushImageSection @ 0x140237290 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x140237400 (MiForceSectionClosed.c)
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiCleanSection @ 0x14037EDDC (MiCleanSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r11
  _DWORD *v13; // r9
  int v14; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+28h] [rbp-28h]
  int v21; // [rsp+2Ch] [rbp-24h]
  __int16 v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+32h] [rbp-1Eh]
  char v24; // [rsp+33h] [rbp-1Dh]
  int v25; // [rsp+34h] [rbp-1Ch]
  _QWORD v26[3]; // [rsp+38h] [rbp-18h] BYREF

  v21 = 0;
  v4 = *(_QWORD *)(a1 + 24) == 0LL;
  v6 = a2;
  v24 = 0;
  if ( !v4 || *(_QWORD *)(a1 + 40) || (v8 = *(_DWORD *)(a1 + 56), (v8 & 2) != 0) )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(a1 + 56) |= 0x40000u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v4 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    return 0;
  }
  else if ( (v8 & 1) != 0 )
  {
    v25 = 0;
    v26[1] = v26;
    v26[0] = v26;
    v19 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v19;
    v20 = 1;
    v22 = 263;
    v23 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = v12->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v4 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
    }
    __writecr8(v6);
    KeWaitForGate((__int64)&v22, 0x13u);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment();
    LOBYTE(v9) = v6;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v10) = (a3 & 4) != 0;
    return MiCleanSection(a1, v9, v10);
  }
}
