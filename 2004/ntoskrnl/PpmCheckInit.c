/*
 * XREFs of PpmCheckInit @ 0x140A6FE70
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *PpmCheckInit())(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, int); // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140C20DD8 = (__int64)PpmCheckRun;
  result = PpmCheckPeriodicStart;
  qword_140C20E18 = (__int64)PpmCheckPeriodicStart;
  qword_140C20DE0 = 0LL;
  qword_140C20DF8 = 0LL;
  qword_140C20DD0 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_140C20E20 = 0LL;
  qword_140C20E38 = 0LL;
  qword_140C20E10 = 0LL;
  return result;
}
