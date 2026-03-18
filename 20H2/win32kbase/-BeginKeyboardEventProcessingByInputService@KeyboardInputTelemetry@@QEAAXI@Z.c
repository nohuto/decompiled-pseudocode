/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001970
 * Callers:
 *     DeferSysPeekMsg @ 0x1C0001160 (DeferSysPeekMsg.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0001B30 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C024DA08 )
    memset(&dword_1C024D988, 0, 0x80uLL);
  if ( dword_1C024DA0C != a2 )
  {
    if ( dword_1C024DA0C )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this);
      memset(&dword_1C024D988, 0, 0x80uLL);
    }
    dword_1C024DA0C = a2;
    if ( gptiForeground )
    {
      v3 = *((_QWORD *)gptiForeground + 53);
      if ( v3 )
      {
        if ( dword_1C024DA08 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C024DA08 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(
            &word_1C024D968,
            0x10uLL,
            (const unsigned __int16 *)(*((_QWORD *)gptiForeground + 53) + 992LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry = KeQueryPerformanceCounter(0LL).QuadPart;
}
