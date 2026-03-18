/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x1409C7A5C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037DC08 (ViDifCheckCallbackInterception.c)
 *     ViDifAllocateCallbackStorage @ 0x14059F208 (ViDifAllocateCallbackStorage.c)
 *     ViDifCaptureDriverEntry @ 0x14059F24C (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x14059F278 (ViDifCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x1409D9914 (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _DRIVER_OBJECT *v4; // rbx
  PDRIVER_EXTENSION DriverExtension; // rdi
  PVOID CallbackStorage; // rax
  _QWORD *v7; // rcx

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    v4 = *(struct _DRIVER_OBJECT **)(a1 + 8);
    DriverExtension = v4->DriverExtension;
    if ( ViDifCheckCallbackInterception(v4) && !*(_QWORD *)&DriverExtension[1].ServiceKeyName.Length )
    {
      CallbackStorage = ViDifAllocateCallbackStorage();
      if ( CallbackStorage )
      {
        *(_QWORD *)&DriverExtension[1].ServiceKeyName.Length = CallbackStorage;
        if ( ViDifCaptureDriverEntry((__int64)v4) )
          ViDifCaptureIoCallbacks(v7);
      }
    }
    return IovUtilFlushStackCache(a2);
  }
  return result;
}
