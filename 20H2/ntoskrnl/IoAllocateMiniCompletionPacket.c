/*
 * XREFs of IoAllocateMiniCompletionPacket @ 0x14070AE10
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14070AD3C (AlpcpAllocateCompletionPacketLookaside.c)
 * Callees:
 *     IopAllocateMiniCompletionPacket @ 0x14070AE4C (IopAllocateMiniCompletionPacket.c)
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
