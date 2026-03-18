/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C0097530
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiIsFlipQueueBusy @ 0x1C0005420 (VidSchiIsFlipQueueBusy.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0007330 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C00F322C (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(struct _VIDSCH_GLOBAL *a1)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // eax
  bool v7; // di
  char IsFlipQueueBusy; // si
  LARGE_INTEGER v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r11
  unsigned int v12; // r8d
  unsigned int i; // eax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rdi
  ULONG v18; // r10d
  union _LARGE_INTEGER *Timeout; // r9
  union _LARGE_INTEGER v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER v28; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-68h] BYREF
  char *v30; // [rsp+70h] [rbp-58h]
  PVOID Object[2]; // [rsp+78h] [rbp-50h] BYREF
  __int128 v32; // [rsp+88h] [rbp-40h]

  v29[0] = (char *)a1 + 1248;
  v29[1] = (char *)a1 + 1192;
  v30 = (char *)a1 + 1360;
  while ( 1 )
  {
    v2 = v29;
    v3 = 1;
    v4 = 0;
    if ( VidSchiAcceptsIncomingWork((__int64)a1) )
      v3 = 2;
    while ( 1 )
    {
      v5 = *v2;
      *(_QWORD *)(v5 + 48) = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent((PRKEVENT)v5) )
        break;
      ++v4;
      ++v2;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    *(_QWORD *)(v5 + 40) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)v5);
LABEL_6:
    if ( v4 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      do
      {
        v6 = *((_DWORD *)a1 + 182);
        v28.QuadPart = 0LL;
        v7 = v6 || *((_DWORD *)a1 + 17) || *((_DWORD *)a1 + 18);
        IsFlipQueueBusy = VidSchiIsFlipQueueBusy((__int64)a1);
        if ( VidSchiAcceptsIncomingWork((__int64)a1) )
        {
          PerformanceFrequency.QuadPart = 0LL;
          v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( is_mul_ok(v9.QuadPart, 0x989680uLL) )
            v10 = (unsigned __int64)v9.QuadPart
                * (unsigned __int128)0x989680uLL
                / (unsigned __int64)PerformanceFrequency.QuadPart;
          else
            v10 = 10000000 * (v9.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                + 10000000
                * (v9.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                / PerformanceFrequency.QuadPart;
          v11 = -1LL;
          if ( *((_BYTE *)a1 + 3152) )
            v11 = *((_QWORD *)a1 + 392);
          v12 = *((_DWORD *)a1 + 20);
          for ( i = 0; i < v12; ++i )
          {
            if ( i >= *((_DWORD *)a1 + 176) )
              v14 = (__int64 *)*((_QWORD *)a1 + 79);
            else
              v14 = (__int64 *)(*((_QWORD *)a1 + 79) + 8LL * i);
            v15 = *v14;
            v16 = *(_QWORD *)(v15 + 128);
            if ( v16 && v11 >= v16 )
              v11 = *(_QWORD *)(v15 + 128);
          }
          if ( (v7 || IsFlipQueueBusy) && v11 >= v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
            v11 = v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
          v17 = (char *)a1 + 716;
          v18 = 3;
          if ( v11 == -1LL )
          {
            Timeout = 0LL;
            *v17 = 1;
          }
          else
          {
            *v17 = 0;
            Timeout = &v28;
            v20.QuadPart = 0LL;
            if ( v11 > v10 )
              v20.QuadPart = v10 - v11;
            v28 = v20;
          }
        }
        else
        {
          Timeout = 0LL;
          v17 = (char *)a1 + 716;
          *((_BYTE *)a1 + 716) = 0;
          v18 = 1;
        }
        v21 = v18;
        *(_OWORD *)Object = 0LL;
        v22 = 0LL;
        v32 = 0LL;
        v23 = MEMORY[0xFFFFF78000000320];
        do
        {
          v24 = (_QWORD *)v29[v22++];
          v24[3] = v23;
          Object[v22 - 1] = v24;
          --v21;
        }
        while ( v21 );
        v25 = KeWaitForMultipleObjects(v18, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
        *v17 = 0;
        v4 = v25;
      }
      while ( v25 > 1 && v25 != 258 || v25 == 258 && (unsigned int)VidSchiCheckHwProgress(a1) );
      VidSchiProfilePerformanceTick(15LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v4 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending((__int64)a1) )
      return 258LL;
  }
  if ( !VidSchIsTDRPending((__int64)a1) )
    return v4;
  return 258LL;
}
