/*
 * XREFs of MiExceptionForMappedVa @ 0x140593A80
 * Callers:
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r8

  v2 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v4 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v5 = P;
  while ( v5 )
  {
    v6 = v5[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( a1 < v6 + v5[4] )
    {
      if ( a1 >= v6 )
      {
        if ( (v5[7] & 2) != 0 )
          v2 = 1;
        break;
      }
      v5 = (_QWORD *)*v5;
    }
    else
    {
      v5 = (_QWORD *)v5[1];
    }
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v4);
  return v2;
}
