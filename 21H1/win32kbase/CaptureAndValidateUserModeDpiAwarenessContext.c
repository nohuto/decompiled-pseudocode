/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C006DE0C
 * Callers:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetStockObject @ 0x1C006DD20 (GreGetStockObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00AB330 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     IsValidKernelDpiAwarenessContext @ 0x1C000EC44 (IsValidKernelDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
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
