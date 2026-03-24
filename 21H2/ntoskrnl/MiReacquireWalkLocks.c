/*
 * XREFs of MiReacquireWalkLocks @ 0x1405306E0
 * Callers:
 *     MiQueryEPTAccessedState @ 0x14053BA00 (MiQueryEPTAccessedState.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
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
