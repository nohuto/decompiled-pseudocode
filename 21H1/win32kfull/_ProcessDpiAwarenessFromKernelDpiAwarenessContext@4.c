/*
 * XREFs of _ProcessDpiAwarenessFromKernelDpiAwarenessContext@4 @ 0xB226C
 * Callers:
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YGXQAUtagWND@@@Z @ 0xB1F0C (-TraceLoggingShowWindowDPIAwarenessEvent@@YGXQAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z @ 0xB1FC2 (-TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall ProcessDpiAwarenessFromKernelDpiAwarenessContext(char a1)
{
  int v1; // ecx
  int v2; // esi
  int v3; // ecx

  v1 = a1 & 0xF;
  v2 = -1;
  if ( !v1 )
    return 0;
  v3 = v1 - 1;
  if ( !v3 )
    return 1;
  if ( v3 == 1 )
    return 2;
  UserSetLastError((struct _NT_TIB *)0x57);
  return v2;
}
