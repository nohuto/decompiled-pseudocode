/*
 * XREFs of PipProcessRestartPhase1 @ 0x14095B2D4
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpUnlockMountableDevice @ 0x1403A01B0 (PnpUnlockMountableDevice.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405643B8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int started; // edi

  v3 = a3;
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Start,
      a3,
      1,
      *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    started = PnpStartDeviceNode(a1, 1, a2);
    if ( (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x1000000);
    }
  }
  if ( (byte_140C0DD4B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Stop,
      a3,
      1,
      *(const wchar_t **)(a1 + 48));
  return started;
}
