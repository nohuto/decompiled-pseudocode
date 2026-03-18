/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00327CC
 * Callers:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetStockObject @ 0x1C00326E0 (GreGetStockObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00BA440 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     IsValidKernelDpiAwarenessContext @ 0x1C002FFD4 (IsValidKernelDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
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
