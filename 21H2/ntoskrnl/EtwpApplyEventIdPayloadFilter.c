/*
 * XREFs of EtwpApplyEventIdPayloadFilter @ 0x1402810A0
 * Callers:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140620768 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x14028118C (EtwpPerfectHashFunctionSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0FB8 (EtwpApplyPayloadFilterInternal.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  volatile signed __int32 *v9; // rdi
  __int64 v12; // r11
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // r10
  char v15; // al
  _BYTE *v16; // rdx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdi
  char v25; // al
  _BYTE *v26; // rdx
  int v27; // eax
  char v28; // cl
  char v29[24]; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  v29[0] = 1;
  v12 = a1;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v14 = 104LL * a2;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + v14 + 72) )
    {
      v15 = EtwpPerfectHashFunctionSearch(a5);
      if ( *v16 != v15 )
      {
        v29[0] = 0;
        goto LABEL_6;
      }
    }
    else if ( !v29[0] )
    {
LABEL_6:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      goto LABEL_8;
    }
    v9 = *(volatile signed __int32 **)(*(_QWORD *)(v12 + 384) + v14 + 80);
    if ( v9 )
      _InterlockedIncrement(v9);
    goto LABEL_6;
  }
  v24 = 104LL * a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + v24 + 72) )
  {
    v25 = EtwpPerfectHashFunctionSearch(a5);
    if ( *v26 != v25 )
      return 0;
  }
  v9 = *(volatile signed __int32 **)(*(_QWORD *)(v12 + 384) + v24 + 80);
LABEL_8:
  if ( !v9 )
    return v29[0];
  v27 = EtwpApplyPayloadFilterInternal(a4, a6, a7, a8, a3 == 0, v9 + 2, v29);
  v28 = v29[0];
  if ( v27 < 0 )
    v28 = 1;
  v29[0] = v28;
  if ( a9 < 2u )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v9, 0);
    return v29[0];
  }
  return v28;
}
