/*
 * XREFs of MiQueryEPTAccessedState @ 0x140539F00
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402EA020 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x140343CE0 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039D940 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053A4D0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053AC80 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x14030BCFC (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x14052EBE0 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x1405A31BC (VmpQueryAccessedState.c)
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
