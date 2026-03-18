/*
 * XREFs of FsRtlRegisterFileSystemFilterCallbacks @ 0x1403A7640
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlRegisterFileSystemFilterCallbacks(
        struct _DRIVER_OBJECT *FilterDriverObject,
        PFS_FILTER_CALLBACKS Callbacks)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  DRIVER_ADD_DEVICE *Pool2; // rax
  DRIVER_ADD_DEVICE *v5; // rdi
  NTSTATUS result; // eax

  if ( !FilterDriverObject || !Callbacks )
    return -1073741811;
  DriverExtension = FilterDriverObject->DriverExtension;
  Pool2 = (DRIVER_ADD_DEVICE *)ExAllocatePool2(66LL, Callbacks->SizeOfFsFilterCallbacks, 1735217990LL);
  v5 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, Callbacks, Callbacks->SizeOfFsFilterCallbacks);
  result = 0;
  DriverExtension[1].AddDevice = v5;
  return result;
}
