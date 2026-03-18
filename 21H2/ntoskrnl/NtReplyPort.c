/*
 * XREFs of NtReplyPort @ 0x1406651F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtReplyPort(HANDLE Handle, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v9, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    LODWORD(v9[6]) = 0;
    v9[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpReplyLegacySynchronousRequest(v9, a2, v6);
    }
    else
    {
      LODWORD(v9[6]) = 65537;
      LOBYTE(v7) = KeGetCurrentThread()->PreviousMode;
      v5 = AlpcpSendMessage(v9, a2, 0LL, v7);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(Object);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
