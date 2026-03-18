/*
 * XREFs of _CaptureAndValidateUserModeDpiAwarenessContext@4 @ 0x6B7E0
 * Callers:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _W32SetCurrentThreadDpiAwarenessContext@4 @ 0x6B6B0 (_W32SetCurrentThreadDpiAwarenessContext@4.c)
 *     _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458 (_TransformMessageBetweenCoordinateSpaces@24.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsValidKernelDpiAwarenessContext@4 @ 0x94768 (_IsValidKernelDpiAwarenessContext@4.c)
 */

void __thiscall CaptureAndValidateUserModeDpiAwarenessContext(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // ebx

  v2 = (_DWORD *)this[51];
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || IsValidKernelDpiAwarenessContext(*v2) )
      this[48] = v3;
    else
      *v2 = 0;
    v2[1] = 0;
  }
}
