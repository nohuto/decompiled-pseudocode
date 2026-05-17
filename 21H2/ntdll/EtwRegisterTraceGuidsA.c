/*
 * XREFs of EtwRegisterTraceGuidsA @ 0x180085860
 * Callers:
 *     <none>
 * Callees:
 *     EtwRegisterTraceGuidsW @ 0x180042A10 (EtwRegisterTraceGuidsW.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsA(
        __int64 a1,
        int a2,
        __int128 *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  return EtwRegisterTraceGuidsW(a1, a2, a3, a4, a5, 0, 0, a8);
}
