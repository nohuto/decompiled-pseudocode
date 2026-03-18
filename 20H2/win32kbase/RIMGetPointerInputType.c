/*
 * XREFs of RIMGetPointerInputType @ 0x1C015E880
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015981C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0159CA4 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C015FEE4 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0177CBC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017B0F0 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v1 - 1) <= 3 )
    return 2LL;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 3LL;
  if ( v1 == 7 )
    return 5LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v1, 1, 10, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, a1);
  }
  return 1LL;
}
