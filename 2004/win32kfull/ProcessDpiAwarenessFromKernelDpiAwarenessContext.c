/*
 * XREFs of ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C0056F40
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C0056DF0 (DestroyProcessInfoEditionRundown.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C0056EA4 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
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
