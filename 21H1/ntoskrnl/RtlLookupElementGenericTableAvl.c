/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1402E5E00
 * Callers:
 *     PiDmLookupObject @ 0x1406A8A7C (PiDmLookupObject.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406FF5FC (PopNotifySessionUserPowerRequestCreated.c)
 *     PopPowerRequestDeleteEntryById @ 0x140700744 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x140700788 (PopPowerRequestFindEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1407007B8 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14070E454 (PopHandleConvergedPowerRequestUpdate.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiLookupInDDBCache @ 0x1407232E0 (PiLookupInDDBCache.c)
 *     PiSwFindBusRelations @ 0x14072C714 (PiSwFindBusRelations.c)
 *     PiPnpRtlObjectEventWorker @ 0x14072EEE0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindSwDevice @ 0x140734680 (PiSwFindSwDevice.c)
 *     PiDcHandleDeviceEvent @ 0x1407411F4 (PiDcHandleDeviceEvent.c)
 *     PiDqQueryApplyObjectEvent @ 0x14074BE34 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075DA40 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14076950C (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x14088CF58 (IopCleanupFileObjectIosbRange.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F4110 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
