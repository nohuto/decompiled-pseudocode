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

int __stdcall LdrpLoadDll(int a1, int a2)
{
  int v2; // ebx
  int v4; // [esp+Ch] [ebp-114h] BYREF
  int v5; // [esp+10h] [ebp-110h]
  _WORD *v6; // [esp+14h] [ebp-10Ch]
  _WORD v7[130]; // [esp+18h] [ebp-108h] BYREF

  v2 = a2;
  LdrpLogDllState(5288);
  v5 = 0x1000000;
  v6 = v7;
  v7[0] = 0;
  v4 = LdrpPreprocessDllName(0, &a1);
  if ( v4 >= 0 )
    LdrpLoadDllInternal(a1, 4, 0, 0, v2, &v4);
  if ( v7 != v6 )
    RtlDeleteBoundaryDescriptor(v6);
  v5 = 0x1000000;
  v6 = v7;
  v7[0] = 0;
  LdrpLogDllState(5289);
  return v4;
}
