/*
 * XREFs of ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800841D0
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180084970 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800839D0 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083A08 (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083B58 (-LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083C6C (-LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180083D30 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180084274 (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800843C4 (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
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
