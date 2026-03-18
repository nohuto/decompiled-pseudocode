/*
 * XREFs of WmipReferenceEntry @ 0x140646BA0
 * Callers:
 *     WmipFindGEByGuid @ 0x1405DC190 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x140646998 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406F204C (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140741C54 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140741F70 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x1407429B8 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14076B460 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x1407AC404 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1407AC488 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x1407B1C88 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407B1F40 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407B2D40 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1407B4CC8 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1407B4D58 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x14092EDEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14092F1DC (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x14092FFD0 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
