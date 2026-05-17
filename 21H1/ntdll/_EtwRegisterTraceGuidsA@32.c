/*
 * XREFs of _EtwRegisterTraceGuidsA@32 @ 0x4B2E4370
 * Callers:
 *     <none>
 * Callees:
 *     _EtwRegisterTraceGuidsW@32 @ 0x4B2E43A0 (_EtwRegisterTraceGuidsW@32.c)
 */

int __stdcall EtwRegisterTraceGuidsA(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return EtwRegisterTraceGuidsW(a1, a2, a3, a4, a5, 0, 0, a8);
}
