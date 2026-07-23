/*
 * XREFs of MiOutSwapWorkingSet @ 0x1402A1D58
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1402A0C0C (MmOutSwapVirtualAddresses.c)
 *     MiOutSwapKernelStackPage @ 0x1402A1610 (MiOutSwapKernelStackPage.c)
 *     MmOutSwapWorkingSet @ 0x1402A1700 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  bool v10; // zf
  __int64 SharedVm; // rbx
  KIRQL v12; // al
  __int64 v13; // rdx
  __int64 result; // rax
  _QWORD v15[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v15, 0, sizeof(v15));
  v10 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v15[19] = &MiOutSwapWorkingSetPte;
  LOWORD(v15[0]) = 129;
  v15[3] = a1;
  v15[21] = a5;
  if ( v10 )
  {
    v15[4] = a3;
    LOWORD(v15[0]) = 131;
    v15[5] = a4;
    SharedVm = MiGetSharedVm(a1, v9);
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v13 = *(unsigned int *)(a2 + 48);
    BYTE6(v15[0]) = v12;
    if ( (v13 & 4) != 0 )
    {
      LOBYTE(v13) = v12;
      return MiUnlockWorkingSetExclusive(a1, v13);
    }
  }
  else
  {
    BYTE6(v15[0]) = 17;
  }
  result = MiWalkPageTables(v15);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return result;
  LOBYTE(v13) = BYTE6(v15[0]);
  return MiUnlockWorkingSetExclusive(a1, v13);
}
