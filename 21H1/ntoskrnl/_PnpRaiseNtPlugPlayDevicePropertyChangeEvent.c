/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14072B6D0
 * Callers:
 *     PipSetDevNodeState @ 0x14036B368 (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14036D6E8 (PipRestoreDevNodeState.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x14072ACAC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14072C104 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14072EA8C (PipClearDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PipSetDevNodeUserFlags @ 0x1407316A8 (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140731920 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140736A08 (PipClearDevNodeProblem.c)
 *     IopIncDisableableDepends @ 0x1407B0628 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407BF168 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x140899B4C (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x140729A64 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14072B744 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x14072BDB8 (_CmMapPropertyKeyToRegProp.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_140007B70[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
