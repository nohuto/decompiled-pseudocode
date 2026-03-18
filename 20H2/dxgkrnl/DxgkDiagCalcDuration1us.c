/*
 * XREFs of DxgkDiagCalcDuration1us @ 0x1C001FE94
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C01738B0 (DpiFdoInvalidateChildRelations.c)
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDiagCalcDuration1us(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = MEMORY[0xFFFFF78000000320] - *a1;
  v2 = v1 * KeQueryTimeIncrement() / 10;
  if ( HIDWORD(v2) )
    LODWORD(v2) = -1;
  return (unsigned int)v2;
}
