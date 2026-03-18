/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C013D680
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C012F640 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C00167E0 (WPP_RECORDER_SF_qqd.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     HMAllocObject @ 0x1C0094E60 (HMAllocObject.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013D640 (LookForMatchingBaseWindowPHE.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1, unsigned int a2)
{
  size_t v2; // rdi
  unsigned int v4; // esi
  int v5; // edx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rbp
  void *v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int16 v15; // r9
  unsigned __int8 v16; // dl

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      11,
      10,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  }
  v4 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8 = 0LL;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1224) & 0x1000000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v5,
      11,
      14,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      ThreadWin32Thread);
    goto LABEL_25;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( LookForMatchingBaseWindowPHE(a1, CurrentProcessWin32Process, 0LL) )
  {
    v4 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v15 = 13;
    v16 = 5;
    goto LABEL_21;
  }
  if ( !(_DWORD)v2 || (v8 = Win32AllocPoolZInit(v2, 1685545557LL)) != 0LL )
  {
    LOBYTE(v10) = 23;
    v12 = HMAllocObject(ThreadWin32Thread, 0LL, v10, 136LL);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 132) &= ~2u;
      v4 = 1;
      *(_QWORD *)(v12 + 56) = a1;
      *(_DWORD *)(v12 + 128) = v2;
      *(_QWORD *)(v12 + 120) = v8;
      v13 = (_QWORD *)(v12 + 96);
      v13[1] = v13;
      *v13 = v13;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      if ( v8 )
        Win32FreePool((__int64)v8);
      goto LABEL_12;
    }
    v15 = 12;
    v16 = 2;
LABEL_21:
    WPP_RECORDER_SF_qq(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v16,
      0xBu,
      v15,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_15;
  LOBYTE(v11) = 2;
  WPP_RECORDER_SF_qqd(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    v11,
    11,
    11,
    (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
    ThreadWin32Thread,
    a1,
    v2);
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      11,
      15,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  }
LABEL_15:
  qword_1C0250448 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
