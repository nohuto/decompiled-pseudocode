/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C002121C
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C0021940 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00221DC (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1)
{
  void *v2; // rax
  int v3; // edi
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v2 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    v6 = 1;
    if ( ReadDevicePropertyFromRegistry(L"HasPhysicalKeys", v2, 0LL, 1, &v6) )
    {
      LOBYTE(v3) = v6 == 0;
      *(_DWORD *)(a1 + 500) = v3 | *(_DWORD *)(a1 + 500) & 0xFFFFFFFE;
    }
    LODWORD(v2) = ZwClose(v4);
  }
  return (int)v2;
}
