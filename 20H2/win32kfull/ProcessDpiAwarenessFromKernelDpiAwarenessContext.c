/*
 * XREFs of ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C0018EFC
 * Callers:
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0018E60 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     DestroyProcessInfoEditionRundown @ 0x1C001AAD0 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall ProcessDpiAwarenessFromKernelDpiAwarenessContext(char a1)
{
  unsigned int v1; // ebx
  int v2; // ecx
  int v3; // ecx

  v1 = -1;
  v2 = a1 & 0xF;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 2;
      else
        UserSetLastError(87LL);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
