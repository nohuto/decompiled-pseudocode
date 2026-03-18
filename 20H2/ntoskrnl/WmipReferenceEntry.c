/*
 * XREFs of WmipReferenceEntry @ 0x140648190
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x140647F88 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x140667D70 (WmipFindGEByGuid.c)
 *     WmipSendEnableRequest @ 0x1406C52E0 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140750834 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140750B50 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140751598 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14077A220 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x1407BA344 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1407BA3C8 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x1407BFBC8 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407BFE80 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C0C90 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1407C34F8 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1407C3588 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x140934C1C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093500C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x140935E00 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
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
