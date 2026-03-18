/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x14022E848
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x14022E830 (KeRestoreExtendedProcessorState.c)
 *     DifKeRestoreExtendedProcessorStateWrapper @ 0x140615470 (DifKeRestoreExtendedProcessorStateWrapper.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     RtlXRestoreS @ 0x14022E800 (RtlXRestoreS.c)
 *     RtlXRestore @ 0x14022E984 (RtlXRestore.c)
 *     KeFreeXStateContext @ 0x14022E9C8 (KeFreeXStateContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall KeRestoreExtendedAndSupervisorState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r10
  struct _KTHREAD *CurrentThread; // r9
  __int16 v4; // r11
  unsigned __int8 v5; // al
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // zf
  $CEA84C04E3712D858E5667A507841A2A *v11; // rax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  v4 = 1;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v5 = CurrentIrql + 1;
  else
    v5 = 0;
  v6 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v6 != v5 )
    KeBugCheckEx(0x131u, 4uLL, v6, v5, 0LL);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (struct _KTHREAD *)v7 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v7, (ULONG_PTR)CurrentThread, 0LL);
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)a1;
  v8 = *(_QWORD *)(a1 + 24);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v9 = KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8];
    else
      v9 = MEMORY[0xFFFFF780000003D8];
    v10 = (~v9 & v8) == 0;
  }
  else
  {
    v10 = (v8 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  LOBYTE(v11) = !v10;
  if ( !v10 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v8, HIDWORD(v8));
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      LOBYTE(v11) = RtlXRestoreS(*(_QWORD *)(a1 + 40), v8);
      goto LABEL_22;
    }
    LOBYTE(v11) = RtlXRestore(*(_QWORD *)(a1 + 40), v8, v7);
  }
  if ( CurrentIrql < (unsigned __int8)v4 )
  {
    v10 = v4 + CurrentThread->SpecialApcDisable == 0;
    CurrentThread->SpecialApcDisable += v4;
    if ( v10 )
    {
      v11 = &CurrentThread->152;
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v11->ApcState.ApcListHead[0].Flink != v11 )
        LOBYTE(v11) = KiCheckForKernelApcDelivery();
    }
  }
LABEL_22:
  if ( *(_QWORD *)(a1 + 48) )
    LOBYTE(v11) = KeFreeXStateContext(a1 + 24);
  return (char)v11;
}
