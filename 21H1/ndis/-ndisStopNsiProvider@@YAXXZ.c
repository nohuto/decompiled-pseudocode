/*
 * XREFs of ?ndisStopNsiProvider@@YAXXZ @ 0x1C00B53B8
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0108770 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 */

void ndisStopNsiProvider(void)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids);
  NmrDeregisterProvider(NmrProviderHandle);
  NmrWaitForProviderDeregisterComplete(NmrProviderHandle);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_eedb22cfce4b35869e6cfcd0b1c979d6_Traceguids);
}
