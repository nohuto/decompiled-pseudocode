/*
 * XREFs of MiInsertVadEvent @ 0x14022D57C
 * Callers:
 *     MiWaitForVadDeletion @ 0x14055A340 (MiWaitForVadDeletion.c)
 *     MiAddSecureEntry @ 0x140623880 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiCreateVadEventBitmap @ 0x1406C3B04 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406DD978 (MiCreateRotateView.c)
 *     MiCreateUserPhysicalView @ 0x1408D83E8 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x1408DAB18 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x1408DC7A4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
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
    v5 = &dword_140C4F600;
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
