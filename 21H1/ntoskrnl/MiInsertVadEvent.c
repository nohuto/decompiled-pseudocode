/*
 * XREFs of MiInsertVadEvent @ 0x1402A120C
 * Callers:
 *     MiWaitForVadDeletion @ 0x140556320 (MiWaitForVadDeletion.c)
 *     MiAddSecureEntry @ 0x140631F10 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiCreateVadEventBitmap @ 0x1406CED78 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406E7820 (MiCreateRotateView.c)
 *     MiCreateUserPhysicalView @ 0x1408D1258 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D3988 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x1408D5614 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
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
    v5 = &dword_140C4F6C0;
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
