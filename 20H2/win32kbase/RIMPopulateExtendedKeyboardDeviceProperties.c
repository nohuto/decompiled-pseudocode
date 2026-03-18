/*
 * XREFs of RIMPopulateExtendedKeyboardDeviceProperties @ 0x1C0008D70
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 * Callees:
 *     ?ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z @ 0x1C0009530 (-ReadDevicePropertyFromRegistry@@YA_NPEBGPEAX1JPEAJ@Z.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0009DCC (RIMRegOpenDeviceInstanceKey.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMPopulateExtendedKeyboardDeviceProperties(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  int v6; // edi
  void *v7; // rsi
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = (void *)RIMRegOpenDeviceInstanceKey(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    v9 = 1;
    if ( ReadDevicePropertyFromRegistry(L"HasPhysicalKeys", v5, 0LL, 1, &v9) )
    {
      LOBYTE(v6) = v9 == 0;
      *(_DWORD *)(a1 + 500) = v6 | *(_DWORD *)(a1 + 500) & 0xFFFFFFFE;
    }
    LODWORD(v5) = ZwClose(v7);
  }
  return (int)v5;
}
