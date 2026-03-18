/*
 * XREFs of RimDeviceTypeToRimInputType @ 0x1C0028AD4
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0020F88 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1C0022754 (RIMOpenDev.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0024060 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeCallback @ 0x1C0025840 (rimDoRimDevChangeCallback.c)
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     rimCompleteReads @ 0x1C00268A8 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     rimIssueReads @ 0x1C00276B8 (rimIssueReads.c)
 *     RIMAllocateHidDesc @ 0x1C006E23C (RIMAllocateHidDesc.c)
 *     RIMRemoveDevOfInputType @ 0x1C007574C (RIMRemoveDevOfInputType.c)
 *     RIMSetDeviceInputMode @ 0x1C00BB8BC (RIMSetDeviceInputMode.c)
 *     RIMFillDeviceHealthInfo @ 0x1C0156760 (RIMFillDeviceHealthInfo.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162998 (RIMVirtAllocateHidDesc.c)
 *     RIMIsInputSuppressed @ 0x1C0166258 (RIMIsInputSuppressed.c)
 *     RIMDeviceNotify @ 0x1C016BE80 (RIMDeviceNotify.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessInput @ 0x1C0174B40 (rimProcessInput.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C018046C (RIMHandleTTMDeviceArrival.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01805BC (RIMHandleTTMDeviceInput.c)
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
