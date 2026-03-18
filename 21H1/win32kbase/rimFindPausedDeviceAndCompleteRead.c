/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C00A34A8
 * Callers:
 *     rimCompleteReads @ 0x1C00A18A8 (rimCompleteReads.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1)
{
  struct RawInputManagerObject *v1; // rsi
  _QWORD **v2; // r14
  unsigned int v3; // ebp
  _QWORD *v4; // rbx
  _QWORD *v6; // rdi
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = a1;
  v2 = (_QWORD **)((char *)a1 + 592);
  v3 = -1073741823;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 == v2 )
      break;
    v6 = v4 - 24;
    v7 = *((_BYTE *)v4 - 56);
    if ( v7 == 3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v7 = *((_BYTE *)v6 + 136);
    }
    if ( v7 == 2 && (*((_DWORD *)v6 + 72) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( (struct RawInputManagerObject *)v6[53] != v1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)(v6 + 11), *((unsigned __int8 *)v6 + 136)) & *((_DWORD *)v1 + 21)) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v9 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (a1 = (struct RawInputManagerObject *)v4[1], *(_QWORD **)a1 != v4) )
      __fastfail(3u);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(v9 + 8) = a1;
    v4[1] = v4;
    *v4 = v4;
    if ( (v6[34] & 0x400) == 0 )
    {
      rimProcessDeviceBufferAndStartRead(v1, (struct RIMDEV *)(v6 + 11));
      if ( !*((_BYTE *)v1 + 584) )
        return 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)gRimLog,
        3u,
        1u,
        0xCu,
        (__int64)&WPP_983e01fc9fa9381bba5b22f4de9fad94_Traceguids,
        v4 - 24,
        v1);
  }
  return v3;
}
