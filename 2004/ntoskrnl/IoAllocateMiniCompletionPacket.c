/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x14060EE00
 * Callers:
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14060ED2C (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 * Callees:
 *     IopAllocateMiniCompletionPacket @ 0x14060EE3C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoAllocateMiniCompletionPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1;
  LOBYTE(a1) = 4;
  result = IopAllocateMiniCompletionPacket(a1, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 56) = v3;
    *(_QWORD *)(result + 64) = a2;
    *(_BYTE *)(result + 72) = 1;
  }
  return result;
}
