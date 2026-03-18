/*
 * XREFs of DpiAcpiCallAcpiEventHandler @ 0x1C0066024
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C0025DA0 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     DpiTryLidStateRecovery @ 0x1C005F948 (DpiTryLidStateRecovery.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C0065FD0 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C0394770 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(PVOID Object, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  int v8; // edi
  char *PoolWithTag; // rbx
  _QWORD *v10; // rax
  GUID ActivityId[5]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  memset(ActivityId, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
  v8 = 0;
  *(_QWORD *)&ActivityId[4].Data1 = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)ActivityId[1].Data4 = 4;
  LOBYTE(ActivityId[3].Data1) = -1;
  ActivityId[2].Data1 = a2;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    ObfReferenceObject(Object);
    *((_QWORD *)PoolWithTag + 2) = Object;
    *((_DWORD *)PoolWithTag + 6) = a2;
    *((_DWORD *)PoolWithTag + 7) = v5;
    *((_QWORD *)PoolWithTag + 4) = a4;
    *(GUID *)(PoolWithTag + 40) = ActivityId[0];
    *(GUID *)(PoolWithTag + 56) = ActivityId[1];
    *(GUID *)(PoolWithTag + 72) = ActivityId[2];
    *(GUID *)(PoolWithTag + 88) = ActivityId[3];
    *((_QWORD *)PoolWithTag + 13) = *(_QWORD *)&ActivityId[4].Data1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C0130620);
    qword_1C0130658 = (__int64)KeGetCurrentThread();
    if ( a2 == 2 && (_DWORD)v5 == 4 )
    {
      ++dword_1C0130670;
      KeClearEvent(&Event);
    }
    v10 = (_QWORD *)qword_1C0130668;
    if ( *(__int64 **)qword_1C0130668 != &qword_1C0130660 )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &qword_1C0130660;
    *((_QWORD *)PoolWithTag + 1) = v10;
    *v10 = PoolWithTag;
    qword_1C0130668 = (__int64)PoolWithTag;
    if ( !IoWorkItem )
    {
      IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( IoWorkItem )
      {
        WdLogSingleEntry1(4LL, v5);
        IoQueueWorkItemEx(IoWorkItem, DpiAcpiHandleAcpiEventWork, DelayedWorkQueue, 0LL);
      }
      else
      {
        KeSetEvent(&Event, 0, 0);
        v8 = -1073741670;
        WdLogSingleEntry1(6LL, -1073741670LL);
      }
    }
    qword_1C0130658 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C0130620);
    if ( v8 < 0 )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    v8 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
  }
  return (unsigned int)v8;
}
