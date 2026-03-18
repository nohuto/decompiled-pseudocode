/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0016124
 * Callers:
 *     rimDoRimDevChangeCallback @ 0x1C00160BC (rimDoRimDevChangeCallback.c)
 *     rimOnPnpArrived @ 0x1C0016384 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C0016A94 (RIMOpenDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C001772C (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMSetDeviceInputMode @ 0x1C0017798 (RIMSetDeviceInputMode.c)
 *     RIMRemoveDevOfInputType @ 0x1C00564FC (RIMRemoveDevOfInputType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C005B608 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMOnPnpNotification @ 0x1C00A9D80 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     rimIssueReads @ 0x1C00AB7E4 (rimIssueReads.c)
 *     rimCompleteReads @ 0x1C00AB9B0 (rimCompleteReads.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0158CC0 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMIsInputSuppressed @ 0x1C01687B8 (RIMIsInputSuppressed.c)
 *     RIMDeviceNotify @ 0x1C016E2B0 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C0176F70 (rimProcessInput.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C01829AC (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C0182AFC (RIMHandleTTMDeviceInput.c)
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
