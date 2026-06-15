/*
 * XREFs of WPP_SF_dd @ 0x18000FD24
 * Callers:
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180012D98 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180012EA0 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180012FA8 (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002633C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180027958 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dd(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, va, 4LL, 0LL);
}
