/*
 * XREFs of PsGetProcessSilo @ 0x14057F990
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x140908390 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
