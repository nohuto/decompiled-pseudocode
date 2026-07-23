/*
 * XREFs of MiQueryEPTAccessedState @ 0x14053BC40
 * Callers:
 *     MiTrimWorkingSetTail @ 0x1402551F0 (MiTrimWorkingSetTail.c)
 *     MiAgeWorkingSetTail @ 0x1402D2CB0 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14039D6D0 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053C210 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14053C9C0 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402286D0 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x140530920 (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x1405A4E1C (VmpQueryAccessedState.c)
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
