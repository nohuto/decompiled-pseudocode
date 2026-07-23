/*
 * XREFs of PopBcdClearPendingResume @ 0x14077DF80
 * Callers:
 *     PopFreeHiberContext @ 0x140773150 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1407762E0 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
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
