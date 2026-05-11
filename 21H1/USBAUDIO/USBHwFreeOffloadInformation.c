/*
 * XREFs of USBHwFreeOffloadInformation @ 0x1C002DB0C
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D22C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBType1RenderClosePin @ 0x1C0032860 (USBType1RenderClosePin.c)
 *     USBCaptureClosePin @ 0x1C0032F80 (USBCaptureClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreeOffloadInformation(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  void *v3; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 80);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  v3 = *(void **)(v1 + 88);
  if ( v3 )
  {
    ExFreePool(v3);
    *(_QWORD *)(v1 + 88) = 0LL;
  }
}
