/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x1403407D0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1402F77F4 (FsRtlAcquireFileForModWriteEx.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     CmpReplicateKeyToVirtual @ 0x14086D55C (CmpReplicateKeyToVirtual.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 * Callees:
 *     ExpConvertExclusiveToSharedLite @ 0x14034085C (ExpConvertExclusiveToSharedLite.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14038B8A8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // r8
  __int16 v2; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
    ExpFastResourceLegacyConvertExclusiveToShared((ULONG_PTR)Resource);
  else
    ExpConvertExclusiveToSharedLite(Resource, 0LL);
}
