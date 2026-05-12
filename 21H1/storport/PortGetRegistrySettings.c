/*
 * XREFs of PortGetRegistrySettings @ 0x1C007B33C
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0078154 (RaidInitializeAdapter.c)
 * Callees:
 *     PortOpenDeviceKey @ 0x1C007B3CC (PortOpenDeviceKey.c)
 *     PortReadRegistrySettings @ 0x1C007B4D4 (PortReadRegistrySettings.c)
 */

int __fastcall PortGetRegistrySettings(__int64 a1, unsigned int a2)
{
  void *v4; // rax
  void *v5; // rbx
  void *v6; // rax
  void *v7; // rbx

  v4 = (void *)PortOpenDeviceKey(a1, 0xFFFFFFFFLL);
  v5 = v4;
  if ( v4 )
  {
    PortReadRegistrySettings(v4);
    ZwClose(v5);
  }
  v6 = (void *)PortOpenDeviceKey(a1, a2);
  v7 = v6;
  if ( v6 )
  {
    PortReadRegistrySettings(v6);
    LODWORD(v6) = ZwClose(v7);
  }
  return (int)v6;
}
