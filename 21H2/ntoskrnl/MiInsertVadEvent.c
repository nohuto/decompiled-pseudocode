/*
 * XREFs of MiInsertVadEvent @ 0x14027CF2C
 * Callers:
 *     MiWaitForVadDeletion @ 0x14055C050 (MiWaitForVadDeletion.c)
 *     MiCreateVadEventBitmap @ 0x1405FE810 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x14061CAB0 (MiCreateRotateView.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x140689430 (MiAddSecureEntry.c)
 *     MiCreateUserPhysicalView @ 0x1408D5D08 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x1408DA0C4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rsi
  LONG *v5; // rdi
  _KPROCESS *Process; // rbx
  char v7; // al
  unsigned __int64 *v8; // rbx
  KIRQL v9; // al
  __int64 result; // rax

  v3 = a2;
  if ( a3 == 1 )
  {
    v5 = &dword_140C4F7C0;
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = Process[1].IdealProcessorPadding[10];
    v8 = &Process[1].ActiveProcessorsPadding[6];
    if ( (v7 & 7) != 2 )
      v5 = (LONG *)(v8 + 24);
    v9 = ExAcquireSpinLockExclusive(v5);
    v5[1] = 0;
    LOBYTE(a2) = v9;
  }
  else
  {
    LOBYTE(a2) = 17;
    v8 = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *v3 = result;
  *(_QWORD *)(a1 + 56) = v3;
  if ( (_BYTE)a2 != 17 )
    return MiUnlockWorkingSetExclusive(v8, a2);
  return result;
}
