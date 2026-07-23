/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x140519294
 * Callers:
 *     KeConnectInterrupt @ 0x14037731C (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14051916C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1405191E4 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInsertInterruptObjectOrdered @ 0x1405215E8 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  char v3; // si
  unsigned __int8 v4; // cl
  __int64 v5; // rdx
  char v6; // bp
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v12; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = 0;
  if ( !KiSecondaryInterruptServicesEnabled )
    return 3221225473LL;
  v3 = 0;
  v4 = *(_BYTE *)(a1 + 92);
  v5 = (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  v6 = 0;
  if ( (unsigned int)v5 > 0xFF )
    return 3221225711LL;
  if ( v4 > 0xCu )
    return 3221225711LL;
  if ( *(_DWORD *)(a1 + 96) >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v4 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  v8 = KiGlobalSecondaryIDT + 48 * v5;
  KiAcquireSecondaryPassiveConnectLock(v8);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v8, &v20);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( v9 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_17;
      if ( !*(_BYTE *)(v9 + 100) )
        goto LABEL_17;
      if ( *(_DWORD *)(v9 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_17;
      v6 = 1;
      v3 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v8 + 40), a1);
      if ( *(_BYTE *)(v10 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_17;
    }
    else
    {
      v6 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v8 + 32) = 0;
    }
    *(_QWORD *)(v8 + 40) = a1;
LABEL_17:
    *(_BYTE *)(a1 + 95) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v12 = v20;
    if ( v20 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = v20;
      v15 = ~(unsigned __int16)(-1LL << (v20 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v12 = v20;
  }
  __writecr8(v12);
  KeSetEvent((PRKEVENT)(v8 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
  if ( v6 )
    return v3 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
