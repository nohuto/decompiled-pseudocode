/*
 * XREFs of _EtwEventWriteFull@32 @ 0x4B3803E0
 * Callers:
 *     <none>
 * Callees:
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 */

NTSTATUS __stdcall EtwEventWriteFull(int a1, __int16 a2, int *a3, __int16 a4, _GUID *a5, int *a6, int a7, int a8)
{
  return EtwpEventWriteFull(a3, 0, a1, a2, 0, 0, a4, a5, a6, a7, a8);
}
