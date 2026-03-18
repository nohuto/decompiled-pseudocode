/*
 * XREFs of WmipReferenceEntry @ 0x1406830D4
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x140681B1C (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x140682F00 (WmipFindGEByGuid.c)
 *     WmipSendEnableRequest @ 0x1406EAE74 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x1407400D4 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x1407403F0 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140740E38 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x140769080 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x1407A92A4 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1407A9328 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x1407AEB28 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407AEDE0 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407AFBD0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1407B1B58 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1407B1BE8 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x14092DB3C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092DF2C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x14092ED20 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
