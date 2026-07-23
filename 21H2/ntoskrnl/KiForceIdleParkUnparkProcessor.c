/*
 * XREFs of KiForceIdleParkUnparkProcessor @ 0x140523338
 * Callers:
 *     KiForceIdleParkUnparkDpcRoutine @ 0x140523310 (KiForceIdleParkUnparkDpcRoutine.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405236F0 (KiForceIdleUpdateSchedulerParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // [rsp+38h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    v16 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6;
    v11 = *(_BYTE *)(a1 + 32819) == 0;
    v17 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
    if ( v11 )
    {
      _InterlockedAnd64(&qword_140C126B8[v16], ~(1LL << (v17 & 0x3F)));
      v18 = 0LL;
    }
    else
    {
      _InterlockedAnd64(&qword_140C12768[v16], ~(1LL << (v17 & 0x3F)));
      v18 = 2LL;
    }
    return KeTransitionProcessorParkState(a1, v18);
  }
  if ( *(_BYTE *)(a1 + 33212) )
  {
    if ( !*(_BYTE *)(a1 + 32819) )
      goto LABEL_7;
    v6 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
    _InterlockedOr64(&qword_140C12768[v6 >> 6], 1LL << (v6 & 0x3F));
  }
  else
  {
    v5 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
    _InterlockedOr64(&qword_140C126B8[v5 >> 6], 1LL << (v5 & 0x3F));
  }
  result = KeTransitionProcessorParkState(a1, 1LL);
LABEL_7:
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = SchedulerAssist[6];
        v11 = v10 == -1;
        result = (unsigned int)(v10 + 1);
        SchedulerAssist[6] = result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[6] - 1;
        v12[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
    {
      KeYieldProcessorEx(&v19, a2, a3, a4);
      result = *(_QWORD *)(a1 + 48);
    }
    while ( result );
  }
  *(_BYTE *)(a1 + 12585) = 0;
  *(_BYTE *)(a1 + 12587) = 0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      result = (unsigned int)(v15[6] - 1);
      v15[6] = result;
      if ( !(_DWORD)result )
        return KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  return result;
}
