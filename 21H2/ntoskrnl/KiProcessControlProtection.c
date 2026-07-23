/*
 * XREFs of KiProcessControlProtection @ 0x1405129A0
 * Callers:
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 * Callees:
 *     KiFixupControlProtectionUserModeReturnMismatch @ 0x1403F2BB4 (KiFixupControlProtectionUserModeReturnMismatch.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1403F2BD8 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCheckUserAddressCetCompat @ 0x1405CEF24 (KiCheckUserAddressCetCompat.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiProcessControlProtection(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf
  __int64 v8; // [rsp+20h] [rbp-58h]
  unsigned int v9; // [rsp+88h] [rbp+10h]
  __int64 v10; // [rsp+98h] [rbp+20h]

  v10 = *(_QWORD *)(a1 + 360);
  v9 = 2;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  if ( *(_WORD *)(a1 + 368) == 51 && *(_QWORD *)(a1 + 352) == 1LL )
  {
    v2 = __readmsr(0x6A7u);
    if ( (v2 & 7) == 0 )
    {
      v3 = *(_QWORD *)(a1 + 384);
      if ( (v3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v3 + 8 > 0x7FFFFFFF0000LL || v3 + 8 < v3 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v8 = *(_QWORD *)v3;
      if ( (unsigned __int64)(*(_QWORD *)v3 - 0x10000LL) <= 0x7FFFFFFDFFFFLL
        && (unsigned __int64)(v10 - 0x10000) <= 0x7FFFFFFDFFFFLL )
      {
        if ( v8 == KeRaiseExceptionForReturnAddressHijack )
        {
          *(_QWORD *)v3 = *(_QWORD *)v2;
          v9 = 3;
        }
        else
        {
          do
          {
            v2 += 8LL;
            if ( *(_QWORD *)v2 < 0x10000uLL )
              break;
            if ( *(_QWORD *)v2 == v8 )
            {
              __writemsr(0x6A7u, v2);
              v9 = 1;
              break;
            }
          }
          while ( (v2 & 0xFFF) != 0 || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 );
        }
      }
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(0LL);
  }
  return v9;
}
