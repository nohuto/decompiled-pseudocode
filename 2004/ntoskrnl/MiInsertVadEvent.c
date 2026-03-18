/*
 * XREFs of MiInsertVadEvent @ 0x1402481DC
 * Callers:
 *     MiWaitForVadDeletion @ 0x140556970 (MiWaitForVadDeletion.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiCreateVadEventBitmap @ 0x1406F007C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x14070B750 (MiCreateRotateView.c)
 *     MiCreateUserPhysicalView @ 0x1408D25A8 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D4CD8 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x1408D6964 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiInsertVadEvent(__int64 a1, _QWORD *a2, int a3)
{
  LONG *v5; // rdi
  _KPROCESS *Process; // rbx
  char v7; // al
  __int64 v8; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // dl

  if ( a3 == 1 )
  {
    v5 = &dword_140C4F580;
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = Process[1].IdealProcessorPadding[10];
    v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
    if ( (v7 & 7) != 2 )
      v5 = (LONG *)(v8 + 192);
    v9 = ExAcquireSpinLockExclusive(v5);
    v5[1] = 0;
    v10 = v9;
  }
  else
  {
    v10 = 17;
    v8 = 0LL;
  }
  *a2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = a2;
  if ( v10 != 17 )
    MiUnlockWorkingSetExclusive(v8, v10);
}
