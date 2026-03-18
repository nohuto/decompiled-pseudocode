/*
 * XREFs of RIMAddToActiveDevices @ 0x1C015BDA8
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C017B0F0 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C01CA208 (ApiSetPostPointerDeviceInRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rsi
  LARGE_INTEGER *QuadPart; // r14
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  LARGE_INTEGER *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r14
  __int64 v16; // rax
  LARGE_INTEGER **v17; // rax
  LARGE_INTEGER **v18; // rcx
  DWORD v19; // eax
  DWORD LowPart; // eax
  DWORD v21; // eax
  void *v22; // rcx
  void *v23; // rcx
  int v24; // edx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1 + 56;
  QuadPart = (LARGE_INTEGER *)a1[56].QuadPart;
  v5 = 0;
  ApiSetPostPointerDeviceInRangeMessage(a2);
  do
  {
    if ( QuadPart == v2 )
    {
      v15 = Win32AllocPoolZInit(0x20uLL, 0x78707352u);
      if ( v15 )
      {
        v16 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v16 + 188) |= 2u;
        v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v12, 1, 39, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v16);
        }
        *v15 = a2;
        v17 = (LARGE_INTEGER **)(v15 + 1);
        v18 = (LARGE_INTEGER **)v2[1].QuadPart;
        if ( *v18 != v2 )
          __fastfail(3u);
        *v17 = v2;
        v15[2] = v18;
        *v18 = (LARGE_INTEGER *)v17;
        v2[1].QuadPart = (LONGLONG)v17;
        LowPart = a1[58].LowPart;
        if ( LowPart == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v12, v13, v14);
          LowPart = a1[58].LowPart;
        }
        v21 = LowPart + 1;
        a1[58].LowPart = v21;
        if ( v21 == 1 )
        {
          v22 = (void *)a1[42].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v22, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v23 = (void *)a1[43].QuadPart;
          if ( v23 != (void *)-1LL )
          {
            v24 = 10;
            if ( a1[44].LowPart )
              v24 = a1[44].LowPart;
            DueTime.QuadPart = -10000LL * v24;
            ZwSetTimer(v23, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[47] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v5;
    }
    v11 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v11->QuadPart != a2 );
  v19 = v11[3].LowPart;
  if ( (v19 & 2) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
    v19 = v11[3].LowPart;
  }
  v5 = 1;
  if ( (v19 & 1) != 0 )
    v11[3].LowPart = v19 & 0xFFFFFFFE;
  return v5;
}
