/*
 * XREFs of ViPoolLogStackTrace @ 0x1409E33A8
 * Callers:
 *     VfAllocPoolNotification @ 0x1409E2FC4 (VfAllocPoolNotification.c)
 *     VfFreePoolNotification @ 0x1409E3084 (VfFreePoolNotification.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AD3D0 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405842B4 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPoolLogStackCallout @ 0x1409C8950 (ViPoolLogStackCallout.c)
 */

void __fastcall ViPoolLogStackTrace(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( VfPoolTraces )
  {
    v2 = VfPoolTraces
       + ((unsigned __int64)(_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1)) << 7);
    *(_QWORD *)(v2 + 16) = KeGetCurrentThread();
    *(_QWORD *)v2 = a1;
    *(_QWORD *)(v2 + 8) = a2;
    if ( (VfOptionFlags & 2) != 0 )
    {
LABEL_3:
      *(_QWORD *)(v2 + 24) = 0LL;
      return;
    }
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
    {
      ViPoolLogStackCallout((PVOID *)v2);
    }
    else if ( KeExpandKernelStackAndCalloutEx(
                (PEXPAND_STACK_CALLOUT)ViPoolLogStackCallout,
                (PVOID)v2,
                0xE30uLL,
                1u,
                0LL) < 0 )
    {
      goto LABEL_3;
    }
  }
}
