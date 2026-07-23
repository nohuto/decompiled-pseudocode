/*
 * XREFs of HsaIommuSendCommand @ 0x1404E3F48
 * Callers:
 *     HsaDismissPageFault @ 0x1404E2C80 (HsaDismissPageFault.c)
 *     HsaFlushDeviceTbOnly @ 0x1404E2F00 (HsaFlushDeviceTbOnly.c)
 *     HsaFlushTbInternal @ 0x1404E303C (HsaFlushTbInternal.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1404E3EBC (HsaInvalidateRemappingTableEntries.c)
 *     HsaIommuWaitCommand @ 0x1404E41B8 (HsaIommuWaitCommand.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall HsaIommuSendCommand(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  unsigned __int64 v14; // r8
  __int64 v15; // rbp
  __int64 v16; // r15
  unsigned __int64 result; // rax
  unsigned int v18; // ebx
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp+8h]
  unsigned __int64 v27; // [rsp+88h] [rbp+10h]

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
  v26 = *a1;
  v9 = *(_QWORD *)(*a1 + 8200);
  v10 = a1[6];
  v27 = v10;
  v11 = ((unsigned int)(v9 >> 4) & 0x7FFF) + 1;
  v12 = 0;
  v13 = 0;
  v14 = a1[8] >> 4;
  if ( (_DWORD)v11 != (_DWORD)v14 )
    v13 = ((v9 >> 4) & 0x7FFF) + 1;
  v15 = v13;
  if ( v13 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v12 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
      {
        _mm_pause();
      }
      else
      {
        qword_140C4A1C0(v12, v11, v14);
        v8 = v26;
      }
    }
    while ( v15 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v10 = v27;
  }
  v16 = 2 * ((v9 >> 4) & 0x7FFF);
  *(_QWORD *)(v10 + 8 * v16) = *a2;
  *(_QWORD *)(v10 + 8 * v16 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = ((unsigned int)v9 ^ (16 * (_DWORD)v15)) & 0x7FFF0 ^ v9;
  _InterlockedOr(v24, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      result = a1[15];
      if ( !result )
        break;
      if ( (++v18 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
        _mm_pause();
      else
        qword_140C4A1C0(v18, v11, v14);
    }
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
