/*
 * XREFs of EtwpShutdownPrivateLoggers @ 0x180081FC0
 * Callers:
 *     RtlExitUserProcess @ 0x18005EF00 (RtlExitUserProcess.c)
 * Callees:
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110E00 (EtwpDemuxUmTraceHandle.c)
 */

void EtwpShutdownPrivateLoggers()
{
  __int64 v0; // r8
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v9[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = 176;
    v1 = 0;
    v2 = 0LL;
    HIDWORD(v9[5]) = 0x20000;
    while ( 1 )
    {
      v3 = v1 & 0xFFFF7FFF;
      LODWORD(v8) = v1 & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v3 < 0x40 )
          goto LABEL_5;
        if ( !(unsigned int)EtwpDemuxUmTraceHandle(v1, &v8) )
          break;
      }
LABEL_7:
      ++v1;
      ++v2;
      if ( v1 >= 0x40 )
        return;
    }
    v3 = v8;
LABEL_5:
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v3 + 8));
    v4 = *(_QWORD *)(EtwpLoggerArray + 16LL * v3);
    if ( (v4 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v3 + 8));
    }
    else
    {
      v5 = *(_QWORD *)(EtwpLoggerArray + 16LL * v3);
      v6 = *(unsigned int *)(v4 + 324);
      v7 = 2LL * *(unsigned int *)(v5 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v5 + 20) + 8));
      if ( (v6 & 0x400) == 0 )
      {
        v9[1] = v2;
        EtwpStopUmLogger(v7, v6, v0, (__int64)v9);
      }
    }
    goto LABEL_7;
  }
}
