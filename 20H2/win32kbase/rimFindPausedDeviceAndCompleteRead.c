/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C0024060
 * Callers:
 *     rimCompleteReads @ 0x1C00268A8 (rimCompleteReads.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0028AD4 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(
        struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct RawInputManagerObject *v4; // rsi
  _QWORD **v5; // r14
  unsigned int v6; // ebp
  _QWORD *v7; // rbx
  _QWORD *v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax

  v4 = a1;
  v5 = (_QWORD **)((char *)a1 + 592);
  v6 = -1073741823;
  while ( 1 )
  {
    v7 = *v5;
    if ( *v5 == v5 )
      break;
    v9 = v7 - 24;
    v10 = *((_BYTE *)v7 - 56);
    if ( v10 == 3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      v10 = *((_BYTE *)v9 + 136);
    }
    if ( v10 == 2 && (*((_DWORD *)v9 + 72) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( (struct RawInputManagerObject *)v9[53] != v4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v9 + 11, *((unsigned __int8 *)v9 + 136)) & *((_DWORD *)v4 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, a2, a3, a4);
    v12 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (a1 = (struct RawInputManagerObject *)v7[1], *(_QWORD **)a1 != v7) )
      __fastfail(3u);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(v12 + 8) = a1;
    v7[1] = v7;
    *v7 = v7;
    if ( (v9[34] & 0x400) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(v4, (struct RIMDEV *)(v9 + 11));
      if ( !*((_BYTE *)v4 + 584) )
        return 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        a2,
        1,
        12,
        (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
        (_BYTE)v7 + 64,
        (char)v4);
    }
  }
  return v6;
}
