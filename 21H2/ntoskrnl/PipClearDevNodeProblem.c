/*
 * XREFs of PipClearDevNodeProblem @ 0x140764FE4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406602DC (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessClearDeviceProblem @ 0x140660388 (PiProcessClearDeviceProblem.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PiRestartRemovalRelations @ 0x1406EAC14 (PiRestartRemovalRelations.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140749448 (PnpProcessAssignResourcesWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x1409428B8 (PipAttemptDependentStart.c)
 *     IopQueueDeviceResetEvent @ 0x1409457D0 (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x140946EF8 (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14094F860 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     PnpTraceClearDevNodeProblem @ 0x1407650B0 (PnpTraceClearDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14095B624 (PiAuditDeviceEnableDisableAction.c)
 */

_UNKNOWN **__fastcall PipClearDevNodeProblem(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  result = &retaddr;
  P = 0LL;
  v3 = *(_DWORD *)(a1 + 404);
  v4 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v3 )
  {
    PiPnpRtlBeginOperation(&P);
    result = (_UNKNOWN **)PipClearDevNodeFlags(a1, 0x2000LL);
    v6 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v6 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v5, v6, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v4 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 13LL);
      result = (_UNKNOWN **)PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v3, v4);
      if ( v3 == 22 )
      {
        result = (_UNKNOWN **)SeAuditingWithTokenForSubcategory(137LL);
        if ( (_BYTE)result )
          result = (_UNKNOWN **)PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
      }
    }
    if ( P )
      return (_UNKNOWN **)PiPnpRtlEndOperation(P);
  }
  return result;
}
