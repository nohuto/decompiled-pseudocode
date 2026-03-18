/*
 * XREFs of PiProcessClearDeviceProblem @ 0x140660388
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140660534 (PipIsProblemReadonly.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
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
  if ( v5 != 788 && (unsigned int)(v5 - 769) > 3 )
  {
    if ( (unsigned int)(v5 - 789) <= 1 )
      return (unsigned int)-1073741738;
    return v2;
  }
  v6 = v4[99];
  if ( (v6 & 0x6000) == 0 )
    return v2;
  v7 = *(_DWORD *)(a1 + 24);
  switch ( v7 )
  {
    case 1:
      if ( (unsigned int)PipIsProblemReadonly(v4, (unsigned int)v4[101]) )
        return (unsigned int)-1073741584;
      goto LABEL_5;
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
      goto LABEL_5;
  }
  if ( !v9 )
    return (unsigned int)-1073741808;
LABEL_5:
  PiPnpRtlBeginOperation(&P);
  PipClearDevNodeFlags(v4, 0x4000LL);
  PipClearDevNodeProblem(v4);
  if ( (unsigned int)(v4[75] - 769) > 1 )
    PnpRestartDeviceNode(v4);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v2;
}
