/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510
 * Callers:
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036C6D8 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14037C7E0 (PipRestoreDevNodeState.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140726F44 (PipClearDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PipClearDevNodeUserFlags @ 0x14072A900 (PipClearDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140738104 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PipSetDevNodeUserFlags @ 0x14075F5CC (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x1407B3798 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407C2668 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14089AE6C (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x1407248A4 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140726584 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x140726BF8 (_CmMapPropertyKeyToRegProp.c)
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
    v6 = qword_140007B80[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
