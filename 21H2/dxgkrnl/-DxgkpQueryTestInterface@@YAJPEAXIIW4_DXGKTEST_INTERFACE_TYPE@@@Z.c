/*
 * XREFs of ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x1C03445D4
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01E0A20 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ?SysMmQueryTestInterface@@YAJPEAXII@Z @ 0x1C0070F84 (-SysMmQueryTestInterface@@YAJPEAXII@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0301864 (DxgkpIsDrtEnabled.c)
 *     QueryCoreInterface @ 0x1C0344644 (QueryCoreInterface.c)
 */

__int64 __fastcall DxgkpQueryTestInterface(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // esi

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !DxgkpIsDrtEnabled((__int64)a1, a2, a3, a4) )
    return 3221225485LL;
  if ( !v4 )
    return QueryCoreInterface(a1, v6, v5);
  if ( v4 != 1 )
    return 3221225485LL;
  return SysMmQueryTestInterface(a1, v6, v5);
}
