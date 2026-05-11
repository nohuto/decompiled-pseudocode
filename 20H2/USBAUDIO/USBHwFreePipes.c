/*
 * XREFs of USBHwFreePipes @ 0x1C002E004
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D75C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002DC7C (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderClosePin @ 0x1C0032EC0 (USBType1RenderClosePin.c)
 *     USBCaptureClosePin @ 0x1C00335E0 (USBCaptureClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreePipes(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 72);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 72) = 0LL;
  }
}
