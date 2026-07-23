/*
 * XREFs of _LdrpInitializeDllPath@12 @ 0x4B2CE876
 * Callers:
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpGetDelayloadExportDll@20 @ 0x4B2CF859 (_LdrpGetDelayloadExportDll@20.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogDllStateEx2@16 @ 0x4B32FDF3 (_LdrpLogDllStateEx2@16.c)
 */

void *__fastcall LdrpInitializeDllPath(int a1, int a2, int *a3)
{
  void *result; // eax
  bool v6; // zf
  size_t v7; // [esp-4h] [ebp-10h]

  LODWORD(v7) = 80;
  result = memset(a3, 0, v7);
  if ( (a2 & 1) != 0 || !a2 )
  {
    a3[4] = a1;
    a3[3] = a2 & 0xFFFFFFFE;
  }
  else
  {
    v6 = (ShowSnaps & 5) == 0;
    *a3 = a2;
    if ( !v6 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrutil.c",
        1445,
        "LdrpInitializeDllPath",
        2,
        "DLL search path passed in externally: %ws\n",
        a2);
    return (void *)LdrpLogDllStateEx2(*a3, 5312);
  }
  return result;
}
