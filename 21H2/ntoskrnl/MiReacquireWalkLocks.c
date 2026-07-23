/*
 * XREFs of MiReacquireWalkLocks @ 0x140530920
 * Callers:
 *     MiQueryEPTAccessedState @ 0x14053BC40 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  int v5; // ebp
  unsigned __int64 valid; // rax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a3;
  if ( !(_DWORD)a3 )
    MiLockWorkingSetShared(v4, a2, a3, a4);
  valid = MiLockLowestValidPageTable(v4, a2 << 25 >> 16, &v10);
  if ( valid == a2 )
  {
    *(_BYTE *)(a1 + 2) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    MiUnlockPageTableInternal(v4, valid);
    if ( !v5 )
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 6));
    return 0LL;
  }
  return result;
}
