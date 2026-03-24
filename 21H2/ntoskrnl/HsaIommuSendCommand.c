/*
 * XREFs of HsaIommuSendCommand @ 0x1404E3D08
 * Callers:
 *     HsaDismissPageFault @ 0x1404E2A40 (HsaDismissPageFault.c)
 *     HsaFlushDeviceTbOnly @ 0x1404E2CC0 (HsaFlushDeviceTbOnly.c)
 *     HsaFlushTbInternal @ 0x1404E2DFC (HsaFlushTbInternal.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1404E3C7C (HsaInvalidateRemappingTableEntries.c)
 *     HsaIommuWaitCommand @ 0x1404E3F78 (HsaIommuWaitCommand.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E43F8 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall HsaIommuSendCommand(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  unsigned int v11; // r13d
  unsigned int v12; // ecx
  __int64 v13; // rbp
  __int64 v14; // r15
  unsigned __int64 result; // rax
  unsigned int v16; // ebx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+8h]
  unsigned __int64 v25; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = a1 + 19;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)a1 + 19);
  }
  if ( *a2 >> 60 == 1 )
  {
    v7 = a1[17];
    a1[15] = 1LL;
    *a2 = v7;
    a2[1] = a1[18];
  }
  v8 = *a1;
  v24 = *a1;
  v9 = *(_QWORD *)(*a1 + 8200);
  v10 = a1[6];
  v25 = v10;
  v11 = 0;
  v12 = 0;
  if ( ((v9 >> 4) & 0x7FFF) + 1 != (unsigned int)(a1[8] >> 4) )
    v12 = ((*(_QWORD *)(*a1 + 8200) >> 4) & 0x7FFF) + 1;
  v13 = v12;
  if ( v12 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v11 & dword_140C4A17C) != 0 || !qword_140C4A180 )
      {
        _mm_pause();
      }
      else
      {
        qword_140C4A180(v11);
        v8 = v24;
      }
    }
    while ( v13 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v10 = v25;
  }
  v14 = 2 * ((v9 >> 4) & 0x7FFF);
  *(_QWORD *)(v10 + 8 * v14) = *a2;
  *(_QWORD *)(v10 + 8 * v14 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = ((unsigned int)v9 ^ (16 * (_DWORD)v13)) & 0x7FFF0 ^ v9;
  _InterlockedOr(v22, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      result = a1[15];
      if ( !result )
        break;
      if ( (++v16 & dword_140C4A17C) != 0 || !qword_140C4A180 )
        _mm_pause();
      else
        qword_140C4A180(v16);
    }
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
