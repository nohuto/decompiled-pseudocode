/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800D0740
 * Callers:
 *     _LdrpInitialize @ 0x180074B8C (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 */

NTSTATUS LdrpDoDebuggerBreak()
{
  NTSTATUS result; // eax
  char ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  result = ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHideFromDebugger, &ThreadInformation, 1u, 0LL);
  if ( result >= 0 && !ThreadInformation )
    __debugbreak();
  return result;
}
