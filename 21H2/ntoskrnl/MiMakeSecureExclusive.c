/*
 * XREFs of MiMakeSecureExclusive @ 0x1402476B0
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiMakeSecureExclusive(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 *v4; // rbp
  _KPROCESS *Process; // r14
  __int64 SharedVm; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 *i; // rcx

  v3 = 0;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessorsPadding[6], a2);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  for ( i = *(__int64 **)(a1 + 56); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 )
    {
      if ( v4 )
        goto LABEL_8;
      v4 = i;
    }
  }
  *((_DWORD *)v4 + 2) |= 0x20u;
  v3 = 1;
LABEL_8:
  LOBYTE(v8) = v7;
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], v8);
  return v3;
}
