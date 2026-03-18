/*
 * XREFs of MiOutSwapWorkingSet @ 0x1402608AC
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x140260054 (MiOutSwapKernelStackPage.c)
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x140375974 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  __int64 result; // rax
  __int64 SharedVm; // rbx
  KIRQL v12; // al
  __int64 v13; // rdx
  _QWORD v14[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[19] = &MiOutSwapWorkingSetPte;
  v14[3] = a1;
  v14[21] = a5;
  LODWORD(v14[0]) = 129;
  if ( v9 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (result & 4) != 0 )
      return result;
    LODWORD(v14[0]) = 131;
    v14[4] = a3;
    v14[5] = a4;
    SharedVm = MiGetSharedVm(a1);
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    HIBYTE(v14[0]) = v12;
  }
  else
  {
    HIBYTE(v14[0]) = 17;
  }
  result = MiWalkPageTables(v14);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    LOBYTE(v13) = HIBYTE(v14[0]);
    return MiUnlockWorkingSetExclusive(a1, v13);
  }
  return result;
}
