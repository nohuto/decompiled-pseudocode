/*
 * XREFs of NtReplyPort @ 0x14064BE10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memset @ 0x140408F80 (memset.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
 */

NTSTATUS __cdecl NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  NTSTATUS v6; // ebx
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
      v6 = AlpcpReplyLegacySynchronousRequest(
             (__int64)v10,
             (unsigned __int64)ReplyMessage,
             KeGetCurrentThread()->PreviousMode);
    }
    else
    {
      LODWORD(v10[6]) = 65537;
      v6 = AlpcpSendMessage((__int64)v10, (__m256i *)ReplyMessage, 0LL, KeGetCurrentThread()->PreviousMode);
      if ( v6 == -1073740029 )
        v6 = -1073741769;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, v8);
  return v6;
}
