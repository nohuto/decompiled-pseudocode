/*
 * XREFs of PsIsProcessInAppSilo @ 0x140908390
 * Callers:
 *     <none>
 * Callees:
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     PsGetProcessSilo @ 0x14057F990 (PsGetProcessSilo.c)
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
