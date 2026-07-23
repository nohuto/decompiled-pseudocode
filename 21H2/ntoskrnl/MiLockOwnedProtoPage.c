/*
 * XREFs of MiLockOwnedProtoPage @ 0x140325070
 * Callers:
 *     MiRelockProtoPoolPage @ 0x140324DC8 (MiRelockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  volatile signed __int64 *v4; // rsi
  char v5; // al
  __int64 v6; // rbx
  unsigned __int64 i; // rbp
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v12; // zf

  v4 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  v5 = *(_BYTE *)(a1 + 34);
  v6 = a1;
  for ( i = (unsigned __int8)a2; (v5 & 0x20) != 0; v5 = *(_BYTE *)(v6 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)i != 17 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a1 = (unsigned int)(i + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            a2 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
            v12 = ((unsigned int)a2 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)a2 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(i);
    }
    v9 = 0;
    while ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    MiLockPageInline(v6, a2, a3, SchedulerAssist);
  }
  *(_BYTE *)(v6 + 34) = v5 | 0x20;
  result = *(_QWORD *)(v6 + 24) >> 62;
  if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v4 & 0x20) == 0 )
    result = MiWriteValidPteVolatile(v4, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
