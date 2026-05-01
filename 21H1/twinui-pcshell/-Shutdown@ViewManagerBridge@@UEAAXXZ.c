/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x1802A0C50
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x1802848B0 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     IsNAVShutdownPresent @ 0x18008F2C4 (IsNAVShutdownPresent.c)
 *     ?Shutdown@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802A0C90 (-Shutdown@ViewManagerInteropTraceLogging@@SAXXZ.c)
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
