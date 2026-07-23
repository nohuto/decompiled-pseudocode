/*
 * XREFs of MiSetTrimWhileAgingState @ 0x140250EBC
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x140250E2C (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBE74 (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSetTrimWhileAgingState(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 SharedVm; // rdi
  KIRQL v6; // r9
  __int64 v7; // rdx
  int v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v2 = *(_QWORD *)(a1 + 6848);
  v3 = a1 + 7232;
  v4 = a2;
  SharedVm = MiGetSharedVm(a1 + 7232, a2);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v7 = v4;
  *(_DWORD *)(SharedVm + 4) = 0;
  if ( !v4 )
  {
    *(_QWORD *)(v2 + 72) = 0LL;
    goto LABEL_9;
  }
  v7 = (unsigned int)v4 - 1;
  if ( v4 == 1 )
  {
    *(_QWORD *)(v2 + 64) = -1LL;
    *(_QWORD *)(v2 + 72) = 204800LL;
    goto LABEL_6;
  }
  v7 = (unsigned int)v4 - 2;
  if ( v4 == 2 )
  {
    *(_QWORD *)(v2 + 72) = 204800LL;
    *(_QWORD *)(v2 + 64) = 51200LL;
    goto LABEL_6;
  }
  v7 = (unsigned int)v4 - 3;
  if ( v4 != 3 )
  {
    if ( v4 != 4 )
      goto LABEL_6;
    *(_QWORD *)(v2 + 72) = 384000LL;
LABEL_9:
    *(_QWORD *)(v2 + 64) = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)(v2 + 72) = 204800LL;
  *(_QWORD *)(v2 + 64) = 12800LL;
LABEL_6:
  LOBYTE(v7) = v6;
  *(_WORD *)(v2 + 2350) = *(_WORD *)((char *)&v9 + 1);
  *(_DWORD *)(v2 + 80) = v4;
  return MiUnlockWorkingSetExclusive(v3, v7);
}
