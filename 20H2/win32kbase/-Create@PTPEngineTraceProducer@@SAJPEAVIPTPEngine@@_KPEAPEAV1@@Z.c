/*
 * XREFs of ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C01C3E18
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A0CFC (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C01C3D1C (--0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z.c)
 */

__int64 __fastcall PTPEngineTraceProducer::Create(
        struct IPTPEngine *a1,
        __int64 a2,
        struct PTPEngineTraceProducer **a3)
{
  PTPEngineTraceProducer *v6; // rax

  v6 = (PTPEngineTraceProducer *)Win32AllocPoolZInit(0x230uLL, 0x70747355u);
  if ( v6 )
    v6 = PTPEngineTraceProducer::PTPEngineTraceProducer(v6, a1);
  if ( !v6 )
    return 3221225495LL;
  *((_QWORD *)v6 + 69) = a2;
  *a3 = v6;
  return 0LL;
}
