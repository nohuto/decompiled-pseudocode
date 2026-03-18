/*
 * XREFs of KiForceIdleParkUnparkProcessor @ 0x140579F48
 * Callers:
 *     KiForceIdleParkUnparkDpcRoutine @ 0x140579F20 (KiForceIdleParkUnparkDpcRoutine.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057A2A0 (KiForceIdleUpdateSchedulerParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  wchar_t *v6; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v16; // edx
  __int64 v17; // rdx
  int v18; // [rsp+38h] [rbp+10h] BYREF

  if ( !(_BYTE)a2 )
  {
    v16 = *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(a1 + 33659) )
    {
      KeInterlockedClearProcessorAffinityEx((__int64)KiForceIdleSoftParkRestoreMask, v16);
      v17 = 2LL;
    }
    else
    {
      KeInterlockedClearProcessorAffinityEx((__int64)KiForceIdleUnparkRestoreMask, v16);
      v17 = 0LL;
    }
    return KeTransitionProcessorParkState(a1, v17);
  }
  if ( *(_BYTE *)(a1 + 34060) )
  {
    if ( !*(_BYTE *)(a1 + 33659) )
      goto LABEL_7;
    v5 = *(_DWORD *)(a1 + 36);
    v6 = KiForceIdleSoftParkRestoreMask;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 36);
    v6 = KiForceIdleUnparkRestoreMask;
  }
  KeInterlockedSetProcessorAffinityEx((__int64)v6, v5);
  result = KeTransitionProcessorParkState(a1, 1LL);
LABEL_7:
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
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
      KeYieldProcessorEx(&v18, a2, a3, a4);
      result = *(_QWORD *)(a1 + 48);
    }
    while ( result );
  }
  *(_BYTE *)(a1 + 13241) = 0;
  *(_BYTE *)(a1 + 13243) = 0;
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
