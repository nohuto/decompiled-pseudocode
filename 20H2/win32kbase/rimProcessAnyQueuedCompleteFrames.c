/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C0173FD4
 * Callers:
 *     rimCompleteReads @ 0x1C00268A8 (rimCompleteReads.c)
 *     RIMOnPnpNotification @ 0x1C0026D30 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C0173608 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00BF6BC (rimFreeAutoRepeatCompleteFrame.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C0172DA8 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     WPP_RECORDER_SF_qi @ 0x1C0173534 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C01737D4 (rimDispatchCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct RawInputManagerObject *v6; // r14
  struct RawInputManagerObject *v7; // rbx
  struct RawInputManagerObject *v8; // rax
  LARGE_INTEGER *v9; // rbp
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  char *v13; // rsi
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  struct RawInputManagerObject **v23; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = (struct RawInputManagerObject *)((char *)a1 + 552);
  v7 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 69);
  if ( v7 != (struct RawInputManagerObject *)((char *)a1 + 552) && *((_BYTE *)a1 + 584) )
  {
    Object = 0LL;
    if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
    {
      while ( 1 )
      {
        v9 = (LARGE_INTEGER *)((char *)v7 - 8);
        v20 = RawInputManagerDeviceObjectResolveHandle(*((char **)v7 + 3), 3u, *((_DWORD *)v7 + 18) == 0, &Object);
        v13 = (char *)Object;
        v14 = v20;
        if ( v20 >= 0 )
        {
          v21 = *((_DWORD *)Object + 68);
          if ( (v21 & 0x2000) == 0 || (v21 & 0x400000) != 0 )
          {
            v22 = *(_QWORD *)v7;
            if ( *(struct RawInputManagerObject **)(*(_QWORD *)v7 + 8LL) == v7 )
            {
              v23 = (struct RawInputManagerObject **)*((_QWORD *)v7 + 1);
              if ( *v23 == v7 )
              {
                *v23 = (struct RawInputManagerObject *)v22;
                *(_QWORD *)(v22 + 8) = v23;
                *((_QWORD *)v7 + 1) = v7;
                *(_QWORD *)v7 = v7;
                goto LABEL_12;
              }
            }
LABEL_27:
            __fastfail(3u);
          }
          v14 = -1073741823;
          ObfDereferenceObject(Object);
        }
        v7 = *(struct RawInputManagerObject **)v7;
        if ( v7 == v6 )
          goto LABEL_12;
      }
    }
    if ( *((struct RawInputManagerObject **)v7 + 1) != v6 )
      goto LABEL_27;
    v8 = *(struct RawInputManagerObject **)v7;
    if ( *(struct RawInputManagerObject **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_27;
    *(_QWORD *)v6 = v8;
    v9 = (LARGE_INTEGER *)((char *)v7 - 8);
    *((_QWORD *)v8 + 1) = v6;
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    v10 = RawInputManagerDeviceObjectResolveHandle(*((char **)v7 + 3), 3u, *((_DWORD *)v7 + 18) == 0, &Object);
    v13 = (char *)Object;
    v14 = v10;
LABEL_12:
    if ( v14 < 0 )
    {
      if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 21, (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 4;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v11,
            1,
            22,
            (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
            v9[4].QuadPart);
        }
        Win32FreePool((__int64)v9);
      }
    }
    else
    {
      --*((_QWORD *)v13 + 35);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qi(*((_QWORD *)v13 + 35), v11, v12, 20);
      if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v13 + 88), 2) & *((_DWORD *)a1 + 21)) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
      rimFreeAutoRepeatCompleteFrame((__int64)(v13 + 88));
      *((_BYTE *)a1 + 584) = 0;
      InputTraceLogging::RIM::DispatchFrame((__int64)(v13 + 88), (__int64)v9, 2);
      rimDispatchCompleteFrame(a1, (struct RIMDEV *)(v13 + 88), v9, v19);
      ObfDereferenceObject(v13);
    }
  }
}
