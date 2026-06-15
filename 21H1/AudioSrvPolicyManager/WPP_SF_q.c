/*
 * XREFs of WPP_SF_q @ 0x180026FCC
 * Callers:
 *     ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x180027288 (-IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002BC3C (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_q(TRACEHANDLE a1, USHORT a2, const GUID *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, a3, a2, va, 8LL, 0LL);
}
