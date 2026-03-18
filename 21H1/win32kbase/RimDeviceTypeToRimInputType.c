/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C00A30BC
 * Callers:
 *     RIMSetDeviceInputMode @ 0x1C0048570 (RIMSetDeviceInputMode.c)
 *     RIMRemoveDevOfInputType @ 0x1C0056BCC (RIMRemoveDevOfInputType.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0059E2C (RIMRegisterForDeviceChangeNotifications.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C005A5A8 (RIMOpenDev.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 *     rimCompleteReads @ 0x1C00A18A8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00A1968 (rimIssueReads.c)
 *     rimDoRimDevChangeCallback @ 0x1C00A3100 (rimDoRimDevChangeCallback.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00A34A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMFillDeviceHealthInfo @ 0x1C015F010 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C016B248 (RIMVirtAllocateHidDesc.c)
 *     RIMIsInputSuppressed @ 0x1C016EB08 (RIMIsInputSuppressed.c)
 *     RIMDeviceNotify @ 0x1C01745E0 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C017C104 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C017CC70 (rimProcessInput.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01886AC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01887FC (RIMHandleTTMDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimDeviceTypeToRimInputType(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // ecx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      return (*(_DWORD *)(a1 + 184) & 0x1000) != 0 ? 8 : 16;
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
  {
    if ( *(_BYTE *)(a1 + 48) != 3 )
      return 32LL;
    return 0LL;
  }
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL);
  if ( v5 == 7 )
    return 8LL;
  if ( (unsigned int)(v5 - 5) <= 1 )
    return 4LL;
  if ( (unsigned int)(v5 - 1) > 3 )
    return 0LL;
  return 16LL;
}
