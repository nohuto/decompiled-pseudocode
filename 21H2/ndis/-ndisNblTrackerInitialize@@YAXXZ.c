/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0144FAC
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     WPP_RECORDER_SF_i @ 0x1C007486C (WPP_RECORDER_SF_i_ea_1C007486C.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C011765C (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C01436B8 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 */

void __fastcall ndisNblTrackerInitialize(struct _DRIVER_OBJECT *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 *PoolWithTag; // rax
  int v5; // [rsp+20h] [rbp-38h]
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration(a1);
  qword_1C00E4AB0 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( *(int *)ndisNblTrackerMode >= 2 )
  {
    ndisNblTrackerTimer = (struct _EX_TIMER *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( ndisNblTrackerTimer )
    {
      v6[0] = 0LL;
      v6[1] = -1LL;
      v3 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
      if ( v3 > 0x7FFFFFFF )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 8), v1, v3, v2, v5);
        v3 = 0x7FFFFFFFLL;
      }
      ExSetTimer(ndisNblTrackerTimer, -(__int64)v3, v3, v6);
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            8LL * ndisNblTrackerHistorySize,
                                            0x6B74444Eu);
        ndisNblTrackerHistoryBuffer = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, 8LL * ndisNblTrackerHistorySize);
        else
          *(_DWORD *)ndisNblTrackerMode = 2;
      }
    }
    else
    {
      *(_DWORD *)ndisNblTrackerMode = 1;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xDu,
          (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids);
    }
  }
}
