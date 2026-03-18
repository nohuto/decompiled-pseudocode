/*
 * XREFs of RIMAddToActiveDevices @ 0x1C0164658
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C0183220 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C01D2508 (ApiSetPostPointerDeviceInRangeMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddToActiveDevices(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rsi
  LARGE_INTEGER *QuadPart; // r14
  unsigned int v5; // ebx
  __int64 v7; // rcx
  LARGE_INTEGER *v8; // rbp
  int v9; // edx
  _QWORD *v10; // r14
  __int64 v11; // rax
  LARGE_INTEGER **v12; // rax
  LARGE_INTEGER **v13; // rcx
  DWORD v14; // eax
  DWORD LowPart; // eax
  DWORD v16; // eax
  void *v17; // rcx
  void *v18; // rcx
  int v19; // edx
  union _LARGE_INTEGER DueTime; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1 + 56;
  QuadPart = (LARGE_INTEGER *)a1[56].QuadPart;
  v5 = 0;
  ApiSetPostPointerDeviceInRangeMessage(a2);
  do
  {
    if ( QuadPart == v2 )
    {
      v10 = Win32AllocPoolZInit(0x20uLL, 0x78707352u);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v11 + 188) |= 2u;
        v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v9, 1, 39, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids, v11);
        }
        *v10 = a2;
        v12 = (LARGE_INTEGER **)(v10 + 1);
        v13 = (LARGE_INTEGER **)v2[1].QuadPart;
        if ( *v13 != v2 )
          __fastfail(3u);
        *v12 = v2;
        v10[2] = v13;
        *v13 = (LARGE_INTEGER *)v12;
        v2[1].QuadPart = (LONGLONG)v12;
        LowPart = a1[58].LowPart;
        if ( LowPart == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
          LowPart = a1[58].LowPart;
        }
        v16 = LowPart + 1;
        a1[58].LowPart = v16;
        if ( v16 == 1 )
        {
          v17 = (void *)a1[42].QuadPart;
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v17, &DueTime, 0LL, 0LL, 0, 0, 0LL);
          v18 = (void *)a1[43].QuadPart;
          if ( v18 != (void *)-1LL )
          {
            v19 = 10;
            if ( a1[44].LowPart )
              v19 = a1[44].LowPart;
            DueTime.QuadPart = -10000LL * v19;
            ZwSetTimer(v18, &DueTime, 0LL, 0LL, 0, 0, 0LL);
            a1[47] = KeQueryPerformanceCounter(0LL);
          }
        }
      }
      return v5;
    }
    v8 = QuadPart - 1;
    QuadPart = (LARGE_INTEGER *)QuadPart->QuadPart;
  }
  while ( v8->QuadPart != a2 );
  v14 = v8[3].LowPart;
  if ( (v14 & 2) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    v14 = v8[3].LowPart;
  }
  v5 = 1;
  if ( (v14 & 1) != 0 )
    v8[3].LowPart = v14 & 0xFFFFFFFE;
  return v5;
}
