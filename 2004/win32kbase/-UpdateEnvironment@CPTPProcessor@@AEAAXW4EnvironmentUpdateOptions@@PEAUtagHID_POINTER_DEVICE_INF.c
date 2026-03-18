/*
 * XREFs of ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A4DA4
 * Callers:
 *     _lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_ @ 0x1C00D2350 (_lambda_8b25baf4e42159d6485b143ed09b1133_--_lambda_invoker_cdecl_.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A3F04 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A2438 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01C65D0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::UpdateEnvironment(__int64 a1, char a2, struct tagHID_POINTER_DEVICE_INFO *a3)
{
  if ( (a2 & 1) != 0 )
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)a1, a3);
  return PTPEngineTraceProducer::SetEnvironment(
           *(PTPEngineTraceProducer **)(a1 + 512),
           (const struct PTPEnvironment *)(a1 + 520));
}
