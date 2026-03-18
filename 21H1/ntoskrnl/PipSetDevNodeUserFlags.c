/*
 * XREFs of PipSetDevNodeUserFlags @ 0x1407316A8
 * Callers:
 *     PiProcessSetDeviceProblem @ 0x14071D584 (PiProcessSetDeviceProblem.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407201FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpTrackQueryRemoveDevices @ 0x1407204D0 (PnpTrackQueryRemoveDevices.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PiProcessQueryDeviceState @ 0x14072E914 (PiProcessQueryDeviceState.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PnpShutdownDevices @ 0x14089752C (PnpShutdownDevices.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14072B6D0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeUserFlags(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 400) = a2 | v2;
  result = v2 ^ (a2 | v2);
  if ( (((unsigned __int16)v2 ^ (unsigned __int16)(a2 | v2)) & 0x347) != 0 )
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
      v7 = v2 ^ (unsigned int)v6;
      if ( (v7 & 4) != 0 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return result;
}
