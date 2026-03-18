/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x1409E393C
 * Callers:
 *     IovAllocateIrp @ 0x1409C77B0 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x1409C7F6C (IovCancelIrp.c)
 *     IovpLocalCompletionRoutine @ 0x1409C86D0 (IovpLocalCompletionRoutine.c)
 *     IovpCallDriver1 @ 0x1409D2C5C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409D3154 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1409D3458 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x1409D34D0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409D3600 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest3 @ 0x1409D3990 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x1409D3A18 (IovpCompleteRequest4.c)
 *     VfIoAllocateIrp2 @ 0x1409D41D8 (VfIoAllocateIrp2.c)
 *     VfIoFreeIrp @ 0x1409D425C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409D4414 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1409D46AC (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1409D46E8 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D88B0 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D8B34 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409E37B8 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405A0BDC (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405A0C24 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x1409C93C0 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

__int64 __fastcall VfIrpDatabaseEntryReleaseLock(_QWORD *a1)
{
  bool v1; // zf
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  KIRQL v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 6) == 0;
  v13 = 0;
  if ( v1 )
  {
    ViIrpDatabaseAcquireLockExclusive(&v13);
    v3 = *a1;
    if ( *a1 )
    {
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 1LL);
      *a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v3 >> 12))),
        v3);
    }
    ViIrpDatabaseReleaseLockExclusive(v13);
  }
  if ( !*((_DWORD *)a1 + 5) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v13);
    if ( !*((_DWORD *)a1 + 5) )
    {
      v4 = a1 + 4;
      v5 = (_QWORD *)a1[4];
      v6 = (_QWORD *)a1[5];
      if ( (_QWORD *)v5[1] != a1 + 4 || (_QWORD *)*v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      a1[5] = a1 + 4;
      *v4 = v4;
      if ( (_QWORD *)*v5 == v5 )
      {
        v7 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)(((__int64)v5 - ViIrpDatabase) >> 4));
        *v7 = 0LL;
        v7[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v13);
  }
  v8 = *((unsigned __int8 *)a1 + 16);
  v9 = (_QWORD *)a1[4];
  KxReleaseSpinLock(a1 + 1);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v1 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v1 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  if ( v9 == a1 + 4 )
  {
    *((_DWORD *)a1 + 7) |= 0x80000000;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64))a1[6])(a1, *a1, 2LL);
  }
  return result;
}
