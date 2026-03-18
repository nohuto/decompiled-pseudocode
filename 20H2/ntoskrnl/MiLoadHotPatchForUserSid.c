/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x1408CD770
 * Callers:
 *     NtManageHotPatch @ 0x1408D1580 (NtManageHotPatch.c)
 * Callees:
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlHashBytes2 @ 0x1403F6EE4 (RtlHashBytes2.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     MiAllocateHotPatchRecord @ 0x1408CB514 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408CC09C (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x1408CCAB8 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x1408CD1E0 (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, void *a2, int *a3)
{
  int v6; // ebx
  _QWORD *HotPatchRecord; // rdi
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v9; // rsi
  char v10; // al
  bool v11; // r12
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *Pool; // rax
  _QWORD *v15; // rbp
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  ULONG DestinationSidLength; // [rsp+A8h] [rbp+20h]

  Handle = 0LL;
  DmaAdapter = 0LL;
  v19 = 0LL;
  v6 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&DmaAdapter, 0LL, (__int64)a3, 0LL);
  if ( v6 < 0 )
    goto LABEL_23;
  HotPatchRecord = MiAllocateHotPatchRecord(*a3, a3[1], a1);
  if ( !HotPatchRecord )
  {
    v6 = -1073741670;
    goto LABEL_23;
  }
  CurrentThread = KeGetCurrentThread();
  DestinationSidLength = RtlLengthSid(a2);
  *(_QWORD *)&v19 = RtlHashBytes2((const unsigned __int8 *)a2, DestinationSidLength);
  *((_QWORD *)&v19 + 1) = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  v9 = (_QWORD *)MiUserSidPatchLists;
  v10 = 0;
  v11 = 0;
  if ( !MiUserSidPatchLists )
    goto LABEL_12;
  while ( 1 )
  {
    v12 = MiCompareUserSidHotPatchNodes(&v19, (__int64)v9);
    if ( v12 <= 0 )
      break;
    v13 = (_QWORD *)v9[1];
    if ( !v13 )
    {
      v11 = 1;
      goto LABEL_13;
    }
LABEL_10:
    v9 = v13;
  }
  if ( v12 < 0 )
  {
    v13 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_13;
    goto LABEL_10;
  }
  v10 = 1;
LABEL_12:
  if ( !v10 )
  {
LABEL_13:
    Pool = MiAllocatePool(256, DestinationSidLength + 40, 0x73486D4Du);
    v15 = Pool;
    if ( !Pool )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
      KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v6 = -1073741670;
      goto LABEL_21;
    }
    Pool[3] = 0LL;
    Pool[4] = v19;
    RtlCopySid(DestinationSidLength, Pool + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&MiUserSidPatchLists, (unsigned __int64)v9, v11, v15);
    v9 = v15;
  }
  MiInsertHotPatchRecord(v9 + 3, HotPatchRecord, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  HotPatchRecord = 0LL;
  MiHotPatchAllProcesses(*a3, a3[1]);
  v6 = 0;
LABEL_21:
  if ( HotPatchRecord )
    ExFreePoolWithTag(HotPatchRecord, 0);
LABEL_23:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
