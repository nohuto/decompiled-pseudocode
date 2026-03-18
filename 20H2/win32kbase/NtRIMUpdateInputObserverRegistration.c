/*
 * XREFs of NtRIMUpdateInputObserverRegistration @ 0x1C0155320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017C84C (rimObsCheckForObservationPermissions.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017DE28 (rimObsUpdateInputObserverRegistration.c)
 */

__int64 __fastcall NtRIMUpdateInputObserverRegistration(HANDLE Handle, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int updated; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      152,
      (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  if ( v2 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(v2) )
      updated = rimObsUpdateInputObserverRegistration(Handle, 1);
    else
      updated = -1073741790;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        23,
        153,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        0);
    }
    updated = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      154,
      (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
      updated);
  }
  return updated;
}
