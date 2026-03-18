/*
 * XREFs of MiSelectRelocationStartHint @ 0x140709C0C
 * Callers:
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x1407095A8 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlCopyBitMapEx @ 0x140230180 (RtlCopyBitMapEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlFindClearBitsEx @ 0x14030B090 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlMergeBitMapsEx @ 0x1403D5CAC (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 ClearBits; // rsi

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F300, 0LL);
  }
  RtlCopyBitMapEx(*(unsigned __int64 **)a1, &qword_140C4F388, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4F388, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4F388, v6, a3);
  if ( !a4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F300);
    KeAbPostRelease((ULONG_PTR)&qword_140C4F300);
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return ClearBits;
}
