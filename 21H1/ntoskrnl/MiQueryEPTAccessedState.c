/*
 * XREFs of MiQueryEPTAccessedState @ 0x140535EE0
 * Callers:
 *     MiAgeWorkingSetTail @ 0x140279300 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x14034E560 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039A060 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1405364B0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140536C60 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402FC23C (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x14052ABC0 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x14059F02C (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1, (__int64)a2, a3);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[5]);
  result = MiReacquireWalkLocks(a1, v3, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
