/*
 * XREFs of ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x180083C80
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180084420 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180083480 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800834B8 (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083608 (-LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18008371C (-LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800837E0 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083D24 (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083E74 (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 */

void __fastcall ISMTracing::LogMPCInputReport_(ISMTracing *this, struct InputInfo *a2, const bool *a3)
{
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
    {
      ISMTracing::LogMPCHandInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x40000) != 0 )
    {
      ISMTracing::LogMPCVoiceInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      ISMTracing::LogMPCClickerInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
    {
      ISMTracing::LogMPCSpatialControllerInputReport(a2, a3);
    }
    else if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      ISMTracing::LogMPCGenericInputReport(a2, a3);
    }
    else if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      ISMTracing::LogMPCGameControllerInputReport(a2, a3);
    }
  }
}
