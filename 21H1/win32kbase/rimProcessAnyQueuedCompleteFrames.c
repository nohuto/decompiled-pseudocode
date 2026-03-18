/*
 * XREFs of rimProcessAnyQueuedCompleteFrames @ 0x1C017C104
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00A0F20 (RIMOnPnpNotification.c)
 *     rimCompleteReads @ 0x1C00A18A8 (rimCompleteReads.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C017BD68 (rimDispatchAutoRepeatCompleteFrame.c)
 * Callees:
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005170C (rimFreeAutoRepeatCompleteFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C017B508 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     WPP_RECORDER_SF_qi @ 0x1C017BC94 (WPP_RECORDER_SF_qi.c)
 *     rimDispatchCompleteFrame @ 0x1C017BF34 (rimDispatchCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimProcessAnyQueuedCompleteFrames(struct RawInputManagerObject *a1, __int64 a2)
{
  struct RawInputManagerObject *v4; // r14
  struct RawInputManagerObject *v5; // rbx
  struct RawInputManagerObject *v6; // rax
  LARGE_INTEGER *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rsi
  int v12; // r12d
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  struct RawInputManagerObject **v17; // rcx
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = (struct RawInputManagerObject *)((char *)a1 + 552);
  v5 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 69);
  if ( v5 != (struct RawInputManagerObject *)((char *)a1 + 552) && *((_BYTE *)a1 + 584) )
  {
    Object = 0LL;
    if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
    {
      while ( 1 )
      {
        v7 = (LARGE_INTEGER *)((char *)v5 - 8);
        v14 = RawInputManagerDeviceObjectResolveHandle(*((char **)v5 + 3), 3u, *((_DWORD *)v5 + 18) == 0, &Object);
        v11 = (char *)Object;
        v12 = v14;
        if ( v14 >= 0 )
        {
          v15 = *((_DWORD *)Object + 68);
          if ( (v15 & 0x2000) == 0 || (v15 & 0x400000) != 0 )
          {
            v16 = *(_QWORD *)v5;
            if ( *(struct RawInputManagerObject **)(*(_QWORD *)v5 + 8LL) == v5 )
            {
              v17 = (struct RawInputManagerObject **)*((_QWORD *)v5 + 1);
              if ( *v17 == v5 )
              {
                *v17 = (struct RawInputManagerObject *)v16;
                *(_QWORD *)(v16 + 8) = v17;
                *((_QWORD *)v5 + 1) = v5;
                *(_QWORD *)v5 = v5;
                goto LABEL_12;
              }
            }
LABEL_27:
            __fastfail(3u);
          }
          v12 = -1073741823;
          ObfDereferenceObject(Object);
        }
        v5 = *(struct RawInputManagerObject **)v5;
        if ( v5 == v4 )
          goto LABEL_12;
      }
    }
    if ( *((struct RawInputManagerObject **)v5 + 1) != v4 )
      goto LABEL_27;
    v6 = *(struct RawInputManagerObject **)v5;
    if ( *(struct RawInputManagerObject **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_27;
    *(_QWORD *)v4 = v6;
    v7 = (LARGE_INTEGER *)((char *)v5 - 8);
    *((_QWORD *)v6 + 1) = v4;
    *((_QWORD *)v5 + 1) = v5;
    *(_QWORD *)v5 = v5;
    v8 = RawInputManagerDeviceObjectResolveHandle(*((char **)v5 + 3), 3u, *((_DWORD *)v5 + 18) == 0, &Object);
    v11 = (char *)Object;
    v12 = v8;
LABEL_12:
    if ( v12 < 0 )
    {
      if ( *((_QWORD *)a1 + 80) || *((_DWORD *)a1 + 216) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 21, (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v9,
            1,
            22,
            (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
            v7[4].QuadPart);
        }
        Win32FreePool((__int64)v7, v9, v10);
      }
    }
    else
    {
      --*((_QWORD *)v11 + 35);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qi(*((_QWORD *)v11 + 35), v9, v10, 20);
      if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v11 + 88), 2) & *((_DWORD *)a1 + 21)) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      rimFreeAutoRepeatCompleteFrame((__int64)(v11 + 88));
      *((_BYTE *)a1 + 584) = 0;
      InputTraceLogging::RIM::DispatchFrame((__int64)(v11 + 88), (__int64)v7, 2);
      rimDispatchCompleteFrame(a1, (struct RIMDEV *)(v11 + 88), v7);
      ObfDereferenceObject(v11);
    }
  }
}
