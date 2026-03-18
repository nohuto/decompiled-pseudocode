/*
 * XREFs of MiOutSwapWorkingSet @ 0x14030E3BC
 * Callers:
 *     MiOutSwapKernelStackPage @ 0x14030DC74 (MiOutSwapKernelStackPage.c)
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void __fastcall MiOutSwapWorkingSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  LONG *SharedVm; // rbx
  KIRQL v11; // al
  int v12; // edx
  unsigned __int8 v13; // dl
  _QWORD v14[22]; // [rsp+20h] [rbp-91h] BYREF

  memset(v14, 0, sizeof(v14));
  v9 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v14[19] = MiOutSwapWorkingSetPte;
  LOWORD(v14[0]) = 129;
  v14[3] = a1;
  v14[21] = a5;
  if ( v9 )
  {
    v14[4] = a3;
    LOWORD(v14[0]) = 131;
    v14[5] = a4;
    SharedVm = MiGetSharedVm(a1);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v12 = *(_DWORD *)(a2 + 48);
    BYTE6(v14[0]) = v11;
    if ( (v12 & 4) != 0 )
    {
      v13 = v11;
      goto LABEL_5;
    }
  }
  else
  {
    BYTE6(v14[0]) = 17;
  }
  MiWalkPageTables((__int16 *)v14);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return;
  v13 = BYTE6(v14[0]);
LABEL_5:
  MiUnlockWorkingSetExclusive(a1, v13);
}
