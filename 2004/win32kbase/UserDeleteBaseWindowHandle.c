/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C013D920
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C012FAF0 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00B0764 (WPP_RECORDER_SF_qqq.c)
 *     HMDestroyUnlockedObject @ 0x1C00C8490 (HMDestroyUnlockedObject.c)
 *     HMFindEntry @ 0x1C011B0D0 (HMFindEntry.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rdi
  char *v6; // rax
  _BYTE v8[16]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+58h] [rbp-30h]
  __int64 v11; // [rsp+60h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      20,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1224) & 0x1000000) != 0 )
  {
    v9 = a1;
    v11 = ThreadWin32Thread;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v8);
    v6 = HMFindEntry(
           (__int64)&v9,
           (unsigned int (__fastcall *)(__int64, char *))anonymous_namespace_::lookForMatchingMinuserHwnd);
    if ( v6 )
    {
      v2 = 1;
      if ( (v6[25] & 1) == 0 )
        HMDestroyUnlockedObject((struct _HANDLEENTRY *)v6);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      WPP_RECORDER_SF_qqq(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        0xBu,
        0x15u,
        (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
        CurrentProcessWin32Process,
        v11,
        a1);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v3,
        11,
        22,
        (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
        ThreadWin32Thread);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      23,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
LABEL_16:
  qword_1C0250448 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
