/*
 * XREFs of PlugPlayGetDeviceStatus @ 0x1406FBB54
 * Callers:
 *     PiPnpRtlGetDeviceStatus @ 0x1406FBB20 (PiPnpRtlGetDeviceStatus.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x1403F5C00 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PlugPlayGetDeviceStatus(__int128 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  __int128 v8; // xmm0
  NTSTATUS result; // eax
  __int128 PnPControlData; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+34h] [rbp-24h]
  int v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+44h] [rbp-14h]

  if ( !a1 || !a2 || !a3 || !a4 )
    return -1073741811;
  v8 = *a1;
  v16 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  PnPControlData = v8;
  v14 = a5;
  result = ZwPlugPlayControl(PlugPlayControlDeviceStatus, &PnPControlData, 0x28u);
  if ( result >= 0 )
  {
    *a2 = v12;
    *a3 = v13;
    *a4 = v15;
  }
  return result;
}
