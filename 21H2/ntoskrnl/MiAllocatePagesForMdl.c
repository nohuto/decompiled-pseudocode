/*
 * XREFs of MiAllocatePagesForMdl @ 0x140294744
 * Callers:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140294640 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdl @ 0x1403A6600 (MmAllocatePagesForMdl.c)
 *     MiPopulateCombineMdls @ 0x140726E20 (MiPopulateCombineMdls.c)
 *     MmAllocateNonCachedMemory @ 0x1408C6850 (MmAllocateNonCachedMemory.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     MiInitializeMdlPages @ 0x1402948B4 (MiInitializeMdlPages.c)
 *     MiInitializeMdlBatchPages @ 0x140294C34 (MiInitializeMdlBatchPages.c)
 *     MiFindPagesForMdl @ 0x14029542C (MiFindPagesForMdl.c)
 *     MiObtainMdlCharges @ 0x140295560 (MiObtainMdlCharges.c)
 *     MiValidateMdlAllocationRequest @ 0x14029717C (MiValidateMdlAllocationRequest.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiLogMdlRangeEvent @ 0x1405342D8 (MiLogMdlRangeEvent.c)
 *     MiReturnMdlExcess @ 0x1405343EC (MiReturnMdlExcess.c)
 *     EtwpGetDurationSince @ 0x1405A8CA4 (EtwpGetDurationSince.c)
 *     MiRemoveMdlPages @ 0x1408C6BC0 (MiRemoveMdlPages.c)
 */

__int64 __fastcall MiAllocatePagesForMdl(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v13; // r13
  unsigned int v14; // r12d
  unsigned int *v15; // r13
  int v16; // r12d
  __int64 v17; // r13
  int v19; // ecx
  int v20; // [rsp+50h] [rbp-A9h]
  _QWORD v21[10]; // [rsp+60h] [rbp-99h] BYREF
  _QWORD v22[6]; // [rsp+B0h] [rbp-49h] BYREF
  int v23; // [rsp+E0h] [rbp-19h]
  int v24; // [rsp+E4h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-11h] BYREF

  memset(v21, 0, sizeof(v21));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (int)MiValidateMdlAllocationRequest((unsigned int)v21, a1, a2, a3, a4, a5, a6, a7, a8) >= 0
    && (int)MiObtainMdlCharges(v21) >= 0 )
  {
    v13 = v21[8];
    UserData.Ptr = v21[5];
    *(_DWORD *)(v21[8] + 40LL) = 0;
    v14 = 0;
    while ( 1 )
    {
      v20 = *(_DWORD *)(v13 + 40);
      MiFindPagesForMdl(v21);
      if ( (unsigned __int64)*(unsigned int *)(v13 + 40) >> 12 == UserData.Ptr )
        break;
      v19 = v21[1];
      if ( SLOBYTE(v21[1]) >= 0 )
        goto LABEL_23;
      if ( v20 == *(_DWORD *)(v13 + 40) )
      {
        if ( v14 > 3 || KeGetCurrentIrql() >= 2u || (v21[1] & 8) != 0 )
        {
LABEL_23:
          MiReturnMdlExcess(v21);
          break;
        }
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
        v19 = v21[1];
        ++v14;
      }
      else
      {
        v14 = 0;
      }
      LODWORD(v21[1]) = v19 & 0xFFFEFFFF;
    }
    v15 = (unsigned int *)v21[8];
    if ( v21[8] )
    {
      if ( (a8 & 0x40) == 0 )
      {
        MiInitializeMdlBatchPages(v21);
        MiInitializeMdlPages(v15, LODWORD(v21[1]));
      }
      if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
        MiLogMdlRangeEvent(v15 + 12, 632LL, (unsigned __int64)v15[10] >> 12);
      if ( (v21[1] & 0x100) != 0 )
        v21[8] = MiRemoveMdlPages(v15);
    }
  }
  v16 = v21[1];
  v17 = v21[8];
  if ( EtwEventEnabled(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION) )
  {
    v22[0] = ((__int64 (__fastcall *)(_QWORD))EtwpGetDurationSince)((LARGE_INTEGER)PerformanceCounter.QuadPart);
    v22[1] = a5;
    v22[5] = v17;
    UserData.Ptr = (ULONGLONG)v22;
    v22[2] = a2;
    v22[3] = a3;
    v22[4] = a4;
    v23 = a7;
    v24 = v16;
    *(_QWORD *)&UserData.Size = 56LL;
    EtwWriteEx(EtwpMemoryProvRegHandle, &KERNEL_MEM_EVENT_MDL_ALLOCATION, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
  }
  return v21[8];
}
