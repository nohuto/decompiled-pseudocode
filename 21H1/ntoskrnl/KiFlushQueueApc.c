/*
 * XREFs of KiFlushQueueApc @ 0x140355E80
 * Callers:
 *     KeRundownApcQueues @ 0x140706C0C (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r12
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
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

  v4 = (char)a2;
  if ( (_BYTE)a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v31 = 0;
    while ( 1 )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v9[6];
          v9[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v14[6] - 1;
          v14[6] = v16;
          if ( !v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v31, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * (char)a2 + 152) == a1 + 16LL * (char)a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
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
        KeYieldProcessorEx(&v32, a2, a3, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v10 = (_QWORD *)(16 * v4 + a1 + 152);
  v11 = (_QWORD *)*v10;
  if ( (_QWORD *)*v10 == v10 )
  {
    v11 = 0LL;
  }
  else
  {
    v12 = (_QWORD *)v10[1];
    if ( (_QWORD *)v11[1] != v10 || (_QWORD *)*v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    v13 = v11;
    do
    {
      *((_BYTE *)v13 + 66) = 0;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v11 );
    v10[1] = v10;
    *v10 = v10;
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
        v21 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
