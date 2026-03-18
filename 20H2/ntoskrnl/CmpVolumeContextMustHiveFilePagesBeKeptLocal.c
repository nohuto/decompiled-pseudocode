/*
 * XREFs of CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x1405DDB58
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140204810 (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
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
