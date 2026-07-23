/*
 * XREFs of MiExceptionForMappedVa @ 0x14052D268
 * Callers:
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rsi
  _KPROCESS *Process; // rbp
  __int64 i; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rdi
  unsigned __int8 v10; // al
  __int64 *v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx

  v1 = 0;
  v3 = &unk_140C4CDA8;
  Process = KeGetCurrentThread()->ApcState.Process;
  for ( i = (__int64)MiGetAnyMultiplexedVm(1); ; i = MiGetSessionVm() )
  {
    v9 = i;
    v10 = MiLockWorkingSetShared(i, v6, v7, v8);
    v11 = (__int64 *)v3[2];
    while ( v11 )
    {
      v12 = v11[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= v12 + v11[4] )
      {
        v11 = (__int64 *)v11[1];
      }
      else
      {
        if ( a1 >= v12 )
        {
          v14 = *((_DWORD *)v11 + 14);
          MiUnlockWorkingSetShared(v9, v10);
          return (v14 >> 1) & 1;
        }
        v11 = (__int64 *)*v11;
      }
    }
    MiUnlockWorkingSetShared(v9, v10);
    if ( v3 != (_QWORD *)&unk_140C4CDA8 )
      break;
    v13 = Process[1].AffinityPadding[5];
    if ( !v13 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      break;
    v3 = (_QWORD *)(v13 + 192);
  }
  return v1;
}
