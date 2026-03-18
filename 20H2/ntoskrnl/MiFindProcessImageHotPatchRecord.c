/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x1408CC530
 * Callers:
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeQueryUserSidToken @ 0x140656B0C (SeQueryUserSidToken.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 *     MiFindHotPatchRecord @ 0x140756BF4 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x1408CC68C (MiFindUserSidHotPatchContext.c)
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
  _BYTE v14[80]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v14, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  if ( !MiUserSidPatchLists
    || (v10 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process),
        SeQueryUserSidToken((__int64)v10, v14, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v14)) == 0)
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
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v10 )
    HalPutDmaAdapter(v10);
  return HotPatchRecord;
}
