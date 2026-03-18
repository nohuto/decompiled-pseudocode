/*
 * XREFs of NtOpenThread @ 0x1405E0490
 * Callers:
 *     <none>
 * Callees:
 *     PsOpenThread @ 0x1405E14B4 (PsOpenThread.c)
 */

__int64 __fastcall NtOpenThread(int a1, int a2, int a3, int a4)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenThread(a1, a2, a3, a4, PreviousMode, PreviousMode);
}
