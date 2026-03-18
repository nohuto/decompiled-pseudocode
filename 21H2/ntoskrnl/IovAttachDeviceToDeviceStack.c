/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140A800C4
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x1402D8764 (ViDifCheckCallbackInterception.c)
 *     VfDifAllocateCallbackStorage @ 0x1405FE9C4 (VfDifAllocateCallbackStorage.c)
 *     ViDifCaptureDriverEntry @ 0x1405FEC4C (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x1405FECBC (ViDifCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x140A91FDC (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _DRIVER_OBJECT *v4; // rbx
  PDRIVER_EXTENSION DriverExtension; // rdi
  __int64 CallbackStorage; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    v4 = *(struct _DRIVER_OBJECT **)(a1 + 8);
    DriverExtension = v4->DriverExtension;
    if ( ViDifCheckCallbackInterception(v4) && !*(_QWORD *)&DriverExtension[1].ServiceKeyName.Length )
    {
      CallbackStorage = VfDifAllocateCallbackStorage();
      if ( CallbackStorage )
      {
        *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = CallbackStorage;
        if ( ViDifCaptureDriverEntry((__int64)v4) )
          ViDifCaptureIoCallbacks(v4);
      }
    }
    return IovUtilFlushStackCache(a2);
  }
  return result;
}
