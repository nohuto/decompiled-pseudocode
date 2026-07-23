/*
 * XREFs of NtReplyPort @ 0x14062E070
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14062CD44 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 */

NTSTATUS __cdecl NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // r9
  __int64 v8[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v8, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v8[6]) = 0;
    v8[0] = (__int64)Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      v5 = AlpcpReplyLegacySynchronousRequest(v8, (unsigned __int64)ReplyMessage, KeGetCurrentThread()->PreviousMode);
    }
    else
    {
      LODWORD(v8[6]) = 65537;
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpSendMessage(v8, ReplyMessage, 0LL, v6);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
