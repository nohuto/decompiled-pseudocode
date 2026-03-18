/*
 * XREFs of MiExceptionForMappedVa @ 0x140527508
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rsi
  _KPROCESS *Process; // rbp
  __int64 i; // rax
  __int64 v6; // rdi
  unsigned __int8 v7; // al
  __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned int v11; // ebx

  v1 = 0;
  v3 = &unk_140C4CCA8;
  Process = KeGetCurrentThread()->ApcState.Process;
  for ( i = (__int64)MiGetAnyMultiplexedVm(1); ; i = MiGetSessionVm() )
  {
    v6 = i;
    v7 = MiLockWorkingSetShared(i);
    v8 = (__int64 *)v3[2];
    while ( v8 )
    {
      v9 = v8[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= v9 + v8[4] )
      {
        v8 = (__int64 *)v8[1];
      }
      else
      {
        if ( a1 >= v9 )
        {
          v11 = *((_DWORD *)v8 + 14);
          MiUnlockWorkingSetShared(v6, v7);
          return (v11 >> 1) & 1;
        }
        v8 = (__int64 *)*v8;
      }
    }
    MiUnlockWorkingSetShared(v6, v7);
    if ( v3 != (_QWORD *)&unk_140C4CCA8 )
      break;
    v10 = Process[1].AffinityPadding[5];
    if ( !v10 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      break;
    v3 = (_QWORD *)(v10 + 192);
  }
  return v1;
}
