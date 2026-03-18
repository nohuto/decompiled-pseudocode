/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x140303A00
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1403537D4 (FsRtlAcquireFileForModWriteEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406CBAEC (PspAllocateAndQueryNotificationChannel.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     CmpReplicateKeyToVirtual @ 0x14086C20C (CmpReplicateKeyToVirtual.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 * Callees:
 *     ExpConvertExclusiveToSharedLite @ 0x140303A8C (ExpConvertExclusiveToSharedLite.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14038AD38 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
