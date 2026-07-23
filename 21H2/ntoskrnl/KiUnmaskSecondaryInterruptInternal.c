/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140519A54
 * Callers:
 *     KeConnectInterrupt @ 0x14037731C (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14038C724 (KeUnmaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14051916C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rsi
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r8
  int v16; // eax
  __int64 *v17; // rdx
  __int64 *v18; // rax
  int v19; // ebx
  unsigned __int8 v20; // al
  unsigned __int8 v21; // si
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 v26; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v26 = 0;
  v4 = (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48 * v4);
  KiAcquireSecondaryInterruptConnectLock(v5, &v26);
  v6 = KiGlobalSecondaryIDT + 48 * v4;
  if ( !*(_BYTE *)(v6 + 32) )
  {
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v26 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v26 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    v3 = 296;
LABEL_18:
    __writecr8(v26);
    return v3;
  }
  v12 = *(_QWORD *)(v6 + 40);
  if ( !v12 )
  {
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && v26 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (v26 + 1));
          v11 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
      }
    }
    goto LABEL_18;
  }
  v17 = (__int64 *)(v12 + 8);
  v18 = (__int64 *)(v12 + 8);
  while ( 1 )
  {
    v19 = -(v18[12] & 1);
    if ( (v18[12] & 1) == 0 )
      break;
    v18 = (__int64 *)*v18;
    if ( v18 == v17 )
      goto LABEL_24;
  }
  *(_BYTE *)(v6 + 32) = 0;
LABEL_24:
  KxReleaseSpinLock(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v20 = KeGetCurrentIrql(), v20 <= 0xFu) )
  {
    v21 = v26;
    if ( v26 <= 0xFu && v20 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v21 = v26;
      v24 = ~(unsigned __int16)(-1LL << (v26 + 1));
      v11 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
  }
  else
  {
    v21 = v26;
  }
  __writecr8(v21);
  if ( !v19 )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))off_140C00778[0])(a2, 0LL);
  return v3;
}
