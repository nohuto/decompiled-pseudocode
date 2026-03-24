/*
 * XREFs of KiGenericCallDpcWorker @ 0x1402BC4D0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14027B610 (KeQueryActiveProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // bl
  ULONG ActiveProcessorCount; // eax
  __int64 *v6; // r14
  __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  ULONG v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF
  ULONG v21; // [rsp+80h] [rbp+18h] BYREF
  ULONG v22; // [rsp+84h] [rbp+1Ch]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v19 = ActiveProcessorCount;
  v22 = ActiveProcessorCount;
  v21 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 1 )
  {
    v6 = &qword_140CFDCC8;
    v7 = ActiveProcessorCount - 1;
    do
    {
      v8 = *v6 + 31648;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      KiInsertQueueDpc(v8, (__int64)&v19, (__int64)&v21, 0LL, 0);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 31648, a2[1], &v19, &v21);
  v20 = 0;
  while ( v19 )
    KeYieldProcessorEx(&v20, v9, v10, v11);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
