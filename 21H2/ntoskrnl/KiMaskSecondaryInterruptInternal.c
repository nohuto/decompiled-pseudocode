/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140519748
 * Callers:
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14051916C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v8; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v14; // rax
  __int64 *v15; // rcx
  unsigned __int8 v16; // al
  unsigned __int8 v17; // bl
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
  unsigned __int8 v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0;
  v3 = 0;
  v4 = (unsigned int)(a1 - 256);
  v5 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48 * v4);
  KiAcquireSecondaryInterruptConnectLock(v5, &v21);
  v6 = KiGlobalSecondaryIDT + 48 * v4;
  if ( *(_BYTE *)(v6 + 32) || (v14 = *(_QWORD *)(v6 + 40)) == 0 )
  {
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v8 = v21;
      if ( v21 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = v21;
        v11 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v8 = v21;
    }
    __writecr8(v8);
    return 0LL;
  }
  else
  {
    v15 = (__int64 *)(v14 + 8);
    while ( (v15[12] & 1) != 0 )
    {
      v15 = (__int64 *)*v15;
      if ( v15 == (__int64 *)(v14 + 8) )
      {
        *(_BYTE *)(v6 + 32) = 1;
        goto LABEL_17;
      }
    }
    v3 = 296;
LABEL_17:
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v16 = KeGetCurrentIrql(), v16 <= 0xFu) )
    {
      v17 = v21;
      if ( v21 <= 0xFu && v16 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v17 = v21;
        v20 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v12 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
    else
    {
      v17 = v21;
    }
    __writecr8(v17);
    if ( !v3 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_140C00770[0])(a2, 0LL);
    return v3;
  }
}
