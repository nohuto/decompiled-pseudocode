/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1407A76C0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x1407A76A0 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x140864060 (NtListenPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1407A7658 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407A7850 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtReplyWaitReceivePortEx(HANDLE Handle, __int64 a2, __int128 *a3, unsigned __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 PreviousMode; // r15
  __int64 v11; // rax
  NTSTATUS v12; // esi
  PVOID v13; // rdi
  bool v15; // zf
  int v16; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = a4;
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 39) = *(_BYTE *)(v11 + 39);
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = Object;
    v18[0] = Object;
    LODWORD(v18[6]) = 0;
    if ( a3
      && ((v15 = (*((_DWORD *)Object + 104) & 0x2000) == 0, memset(&v18[3], 0, 24), v15)
        ? (LODWORD(v18[6]) = 65541, v16 = AlpcpSendMessage(v18, a3, 0LL, PreviousMode))
        : (LODWORD(v18[6]) = 4, v16 = AlpcpReplyLegacySynchronousRequest((__int64)v18, a3, PreviousMode)),
          v12 = v16,
          v16 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
      v12 = AlpcpReceiveLegacyMessage(v18, a4, a5, a2);
      AlpcpCompleteDeferSignalRequest((__int64)v18);
      ObfDereferenceObject(v13);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
