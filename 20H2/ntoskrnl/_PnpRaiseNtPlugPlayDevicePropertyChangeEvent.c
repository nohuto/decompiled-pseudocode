/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140734FA0
 * Callers:
 *     PipSetDevNodeState @ 0x14036D418 (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036F2E0 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14037E510 (PipRestoreDevNodeState.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1407342E0 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x14073457C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1407359D4 (PipClearDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PipClearDevNodeUserFlags @ 0x140739390 (PipClearDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14073CF84 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PipClearDevNodeProblem @ 0x14073F500 (PipClearDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140740B58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1407424D8 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x14076DC3C (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x1407C16E8 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407D0E68 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x1408A099C (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x140733334 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140735014 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x140735688 (_CmMapPropertyKeyToRegProp.c)
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
    v6 = qword_140007BA0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
