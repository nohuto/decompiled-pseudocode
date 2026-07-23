/*
 * XREFs of PopBcdClearPendingResume @ 0x140781F20
 * Callers:
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140792228 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x14077A454 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14078335C (BiDeleteElement.c)
 *     BcdOpenObject @ 0x140783C00 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783D8C (BcdCloseObject.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  int v3; // ebx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdObjectHandle = 0LL;
  result = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BiDeleteElement(BcdObjectHandle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(BcdObjectHandle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(BcdStoreHandle);
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
