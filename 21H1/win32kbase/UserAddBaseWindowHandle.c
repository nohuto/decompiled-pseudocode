/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C01439D0
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C0135630 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     HMAllocObject @ 0x1C0070A30 (HMAllocObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C0143990 (LookForMatchingBaseWindowPHE.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1, unsigned int a2)
{
  size_t v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rbp
  void *v8; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl

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
  if ( (*(_DWORD *)(ThreadWin32Thread + 1216) & 0x1000000) == 0 )
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
    v14 = 13;
    v15 = 5;
    goto LABEL_21;
  }
  if ( !(_DWORD)v2 || (v8 = Win32AllocPoolZInit(v2, 0x64776255u)) != 0LL )
  {
    v10 = HMAllocObject(ThreadWin32Thread, 0LL, 0x17u, 0x88u);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 132) &= ~2u;
      v4 = 1;
      *(_QWORD *)(v10 + 56) = a1;
      *(_DWORD *)(v10 + 128) = v2;
      *(_QWORD *)(v10 + 120) = v8;
      v12 = (_QWORD *)(v10 + 96);
      v12[1] = v12;
      *v12 = v12;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      if ( v8 )
        Win32FreePool((__int64)v8, v5, v11);
      goto LABEL_12;
    }
    v14 = 12;
    v15 = 2;
LABEL_21:
    WPP_RECORDER_SF_qq(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      0xBu,
      v14,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_15;
  WPP_RECORDER_SF_qqd(
    (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
    2u,
    0xBu,
    0xBu,
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
  qword_1C02563C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
