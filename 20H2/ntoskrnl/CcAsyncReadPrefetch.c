/*
 * XREFs of CcAsyncReadPrefetch @ 0x14024B6A8
 * Callers:
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 * Callees:
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     CcUpdateReadHistory @ 0x14024B8B4 (CcUpdateReadHistory.c)
 *     FsRtlIsNtstatusExpected @ 0x140320A00 (FsRtlIsNtstatusExpected.c)
 *     MmPrefetchForCacheManager @ 0x14065829C (MmPrefetchForCacheManager.c)
 *     MmProbeAndLockProcessPages @ 0x140685D90 (MmProbeAndLockProcessPages.c)
 */

char __fastcall CcAsyncReadPrefetch(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r14
  int v5; // r12d
  struct _MDL *v6; // r10
  struct _KTHREAD *v7; // r15
  _DWORD *v8; // rbx
  int v10; // [rsp+B0h] [rbp+8h]
  int v11; // [rsp+B8h] [rbp+10h]
  __int64 v12; // [rsp+C0h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp+20h]

  v11 = 0;
  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD **)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD **)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(struct _MDL **)(a1 + 64);
  v7 = *(struct _KTHREAD **)(a1 + 96);
  if ( (v6->MdlFlags & 0x817) == 0 )
    MmProbeAndLockProcessPages(v6, *(PEPROCESS *)(a1 + 88), *(_BYTE *)(a1 + 112), IoWriteAccess);
  CurrentThread = KeGetCurrentThread();
  CurrentThread[1].Timer.DueTime.HighPart = 0;
  *v4 = 0LL;
  v10 = v3;
  if ( v12 < *(_QWORD *)(v1 + 8) )
  {
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)7;
    if ( v12 + v3 > *(_QWORD *)(v1 + 8) )
      v10 = *(_DWORD *)(v1 + 8) - v12;
    v11 = MmPrefetchForCacheManager(
            (_DWORD)v2,
            (unsigned int)v12 & 0xFFFFF000,
            -4096,
            ((v10 + v12 + 4095) & 0xFFFFF000) - (v12 & 0xFFFFF000),
            v5);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  if ( v11 )
    ++CcNumberAsyncReadPrefetches;
  else
    ++CcNumberAsyncReadCacheHits;
  v8 = (_DWORD *)v2[6];
  if ( CcEnableReadAheadInAsyncRead && v11 )
  {
    if ( !v8 )
      return 1;
    if ( (*v8 & 0x20000) == 0 )
      CcScheduleReadAheadEx(v2, &v12, v3, v7);
  }
  if ( v8 )
    CcUpdateReadHistory(v2, &v12, (unsigned int)v3);
  return 1;
}
