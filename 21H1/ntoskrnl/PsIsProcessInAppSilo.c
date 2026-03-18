/*
 * XREFs of PsIsProcessInAppSilo @ 0x140901920
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x14057B920 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !PsIsServerSilo(ProcessSilo);
  return v2;
}
