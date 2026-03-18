/*
 * XREFs of MiEncodeProtoFill @ 0x14023FBE4
 * Callers:
 *     MiInitializePrototypePtes @ 0x1406F4768 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 AnyMultiplexedVm; // rbp
  __int64 v8; // rdx
  char v9; // r15

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  v9 = MiLockWorkingSetShared(AnyMultiplexedVm);
  if ( v4 >= v6 )
    goto LABEL_7;
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(AnyMultiplexedVm, v5, 0LL);
LABEL_4:
    *(_QWORD *)v4 = a3;
    v4 += 8LL;
  }
  while ( v4 < v6 );
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
LABEL_7:
  LOBYTE(v8) = v9;
  return MiUnlockWorkingSetShared(AnyMultiplexedVm, v8);
}
