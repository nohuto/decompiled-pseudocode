/*
 * XREFs of PsRevertToSelf @ 0x1407178A0
 * Callers:
 *     EtwpCreateLogFile @ 0x140716188 (EtwpCreateLogFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x140607260 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
