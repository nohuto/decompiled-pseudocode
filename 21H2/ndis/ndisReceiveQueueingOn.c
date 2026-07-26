/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C00A3ED4
 * Callers:
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020550 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A4090 (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A4200 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2665) = 0;
  *(_QWORD *)(a1 + 2136) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3160) = qword_1C00E40D8;
  ++dword_1C00E40E0;
  qword_1C00E40D8 = (void *)a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3220) == 1) + 1;
  *(_DWORD *)(a1 + 3168) = result;
  if ( BYTE2(dword_1C00E6150) )
  {
    LOBYTE(a2) = 1;
    return ndisTracePeriodicRcvOnOff(a1, a2, (unsigned int)dword_1C00E40C4, qword_1C00E40E8);
  }
  return result;
}
