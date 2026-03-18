/*
 * XREFs of KeInitializeClockOtherProcessors @ 0x140B50F64
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KiSetPendingTick @ 0x14022F96C (KiSetPendingTick.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeInitializeClockOtherProcessors(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rcx
  int v5; // r9d
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x3FFC;
  }
  off_140C01ED8[0]();
  KiSetPendingTick(0);
  off_140C01ED0[0]();
  LOBYTE(v4) = 1;
  ((void (__fastcall *)(__int64))off_140C01EC8)(v4);
  ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_140C01EE0[0])(0LL, (unsigned int)KeMaximumIncrement, &v12);
  KiSetPendingTick(1);
  v5 = v12;
  *(_DWORD *)(a1 + 37004) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 37000) = v5;
  *(_BYTE *)(a1 + 37128) = 1;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
