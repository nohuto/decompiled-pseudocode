/*
 * XREFs of EtwEventWriteEx @ 0x18004F1A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x18004F278 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWriteEx(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  return EtwpEventWriteFull(a1, a2, a3, a4, 0, a5, a6, a7, a8);
}
