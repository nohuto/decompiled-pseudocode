/*
 * XREFs of ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003423C
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180002F60 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18000376C (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004828 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012B44 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800216E4 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180034154 (-HampHostDynamicDepAllocateState@@YAJPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037A30 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003BD14 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007F5AC (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180081090 (-HampActPdcActivationCallback@@YAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 *     ?HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180081624 (-HampActWaitForNoChangeInProgress@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostAcquireLockSharedEx(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (((-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFEuLL) - 2) & *(_QWORD *)TlsGetValue(v2)) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
}
