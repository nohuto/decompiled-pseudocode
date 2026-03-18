/*
 * XREFs of MiSetTrimWhileAgingState @ 0x14033B678
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x14033B7C4 (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB334 (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  LONG *SharedVm; // rdi
  KIRQL v6; // r9

  v2 = *(_QWORD *)(a1 + 6848);
  v3 = a1 + 7232;
  v4 = a2;
  SharedVm = MiGetSharedVm(a1 + 7232);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  switch ( v4 )
  {
    case 0u:
      *(_QWORD *)(v2 + 72) = 0LL;
      goto LABEL_9;
    case 1u:
      *(_QWORD *)(v2 + 64) = -1LL;
      *(_QWORD *)(v2 + 72) = 204800LL;
      goto LABEL_6;
    case 2u:
      *(_QWORD *)(v2 + 72) = 204800LL;
      *(_QWORD *)(v2 + 64) = 51200LL;
      goto LABEL_6;
  }
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
  *(_WORD *)(v2 + 2350) = *(_WORD *)((char *)&a2 + 1);
  *(_DWORD *)(v2 + 80) = v4;
  MiUnlockWorkingSetExclusive(v3, v6);
}
