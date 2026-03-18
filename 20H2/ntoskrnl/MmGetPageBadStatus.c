/*
 * XREFs of MmGetPageBadStatus @ 0x14052DD10
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x1404CE67C (HalpPmemErrorDeferredHandler.c)
 *     WheapPersistPageForMemoryError @ 0x1405BA110 (WheapPersistPageForMemoryError.c)
 *     WheapPfaMemoryCheck @ 0x140960B94 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v4 = *a1 >> 12;
  if ( v4 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v4 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
    return 3221225711LL;
  v5 = 48 * v4 - 0x58000000000LL;
  v6 = (unsigned __int8)MiLockPageInline(v5, 0x4000000000000LL, a3, a4);
  if ( MiIsPageOnBadList(v5) )
  {
    v7 = -1073740023;
  }
  else
  {
    v7 = 0;
    if ( (*(_BYTE *)(v5 + 35) & 0x40) != 0 )
      v7 = 259;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v7;
}
