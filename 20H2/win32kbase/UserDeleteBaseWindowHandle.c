/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C013B5D0
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C012D7A0 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0075D64 (WPP_RECORDER_SF_qqq.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7700 (HMDestroyUnlockedObject.c)
 *     HMFindEntry @ 0x1C0119610 (HMFindEntry.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]

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
  if ( (*(_DWORD *)(ThreadWin32Thread + 1232) & 0x1000000) != 0 )
  {
    v15 = a1;
    v17 = ThreadWin32Thread;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v14,
      v6,
      v7,
      v8);
    v9 = HMFindEntry(
           (__int64)&v15,
           (unsigned int (__fastcall *)(__int64, char *))anonymous_namespace_::lookForMatchingMinuserHwnd);
    if ( v9 )
    {
      v2 = 1;
      if ( (v9[25] & 1) == 0 )
        HMDestroyUnlockedObject((struct _HANDLEENTRY *)v9, v10, v11, v12);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qqq(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v10,
        11,
        21,
        (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
        CurrentProcessWin32Process,
        v17,
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
  qword_1C024E448 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
