/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x1408C9E50
 * Callers:
 *     MiHotPatchImage @ 0x1408CA494 (MiHotPatchImage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 *     MiFindHotPatchRecord @ 0x14075DC68 (MiFindHotPatchRecord.c)
 *     MiFindUserSidHotPatchContext @ 0x1408C9FAC (MiFindUserSidHotPatchContext.c)
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
