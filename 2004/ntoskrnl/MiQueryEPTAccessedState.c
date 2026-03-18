/*
 * XREFs of MiQueryEPTAccessedState @ 0x140536530
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402202B0 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x1402D3C30 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039A7F0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x140536B00 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1405372B0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140339578 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x14052B210 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14059F71C (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5]);
  result = MiReacquireWalkLocks(a1, v2, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
