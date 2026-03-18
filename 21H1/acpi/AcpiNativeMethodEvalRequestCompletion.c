/*
 * XREFs of AcpiNativeMethodEvalRequestCompletion @ 0x1C005B1B0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C00634E0 (AMLIRestartContext.c)
 */

__int64 __fastcall AcpiNativeMethodEvalRequestCompletion(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 64) = a2;
  return AMLIRestartContext(*(_QWORD *)a1);
}
