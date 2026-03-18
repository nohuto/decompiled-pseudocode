/*
 * XREFs of MiReacquireWalkLocks @ 0x14052ABC0
 * Callers:
 *     MiQueryEPTAccessedState @ 0x140535EE0 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 valid; // rax
  __int64 v8; // r8
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
    MiLockWorkingSetShared(v3);
  valid = MiLockLowestValidPageTable(v3, a2 << 25 >> 16, &v10);
  if ( valid == a2 )
  {
    *(_BYTE *)(a1 + 2) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    MiUnlockPageTableInternal(v3, valid, v8);
    if ( !a3 )
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 6));
    return 0LL;
  }
  return result;
}
