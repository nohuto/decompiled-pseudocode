/*
 * XREFs of PfSnNameRemove @ 0x1402CD6CC
 * Callers:
 *     PfSnNameRemoveAll @ 0x140698990 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // al
  _RTL_RB_TREE *v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE **v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r11
  _DWORD *v21; // r9
  int v22; // edx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = (_RTL_RB_TREE *)(a1 + 520);
  v8 = v6;
  v9 = *(_QWORD *)(a1 + 520);
  if ( (*(_BYTE *)(a1 + 528) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= (unsigned __int64)v7;
    else
      v9 = 0LL;
  }
  while ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) <= (unsigned __int64)a2 )
    {
      if ( *(_QWORD *)(v9 + 24) >= (unsigned __int64)a2 )
      {
        RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)v9);
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v18 = (v17 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v17;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
        v12 = (_RTL_BALANCED_NODE **)(a1 + 488);
        v13 = 0LL;
        if ( (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) != 0 )
        {
          do
          {
            if ( *v12 == a2 )
              *v12 = 0LL;
            ++v12;
            ++v13;
          }
          while ( v13 < (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) );
        }
        v5 = 1;
        ExFreePoolWithTag((PVOID)v9, 0);
        return v5;
      }
      v10 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v18 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v8);
  return v5;
}
