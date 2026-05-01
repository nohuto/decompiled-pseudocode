/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x1802C1F00
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x1802A5C20 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     IsNAVShutdownPresent @ 0x18008F734 (IsNAVShutdownPresent.c)
 *     ?Shutdown@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C1F40 (-Shutdown@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

void __fastcall ViewManagerBridge::Shutdown(ViewManagerBridge *this)
{
  ViewManagerInteropTraceLogging::Shutdown();
  if ( IsNAVShutdownPresent() )
  {
    if ( !*((_BYTE *)this + 145) )
    {
      *((_BYTE *)this + 144) = 1;
      NAVShutdown();
    }
  }
}
