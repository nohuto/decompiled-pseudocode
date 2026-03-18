/*
 * XREFs of MiLockNonPagedPoolPte @ 0x14022E210
 * Callers:
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLockNonPagedPoolPte(ULONG_PTR BugCheckParameter3, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  int v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  while ( 1 )
  {
    v15 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    if ( (v15 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x5307uLL, (__int64)(BugCheckParameter3 << 25) >> 16, BugCheckParameter3, 0LL);
    v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v15) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    *a2 = CurrentIrql;
    v6 = MI_READ_PTE_LOCK_FREE(BugCheckParameter3);
    if ( v15 == v6 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return v4;
}
