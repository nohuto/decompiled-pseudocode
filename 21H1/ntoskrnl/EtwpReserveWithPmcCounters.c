/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x1405A3908
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x1403AA880 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

unsigned __int64 __fastcall EtwpReserveWithPmcCounters(
        __int64 a1,
        __int16 a2,
        int a3,
        __int64 a4,
        LARGE_INTEGER *a5,
        int a6)
{
  int v8; // r15d
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v12; // cl
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+70h] [rbp+8h]

  v25 = *(_QWORD *)(a1 + 1000);
  v8 = *(_DWORD *)(v25 + 20);
  v9 = 8 * (unsigned __int8)v8 + 16;
  v10 = v9 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (v12 + 1)) & 4;
      }
    }
  }
  v14 = EtwpReserveTraceBuffer((unsigned int *)a1, v10, a4, a5, a6);
  v15 = v14;
  if ( v14 )
  {
    *(LARGE_INTEGER *)(v14 + 8) = *a5;
    *(_WORD *)(v14 + 4) = v10;
    *(_WORD *)(v14 + 6) = a2;
    *(_DWORD *)v14 = (unsigned __int8)a6 | ((unsigned __int8)v8 << 8) | 0xC0110000;
    v21 = *(_QWORD *)(v25 + 8LL * KeGetPcr()->Prcb.Number + 24);
    if ( v21 )
      ((void (__fastcall *)(__int64, unsigned __int64))off_140C007D8[0])(v21, v14 + 16);
    else
      memset((void *)(v14 + 16), 0, 8LL * (unsigned __int8)v8);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v19 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    return v15 + v9;
  }
  else
  {
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
