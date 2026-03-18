/*
 * XREFs of KiGenericCallDpcWorker @ 0x1402D9F70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1402DA448 (KxTryToAcquireSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v4; // r15
  ULONG ActiveProcessorCount; // eax
  __int64 *v6; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  __int64 v20; // [rsp+70h] [rbp+40h] BYREF
  int v21; // [rsp+78h] [rbp+48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h] BYREF

  v20 = a1;
  v21 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (unsigned __int8)KxTryToAcquireSpinLock(&KiDpcBroadcastLock) )
      break;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & v13[5]) == 0;
          v13[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KeYieldProcessorEx(&v21);
  }
  v21 = 0;
  v4 = KeGetCurrentPrcb();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(v20) = ActiveProcessorCount;
  HIDWORD(v22) = ActiveProcessorCount;
  LODWORD(v22) = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v6 = KiProcessorBlock;
    v7 = ActiveProcessorCount;
    do
    {
      if ( (struct _KPRCB *)*v6 != v4 )
      {
        v8 = *v6 + 32352;
        *(_QWORD *)(v8 + 24) = *a2;
        *(_QWORD *)(v8 + 32) = a2[1];
        KiInsertQueueDpc(v8, 0);
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(_KDPC *, _QWORD, __int64 *, __int64 *))*a2)(&v4->CallDpc, a2[1], &v20, &v22);
  while ( (_DWORD)v20 )
    KeYieldProcessorEx(&v21);
  KxReleaseSpinLock(&KiDpcBroadcastLock);
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
        v15 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
