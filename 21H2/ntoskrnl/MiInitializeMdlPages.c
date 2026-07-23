/*
 * XREFs of MiInitializeMdlPages @ 0x1402948B4
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 *     MiReturnMdlExcess @ 0x1405343EC (MiReturnMdlExcess.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiInitializeMdlLeafPfns @ 0x140294A0C (MiInitializeMdlLeafPfns.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeMdlPages(__int64 a1, int a2)
{
  _DWORD *v2; // r12
  unsigned __int64 v3; // rbp
  __int64 v5; // rsi
  int v6; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v8; // r14
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  _DWORD *v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  _KPROCESS *Process; // [rsp+80h] [rbp+18h]

  v2 = (_DWORD *)(a1 + 48);
  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  v5 = a1;
  if ( (a2 & 0x80000200) != 0 )
    v6 = 0;
  else
    v6 = MiSwizzleInvalidPte(128LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v8 = 0LL;
  if ( v3 )
  {
    do
    {
      MiInitializeMdlLeafPfns(48 * *v2, 1, (_DWORD)Process, v6, a2);
      if ( CurrentIrql < 2u && (v8 & 0xF) == 0 && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v14 = (v13 & v12[5]) == 0;
            v12[5] &= v13;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v15 = KeGetCurrentPrcb()->SchedulerAssist;
          v15[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
      ++v8;
      v2 += 2;
    }
    while ( v8 < v3 );
    v5 = a1;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(CurrentIrql);
  *(_QWORD *)(v5 + 16) = 0LL;
  result = 2LL;
  *(_WORD *)(v5 + 10) |= 2u;
  return result;
}
