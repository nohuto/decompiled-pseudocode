/*
 * XREFs of _LdrpLoadDll@16 @ 0x4B2A6B05
 * Callers:
 *     _LdrpCorInitialize@4 @ 0x4B2A6100 (_LdrpCorInitialize@4.c)
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpInitializeImportRedirection@0 @ 0x4B2EC596 (_LdrpInitializeImportRedirection@0.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __thiscall LdrpLoadDll(PUNICODE_STRING OriginalName, int a2, int a3)
{
  int v3; // ebx
  int StackCookie; // [esp+Ch] [ebp-114h] BYREF
  uintptr_t StackCookie_4; // [esp+10h] [ebp-110h] BYREF
  _WORD v8[130]; // [esp+18h] [ebp-108h] BYREF

  v3 = a3;
  LdrpLogDllState(5288);
  LODWORD(StackCookie_4) = 0x1000000;
  HIDWORD(StackCookie_4) = v8;
  v8[0] = 0;
  StackCookie = LdrpPreprocessDllName(OriginalName, (PUNICODE_STRING)&StackCookie_4, 0, (int)&a2);
  if ( StackCookie >= 0 )
    LdrpLoadDllInternal(a2, 4, 0, 0, v3, &StackCookie);
  if ( v8 != (_WORD *)HIDWORD(StackCookie_4) )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)HIDWORD(StackCookie_4));
  LODWORD(StackCookie_4) = 0x1000000;
  HIDWORD(StackCookie_4) = v8;
  v8[0] = 0;
  LdrpLogDllState(5289);
  return StackCookie;
}
