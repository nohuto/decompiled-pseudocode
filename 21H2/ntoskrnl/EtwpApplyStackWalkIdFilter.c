/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x1405AC2D4
 * Callers:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140940C2C (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x14028118C (EtwpPerfectHashFunctionSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int16 a1, __int64 a2, unsigned int a3, char a4)
{
  bool v4; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r10
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  char v9; // al
  _BYTE *v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rdx
  char v17; // al
  _BYTE *v18; // rdx

  v4 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v8 = *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v8 )
    {
      v9 = EtwpPerfectHashFunctionSearch(a1, v8);
      v4 = *v10 == (unsigned __int8)v9;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(v6 << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    v16 = *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v16 )
    {
      v17 = EtwpPerfectHashFunctionSearch(a1, v16);
      return *v18 == (unsigned __int8)v17;
    }
  }
  return v4;
}
