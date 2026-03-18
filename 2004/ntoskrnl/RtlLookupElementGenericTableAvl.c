/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x140202510
 * Callers:
 *     PiDmLookupObject @ 0x1405DA44C (PiDmLookupObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x14064D42C (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x14064D488 (PopPowerRequestFindEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14064E318 (PopNotifySessionUserPowerRequestCreated.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A5D5C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A71B0 (PopHandleConvergedPowerRequestUpdate.c)
 *     PiLookupInDDBCache @ 0x14072CBB4 (PiLookupInDDBCache.c)
 *     PiSwFindBusRelations @ 0x140732A00 (PiSwFindBusRelations.c)
 *     PiSwFindSwDevice @ 0x140732A40 (PiSwFindSwDevice.c)
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 *     PiDcHandleDeviceEvent @ 0x140742D74 (PiDcHandleDeviceEvent.c)
 *     PiDqQueryApplyObjectEvent @ 0x140750254 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075FD50 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14076B8EC (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088E278 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F5400 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx

  v2 = 0LL;
  i = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 == GenericLessThan )
          break;
        if ( v6 != GenericGreaterThan )
        {
          v7 = 1;
          goto LABEL_10;
        }
        if ( !i->RightChild )
        {
          v7 = 3;
          goto LABEL_10;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
