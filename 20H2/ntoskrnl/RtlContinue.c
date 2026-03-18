/*
 * XREFs of RtlContinue @ 0x14058DF88
 * Callers:
 *     <none>
 * Callees:
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 */

__int64 __fastcall RtlContinue(__int64 a1, __int64 a2)
{
  return NtContinueEx(a1, a2);
}
