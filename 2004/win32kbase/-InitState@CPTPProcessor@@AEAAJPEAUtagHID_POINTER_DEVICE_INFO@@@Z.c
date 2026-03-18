/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A307C
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A23D0 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A2438 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C01C6198 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01C65D0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::InitState(
        struct PTPEngineTraceProducer **this,
        struct tagHID_POINTER_DEVICE_INFO *a2)
{
  _QWORD *v4; // rax
  struct IPTPEngine *v5; // rbx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  PTPEngineTraceProducer **v8; // rsi

  v4 = Win32AllocPoolZInit(0xF00uLL, 1886679893LL);
  v5 = (struct IPTPEngine *)v4;
  if ( v4 )
  {
    memset(v4 + 2, 0, 0xEF0uLL);
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = &CPTPEngine::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
    return 3221225495LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = this + 64;
  result = PTPEngineTraceProducer::Create(v5, PerformanceCounter.QuadPart, this + 64);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)*v8 + 4) = (unsigned __int64)(this + 29) & -(__int64)(this != 0LL);
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
    PTPEngineTraceProducer::SetEnvironment(*v8, (const struct PTPEnvironment *)(this + 65));
    return 0LL;
  }
  return result;
}
