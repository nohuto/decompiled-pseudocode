/*
 * XREFs of KiFlushQueueApc @ 0x1402668F8
 * Callers:
 *     KeRundownApcQueues @ 0x14063FDC4 (KeRundownApcQueues.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  __int64 v2; // r12
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  _DWORD *v21; // r9
  struct _KPRCB *v22; // rbx
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rax
  _DWORD *v29; // r9
  int v30; // edx
  int v31; // [rsp+58h] [rbp+10h] BYREF
  int v32; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v31 = 0;
    while ( 1 )
    {
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v7[6];
          v7[6] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v12[6] - 1;
          v12[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v31);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v21 = KeGetCurrentPrcb()->SchedulerAssist;
      v21[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v22 = KeGetCurrentPrcb();
    v32 = 0;
    while ( 1 )
    {
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v24 = v23[6];
          v23[6] = v24 + 1;
          if ( v24 == -1 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v25 = v22->SchedulerAssist;
      if ( v25 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v26 = v25[6] - 1;
          v25[6] = v26;
          if ( !v26 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      do
        KeYieldProcessorEx(&v32);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v8 = (_QWORD *)(16 * v2 + a1 + 152);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
    v9 = 0LL;
  }
  else
  {
    v10 = (_QWORD *)v8[1];
    if ( (_QWORD *)v9[1] != v8 || (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    v11 = v9;
    do
    {
      *((_BYTE *)v11 + 66) = 0;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != v9 );
    v8[1] = v8;
    *v8 = v8;
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
