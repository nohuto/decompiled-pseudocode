/*
 * XREFs of ExSaAllocate @ 0x1402A012C
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x140259EC4 (ExpAllocateFannedOutPushLock.c)
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExpSaAllocatorAllocate @ 0x14029FDC4 (ExpSaAllocatorAllocate.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r8
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  struct _KTHREAD *v7; // rcx

  v2 = a1;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  v3 = ExSaNonPagedSlotAllocator;
  if ( (a2 & 1) != 0 )
    v3 = ExSaPagedSlotAllocator;
  v4 = -1LL;
  if ( v3 )
  {
    if ( (unsigned int)v2 <= 0x1000 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v6 = ExpSaAllocatorAllocate(v3, (unsigned __int64)(v2 + 7) >> 3, v2);
      v7 = KeGetCurrentThread();
      v4 = v6;
      if ( v7->SpecialApcDisable++ == -1
        && ($CEA84C04E3712D858E5667A507841A2A *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v4;
}
