/*
 * XREFs of HalpIommuFlushDmaDomain @ 0x1404C96C8
 * Callers:
 *     HalpIommuDomainUnmapLogicalRange @ 0x1404C9574 (HalpIommuDomainUnmapLogicalRange.c)
 *     IommuMapIdentityRange @ 0x1404DAA10 (IommuMapIdentityRange.c)
 *     IommuUnmapIdentityRange @ 0x1404DAEA0 (IommuUnmapIdentityRange.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIommuFlushDomainTB @ 0x1404CC09C (HalpIommuFlushDomainTB.c)
 */

char __fastcall HalpIommuFlushDmaDomain(_QWORD *a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int8 v4; // di
  unsigned __int8 CurrentIrql; // bp
  _QWORD *i; // rsi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = &retaddr;
  v14 = a2;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
  {
    LOBYTE(v2) = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    v4 = (unsigned __int8)v2;
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
    LOBYTE(v2) = HalpIommuFlushDomainTB(i[3], i + 4, 1LL, &v14);
  if ( CurrentIrql != 15 )
  {
    KxReleaseSpinLock(a1 + 2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && v4 <= 0xFu && v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    LOBYTE(v2) = v4;
    __writecr8(v4);
  }
  return (char)v2;
}
