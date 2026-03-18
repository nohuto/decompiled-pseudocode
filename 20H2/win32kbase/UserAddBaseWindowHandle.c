/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C013B330
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C012D2F0 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     HMAllocObject @ 0x1C0056580 (HMAllocObject.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013B2F0 (LookForMatchingBaseWindowPHE.c)
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
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v16; // r9d

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
  if ( (*(_DWORD *)(ThreadWin32Thread + 1232) & 0x1000000) == 0 )
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
  if ( LookForMatchingBaseWindowPHE(a1, CurrentProcessWin32Process, 0LL, v10) )
  {
    v4 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v16 = 13;
    LOBYTE(v5) = 5;
    goto LABEL_21;
  }
  if ( !(_DWORD)v2 || (v8 = Win32AllocPoolZInit(v2, 0x64776255u)) != 0LL )
  {
    LOBYTE(v11) = 23;
    v13 = HMAllocObject(ThreadWin32Thread, 0LL, v11, 136LL);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 132) &= ~2u;
      v4 = 1;
      *(_QWORD *)(v13 + 56) = a1;
      *(_DWORD *)(v13 + 128) = v2;
      *(_QWORD *)(v13 + 120) = v8;
      v14 = (_QWORD *)(v13 + 96);
      v14[1] = v14;
      *v14 = v14;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      if ( v8 )
        Win32FreePool((__int64)v8);
      goto LABEL_12;
    }
    v16 = 12;
    LOBYTE(v5) = 2;
LABEL_21:
    WPP_RECORDER_SF_qq(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v5,
      11,
      v16,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_15;
  LOBYTE(v12) = 2;
  WPP_RECORDER_SF_qqd(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    v12,
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
  qword_1C024E448 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
