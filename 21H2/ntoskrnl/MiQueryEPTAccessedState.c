/*
 * XREFs of MiQueryEPTAccessedState @ 0x14053BA00
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14022E460 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x140267250 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039D580 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053BFD0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053C780 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402AA590 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x1405306E0 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x1405A4BEC (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5]);
  result = MiReacquireWalkLocks(a1, v2, 0LL, v5);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
