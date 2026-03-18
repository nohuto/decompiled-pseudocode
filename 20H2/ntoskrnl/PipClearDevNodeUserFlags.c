/*
 * XREFs of PipClearDevNodeUserFlags @ 0x140739390
 * Callers:
 *     PnpRestartDeviceNode @ 0x14072D508 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407301CC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x1407304A0 (PnpTrackQueryRemoveDevices.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14073859C (PnpProcessAssignResources.c)
 *     PiProcessQueryDeviceState @ 0x140739218 (PiProcessQueryDeviceState.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140734FA0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v6 = *(unsigned int *)(a1 + 400);
      result = v2 ^ *(_DWORD *)(a1 + 400);
      if ( (((unsigned __int8)v2 ^ *(_BYTE *)(a1 + 400)) & 0x40) != 0 )
      {
        result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29);
        LODWORD(v6) = *(_DWORD *)(a1 + 400);
      }
      v8 = v2 ^ (unsigned int)v6;
      if ( (v8 & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return result;
}
