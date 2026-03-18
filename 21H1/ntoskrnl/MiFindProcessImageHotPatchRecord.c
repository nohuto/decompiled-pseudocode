/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x1408C53A0
 * Callers:
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14066B11C (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x140746494 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x1408C54FC (MiFindUserSidHotPatchContext.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(
        PEPROCESS Process,
        int a2,
        int a3,
        PUNICODE_STRING StringOut,
        _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r12
  struct _DMA_ADAPTER *v10; // rdi
  __int64 UserSidHotPatchContext; // rax
  unsigned int HotPatchRecord; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[80]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v17, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  if ( !MiUserSidPatchLists
    || (v10 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process),
        SeQueryUserSidToken((__int64)v10, v17, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v17)) == 0)
    || (HotPatchRecord = MiFindHotPatchRecord(
                           (const UNICODE_STRING **)(UserSidHotPatchContext + 24),
                           1uLL,
                           a2,
                           a3,
                           StringOut,
                           a5),
        HotPatchRecord == -1073741275) )
  {
    HotPatchRecord = MiFindHotPatchRecord((const UNICODE_STRING **)&MiGlobalHotPatchList, 1uLL, a2, a3, StringOut, a5);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MiHotPatchListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v13, v14, v15);
  if ( v10 )
    HalPutDmaAdapter(v10);
  return HotPatchRecord;
}
