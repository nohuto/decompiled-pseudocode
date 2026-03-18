/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C010ADCC
 * Callers:
 *     UserJobCallout @ 0x1C010AAA0 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C010AC60 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C010AE14 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  if ( *(_QWORD *)a2 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x8000) != 0 )
      return JobCalloutAddProcessWorker(a1, a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)a1,
        4u,
        0xDu,
        0x17u,
        (__int64)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids,
        a1,
        a2);
  }
  return 0LL;
}
