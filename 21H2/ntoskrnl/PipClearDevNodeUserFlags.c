/*
 * XREFs of PipClearDevNodeUserFlags @ 0x14074A08C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResources @ 0x140749294 (PnpProcessAssignResources.c)
 *     PiProcessQueryDeviceState @ 0x140749F30 (PiProcessQueryDeviceState.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1409473F0 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140947628 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x140950DA4 (PnpTrackQueryRemoveDevices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipClearDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  v3 = v2 & ~a2;
  *(_DWORD *)(a1 + 400) = v3;
  if ( (((unsigned __int16)v2 ^ (unsigned __int16)v3) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11LL);
      v6 = *(unsigned int *)(a1 + 400);
      result = v2 ^ *(_DWORD *)(a1 + 400);
      if ( (((unsigned __int8)v2 ^ *(_BYTE *)(a1 + 400)) & 0x40) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29LL);
        LODWORD(v6) = *(_DWORD *)(a1 + 400);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 30LL);
    }
  }
  return result;
}
