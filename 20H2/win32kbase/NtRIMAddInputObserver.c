/*
 * XREFs of NtRIMAddInputObserver @ 0x1C0153CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     rimObsAddInputObserver @ 0x1C017C2C4 (rimObsAddInputObserver.c)
 *     rimObsCheckForObservationPermissions @ 0x1C017C84C (rimObsCheckForObservationPermissions.c)
 */

__int64 __fastcall NtRIMAddInputObserver(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // ebp
  unsigned int v12; // ebx

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      149,
      (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  if ( a7 )
  {
    if ( (unsigned int)rimObsCheckForObservationPermissions(a7) )
      v12 = rimObsAddInputObserver(a1, v10, a3, 1LL, a4, a5, a6, a7, a8);
    else
      v12 = -1073741790;
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
        150,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        0);
    }
    v12 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      23,
      151,
      (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
      v12);
  }
  return v12;
}
