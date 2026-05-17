/*
 * XREFs of ExecuteHandler2@20 @ 0x4B30877C
 * Callers:
 *     ExecuteHandler@20 @ 0x4B308750 (ExecuteHandler@20.c)
 * Callees:
 *     <none>
 */

int __fastcall ExecuteHandler2(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int (__stdcall *a7)(int, int, int, int, _EXCEPTION_REGISTRATION_RECORD *, int))
{
  return a7(a3, a4, a5, a6, NtCurrentTeb()->NtTib.ExceptionList, a2);
}
