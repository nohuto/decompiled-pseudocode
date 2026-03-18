/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0083E9C
 * Callers:
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C005A2B8 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     GreGetStockObject @ 0x1C0083DB0 (GreGetStockObject.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     IsValidKernelDpiAwarenessContext @ 0x1C0020844 (IsValidKernelDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  int *v2; // rbx
  int v3; // edi

  v2 = *(int **)(a1 + 360);
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || IsValidKernelDpiAwarenessContext(v3) )
      *(_DWORD *)(a1 + 340) = v3;
    else
      *v2 = 0;
    v2[1] = 0;
  }
}
