/*
 * XREFs of MiDereferenceSession @ 0x1406B48A8
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x140778320 (MiDereferenceSessionFinal.c)
 */

__int64 MiDereferenceSession()
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)Process[1].AffinityPadding[5], 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = MiDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
