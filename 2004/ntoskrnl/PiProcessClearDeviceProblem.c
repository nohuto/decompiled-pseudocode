/*
 * XREFs of PiProcessClearDeviceProblem @ 0x14071F3E8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14071F5B4 (PipIsProblemReadonly.c)
 *     PipClearDevNodeFlags @ 0x140726F44 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  bool v9; // zf
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v4 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v5 = v4[75];
  if ( ((v5 - 769) & 0xFFFFFFEE) == 0 && v5 != 785 )
  {
    v6 = v4[99];
    if ( (v6 & 0x6000) == 0 )
      return v2;
    v7 = *(_DWORD *)(a1 + 24);
    switch ( v7 )
    {
      case 1:
        if ( (unsigned int)PipIsProblemReadonly(v4, (unsigned int)v4[101]) )
          return (unsigned int)-1073741584;
        goto LABEL_6;
      case 3:
        if ( (v6 & 0x2000) == 0 )
          return (unsigned int)-1073741808;
        v9 = v4[101] == 47;
        break;
      case 25:
        if ( (v6 & 0x2000) == 0 )
          return (unsigned int)-1073741808;
        v9 = v4[101] == 55;
        break;
      default:
        goto LABEL_6;
    }
    if ( !v9 )
      return (unsigned int)-1073741808;
LABEL_6:
    PiPnpRtlBeginOperation(&P);
    PipClearDevNodeFlags(v4, 0x4000LL);
    PipClearDevNodeProblem(v4);
    if ( v4[75] != 769 )
      PnpRestartDeviceNode(v4);
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
    return v2;
  }
  if ( (unsigned int)(v5 - 787) <= 1 )
    return (unsigned int)-1073741738;
  return v2;
}
