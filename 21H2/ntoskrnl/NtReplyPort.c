/*
 * XREFs of NtReplyPort @ 0x1406CDAE0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v10, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v6 >= 0 )
  {
    LODWORD(v10[6]) = 0;
    v10[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v7) = KeGetCurrentThread()->PreviousMode;
      v6 = AlpcpReplyLegacySynchronousRequest(v10, ReplyMessage, v7);
    }
    else
    {
      LODWORD(v10[6]) = 65537;
      LOBYTE(v8) = KeGetCurrentThread()->PreviousMode;
      v6 = AlpcpSendMessage(v10, ReplyMessage, 0LL, v8);
      if ( v6 == -1073740029 )
        v6 = -1073741769;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, v8);
  return v6;
}
