/*
 * XREFs of KeUpdateThreadTag @ 0x14036C100
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiIpiSendPacket @ 0x140268DE8 (KiIpiSendPacket.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x1402D5AB0 (KiStartThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeUpdateThreadTag(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v8; // rcx
  struct _KPRCB *v9; // rbx
  char v10; // al
  __int64 result; // rax
  struct _KPRCB *v12; // rcx
  char v13; // al
  int v14; // ebx
  unsigned __int8 v15; // cl
  _DWORD *v16; // r9
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  struct _KPRCB *v26; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int64 *v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[44]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+148h] [rbp+48h] BYREF

  v29 = a2;
  memset(v28, 0, 0xA8uLL);
  v26 = 0LL;
  v27 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = (-1LL << (CurrentIrql + 1)) & 4;
    v4 = (unsigned int)v3 | SchedulerAssist[5];
    SchedulerAssist[5] = v4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = 0;
  while ( 1 )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v8[6];
        v8[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v17[6] - 1;
        v17[6] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v25, v3, v4, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(unsigned __int8 *)(a1 + 124) != v29 )
  {
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    {
      v9 = KeGetCurrentPrcb();
      v26 = v9;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v9, a1, 0LL);
      v10 = v29;
      if ( v29 )
        _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
      *(_BYTE *)(a1 + 124) = v10;
      KiStartThreadCycleAccumulation((__int64)v9, a1, 0);
      _enable();
    }
    else
    {
      if ( (unsigned __int8)KiAcquireThreadStateLock(a1, (__int64 *)&v26, (volatile signed __int32 **)&v27) == 2
        || *(_BYTE *)(a1 + 113) )
      {
        v14 = *(_DWORD *)(a1 + 536);
        v28[0] = 1310721;
        memset(&v28[1], 0, 0xA4uLL);
        KeAddProcessorAffinityEx(v28, v14 & 0x7FFFFFFF);
        v15 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
        {
          v16 = KeGetCurrentPrcb()->SchedulerAssist;
          v16[5] |= (-1 << (v15 + 1)) & 0x1FFC;
        }
        KiIpiSendPacket(0, (int)v28, (__int64)KiIpiUpdateThreadTag, a1, (__int64)&v29, 0LL);
        v12 = KeGetCurrentPrcb();
        while ( v12->PacketBarrier )
          _mm_pause();
      }
      else
      {
        v13 = v29;
        if ( v29 )
          _interlockedbittestandset((volatile signed __int32 *)a1, 0x14u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)a1, 0x14u);
        *(_BYTE *)(a1 + 124) = v13;
      }
      KiReleaseThreadStateLock((__int64)v12, (__int64)v26, v27);
    }
  }
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v24 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
