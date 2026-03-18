/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x1408C65E0
 * Callers:
 *     NtManageHotPatch @ 0x1408CA3F0 (NtManageHotPatch.c)
 * Callees:
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlHashBytes2 @ 0x1403F15C4 (RtlHashBytes2.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 *     MiAllocateHotPatchRecord @ 0x1408C4384 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1408C4F0C (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x1408C5928 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x1408C6050 (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x1408C81B8 (MiOpenHotPatchFile.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  __int128 v25; // [rsp+50h] [rbp-38h] BYREF
  ULONG DestinationSidLength; // [rsp+A8h] [rbp+20h]

  Handle = 0LL;
  DmaAdapter = 0LL;
  v25 = 0LL;
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
  *(_QWORD *)&v25 = RtlHashBytes2((const unsigned __int8 *)a2, DestinationSidLength);
  *((_QWORD *)&v25 + 1) = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  v9 = (_QWORD *)MiUserSidPatchLists;
  v10 = 0;
  v11 = 0;
  if ( !MiUserSidPatchLists )
    goto LABEL_12;
  while ( 1 )
  {
    v12 = MiCompareUserSidHotPatchNodes(&v25, (__int64)v9);
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
        ExfTryToWakePushLock(&MiHotPatchListLock);
      KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
      v6 = -1073741670;
      goto LABEL_21;
    }
    Pool[3] = 0LL;
    Pool[4] = v25;
    RtlCopySid(DestinationSidLength, Pool + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&MiUserSidPatchLists, (unsigned __int64)v9, v11, v15);
    v9 = v15;
  }
  MiInsertHotPatchRecord(v9 + 3, HotPatchRecord, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v19, v20, v21);
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
