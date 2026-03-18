/*
 * XREFs of KiProcessControlProtection @ 0x140569910
 * Callers:
 *     KiControlProtectionFault @ 0x140432780 (KiControlProtectionFault.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiFixupControlProtectionUserModeReturnMismatch @ 0x1405695E0 (KiFixupControlProtectionUserModeReturnMismatch.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x140569768 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiProcessControlProtectionFromKernelMode @ 0x140569CA0 (KiProcessControlProtectionFromKernelMode.c)
 *     KiCheckUserAddressCetCompat @ 0x140960A00 (KiCheckUserAddressCetCompat.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiProcessControlProtection(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r11
  volatile signed __int32 *UserCetLogging; // r9
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf
  unsigned int v12; // [rsp+24h] [rbp-94h]

  v1 = *(unsigned __int16 *)(a1 + 368);
  if ( (_WORD)v1 == 16 )
    return KiProcessControlProtectionFromKernelMode(a1, v1, a1);
  v3 = *(_QWORD *)(a1 + 360);
  v12 = 2;
  UserCetLogging = (volatile signed __int32 *)KeGetCurrentThread()->ApcState.Process->UserCetLogging;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
    LOWORD(v1) = *(_WORD *)(a1 + 368);
  }
  if ( (_WORD)v1 == 51 && *(_QWORD *)(a1 + 352) == 1LL )
  {
    v6 = __readmsr(0x6A7u);
    if ( (v6 & 7) == 0 )
    {
      v7 = *(_QWORD *)(a1 + 384);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + 8 > 0x7FFFFFFF0000LL || v7 + 8 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v8 = *(_QWORD *)v7;
      if ( (unsigned __int64)(*(_QWORD *)v7 - 0x10000LL) <= 0x7FFFFFFDFFFFLL
        && (unsigned __int64)(v3 - 0x10000) <= 0x7FFFFFFDFFFFLL )
      {
        if ( v8 == qword_140D071F0 )
        {
          *(_QWORD *)v7 = *(_QWORD *)v6;
          v12 = 3;
          _InterlockedAdd(UserCetLogging + 21, 1u);
        }
        else
        {
          while ( 1 )
          {
            v6 += 8LL;
            if ( *(_QWORD *)v6 < 0x10000uLL )
              break;
            if ( *(_QWORD *)v6 == v8 )
            {
              __writemsr(0x6A7u, v6);
              v12 = 1;
              _InterlockedAdd(UserCetLogging + 20, 1u);
              break;
            }
            if ( (v6 & 0xFFF) == 0 )
            {
              if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
                break;
              v8 = *(_QWORD *)v7;
            }
          }
        }
      }
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(0LL);
  }
  return v12;
}
