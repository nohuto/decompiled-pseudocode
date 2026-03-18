/*
 * XREFs of _IsValidKernelDpiAwarenessContext@4 @ 0x94768
 * Callers:
 *     _CaptureAndValidateUserModeDpiAwarenessContext@4 @ 0x6B7E0 (_CaptureAndValidateUserModeDpiAwarenessContext@4.c)
 *     _NtUserTransformRect@16 @ 0x94646 (_NtUserTransformRect@16.c)
 *     _NtUserTransformPoint@16 @ 0xC1434 (_NtUserTransformPoint@16.c)
 * Callees:
 *     _IsDynamicDpiEnabled@0 @ 0xF5B38 (_IsDynamicDpiEnabled@0.c)
 */

BOOL __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  int v1; // ecx
  int v2; // ecx
  BOOL result; // eax

  v1 = a1 & 0x5FFFFFFF;
  result = 1;
  if ( v1 != 24592 && v1 != 1073766416 && v1 != 18 && v1 != 34 )
  {
    v2 = v1 & 0x7FFE00FF;
    if ( v2 != 17 && (v2 != 19 || !IsDynamicDpiEnabled()) )
      return 0;
  }
  return result;
}
