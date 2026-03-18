/*
 * XREFs of MiQueryEPTAccessedState @ 0x14045BCA2
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402F3AD0 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x1403737D0 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x1403CA3D0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14045BD30 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14045BF60 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402341A4 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x14027D2D8 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14062B7FC (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5]);
  result = MiReacquireWalkLocks(a1, v2, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
