/*
 * XREFs of CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14063A950
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402718B0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

bool __fastcall CmpVolumeContextMustHiveFilePagesBeKeptLocal(__int64 a1)
{
  signed __int64 *v1; // rdi
  bool v3; // bl

  v1 = (signed __int64 *)(a1 + 56);
  ExAcquirePushLockSharedEx(a1 + 56, 0LL);
  v3 = *(_BYTE *)(a1 + 64) == 0;
  if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return v3;
}
