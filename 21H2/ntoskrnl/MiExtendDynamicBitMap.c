/*
 * XREFs of MiExtendDynamicBitMap @ 0x1403D8D00
 * Callers:
 *     MiObtainDynamicVa @ 0x14026B354 (MiObtainDynamicVa.c)
 *     MiMarkSystemVaAllocated @ 0x140599050 (MiMarkSystemVaAllocated.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x140246420 (MiSplitBitmapPages.c)
 *     MiReclaimSystemVa @ 0x140256F0C (MiReclaimSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiExtendDynamicBitMap(__int64 *a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 OldIrql; // rbx
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v21; // edx
  bool v22; // zf
  struct _KPRCB *v23; // rcx
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rdi
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+80h] [rbp+40h]

  v34 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 8, &LockHandle);
    a3 = v34;
  }
  v8 = *a2;
  if ( a2 != (unsigned __int64 *)a1 && a1[5] != v8 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_19;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_19;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_19;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_19;
    if ( CurrentIrql < 2u )
      goto LABEL_19;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v22 = (v21 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v21;
    if ( !v22 )
      goto LABEL_19;
    v23 = CurrentPrcb;
    goto LABEL_35;
  }
  v9 = a1[2];
  if ( a4 == 9 )
  {
    v9 -= a1[5];
  }
  else if ( a4 == 13 )
  {
    v9 -= *a1;
  }
  if ( v8 < v9 )
  {
    if ( a4 == 13 )
      v10 = -4096LL;
    else
      v10 = v8 >> 3;
    v11 = 0x8000LL;
    if ( a3 )
      v11 = a3;
    if ( (unsigned int)MiSplitBitmapPages(a4, a2[1] + v10, v11) )
    {
      v12 = *a2;
      v13 = v9 - v8;
      if ( v8 + v11 <= v9 )
        v13 = v11;
      if ( a4 == 13 )
      {
        v14 = 0LL;
        a2[1] += -8LL * (v13 >> 6);
        *a2 = v12 + v13;
        v17 = a1[5];
        if ( !v17 )
          a1[6] = ((unsigned __int64)a1[1] >> 21) & 0x7FFF;
        a1[5] = v17 + v13;
      }
      else
      {
        v14 = *a2;
        *a2 = v12 + v13;
      }
      RtlClearBitsEx((__int64)a2, v14, v13);
      if ( a5 )
        return 1LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (v24 = KeGetCurrentIrql(), v24 > 0xFu)
        || LockHandle.OldIrql > 0xFu
        || v24 < 2u
        || (v25 = KeGetCurrentPrcb(),
            v26 = v25->SchedulerAssist,
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1)),
            v22 = (v27 & v26[5]) == 0,
            v26[5] &= v27,
            !v22) )
      {
LABEL_19:
        __writecr8(OldIrql);
        return 1LL;
      }
      v23 = v25;
LABEL_35:
      KiRemoveSystemWorkPriorityKick(v23);
      goto LABEL_19;
    }
  }
  if ( !a5 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v28);
    if ( a1 == &qword_140C51A40 )
      MiReclaimSystemVa(1);
  }
  return 0LL;
}
