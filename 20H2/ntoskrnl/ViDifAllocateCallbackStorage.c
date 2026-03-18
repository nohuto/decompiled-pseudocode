/*
 * XREFs of ViDifAllocateCallbackStorage @ 0x14059F208
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x14037DBD4 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x1409C7A5C (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID ViDifAllocateCallbackStorage()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x494F6656u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x100uLL);
  return v1;
}
