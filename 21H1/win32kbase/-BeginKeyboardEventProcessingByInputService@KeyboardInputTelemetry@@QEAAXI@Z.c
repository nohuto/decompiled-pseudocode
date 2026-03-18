/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001820
 * Callers:
 *     DeferSysPeekMsg @ 0x1C0001010 (DeferSysPeekMsg.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00019E0 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C0255998 )
    memset(&dword_1C0255918, 0, 0x80uLL);
  if ( dword_1C025599C != a2 )
  {
    if ( dword_1C025599C )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      memset(&dword_1C0255918, 0, 0x80uLL);
    }
    dword_1C025599C = a2;
    if ( gptiForeground )
    {
      v3 = *((_QWORD *)gptiForeground + 52);
      if ( v3 )
      {
        if ( dword_1C0255998 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C0255998 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(
            &word_1C02558F8,
            0x10uLL,
            (const unsigned __int16 *)(*((_QWORD *)gptiForeground + 52) + 992LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry = KeQueryPerformanceCounter(0LL).QuadPart;
}
