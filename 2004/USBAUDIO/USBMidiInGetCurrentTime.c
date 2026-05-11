/*
 * XREFs of USBMidiInGetCurrentTime @ 0x1C0003D50
 * Callers:
 *     UsbHwFrameCountTimestamp @ 0x1C0003DAC (UsbHwFrameCountTimestamp.c)
 *     USBHwGetClockRatio @ 0x1C0003F14 (USBHwGetClockRatio.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C0004794 (USBType1AdjustPositionWithin1Ms.c)
 *     USBType1RenderBytePosition @ 0x1C0004870 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x1C00073F0 (USBCaptureBytePosition.c)
 *     USBMIDIInReQueueUrb @ 0x1C0007910 (USBMIDIInReQueueUrb.c)
 *     USBMidiInStateChangePin @ 0x1C0007F30 (USBMidiInStateChangePin.c)
 * Callees:
 *     <none>
 */

unsigned __int64 USBMidiInGetCurrentTime()
{
  LARGE_INTEGER v0; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v0 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return ((10000000 * HIDWORD(v0.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
       + (((10000000 * HIDWORD(v0.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
        + 10000000LL * v0.LowPart)
       / PerformanceFrequency.QuadPart;
}
